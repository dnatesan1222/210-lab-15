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

    ifstream fin("input.txt");
    int count = 0;
    if ( fin.good( )){
        string line;
        array<Movie,4> m;

        while (getline(fin, line)){ //get the movie title
            
            m[count].setTitle(line);
            int y;
            fin >> y;
            m[count].setYear(y);
            fin.ignore();	//gets the readline to the next line after the year
            getline(fin, line);
            m[count].setWriter(line);
            count += 1;

        }
    }
    m[0].print();
    m[1].print();
    m[2].print();
    m[3].print();

}
