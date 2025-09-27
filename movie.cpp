// COMSC-210 | Lab 15 | Diksha Tara Natesan
// IDE used: Vim (Terminal)


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


class Movie{
private:
    string writer;	//movie's screenwriter
    int year;		//year movie was released
    string title;	//movie's title

public:
    // getters: no arguments, returns the stored values of the instance variables
    string getWriter()		{ return writer; }
    int getYear()		{ return year; }
    string getTitle()		{ return title; }

    // setters: take ints as arguments and sets instance variables
    void setWriter(string w)	{ writer = w; }
    void setYear(int y)		{ year = y; }
    void setTitle(string t)	{ title = t; }

    // other methods:
    void print(){
        cout << '\n' << setw(15) << "Movie: " << title << endl;
        cout << setw(15) << "Year: " << year << endl;
	cout << setw(15) << "Screenwriter: " << writer << '\n' << endl;
    }
};

int main(){

    Movie kk;
    kk.setWriter("Robert Mark Kamen");
    kk.setYear(1984);
    kk.setTitle("The Karate Kid");
    kk.print();

    array<Movie,4> mov;

    ifstream fin("input.txt");
    int count = 0;
    if ( fin.good( )){
        string line;

        while (getline(fin, line)){ //get the movie title
            Movie m;            
            m.setTitle(line);
            int y;
            fin >> y;
            m.setYear(y);
            fin.ignore();	//gets the readline to the next line after the year
            getline(fin, line);
            m.setWriter(line);
            mov[count] = m;
            count += 1;

        }
    }
    mov[0].print();
    mov[1].print();
    mov[2].print();
    mov[3].print();

}
