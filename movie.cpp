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


// main() reads in a file and stores the info into movie objects
// arguments: input.txt must exist in the directory
// returns: 0 when complete
int main(){

    //first test - checks getters, setters, and print() for movie objects
    /*Movie kk;
    kk.setWriter("Robert Mark Kamen");
    kk.setYear(1984);
    kk.setTitle("The Karate Kid");
    kk.print();
    
    cout << "\nTitle: " << kk.getTitle() << endl;
    cout << "Year: " << kk.getYear() << endl;
    cout << "Screenwriter: " << kk.getWriter() << endl;*/

    vector<Movie> mov;		//create a vector of movies as a container

    ifstream fin("input.txt");
    int count = 0;
    if ( fin.good( )){
        string line;		//holder for the line that is being read

        while (getline(fin, line)){ //get the movie title
            Movie m;		//create temporary movie object
            m.setTitle(line);

            //assign year
            int y;
            fin >> y;
            m.setYear(y);
            fin.ignore();	//gets the readline to the next line after the year
            
            //assign screenwriter
            getline(fin, line);
            m.setWriter(line);
            
            mov.push_back(m);	//append the movie object to the container

        }
    }
    //print out the values stored in the saved container
    mov[0].print();
    mov[1].print();
    mov[2].print();
    mov[3].print();

    return 0;
}
