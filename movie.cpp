// COMSC-210 | Lab 15 | Diksha Tara Natesan
// IDE used: Vim (Terminal)


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Movie{
private:
    string writer;	//movie's screenwriter
    int year;		//year movie was released
    string title;	//movie's title

public:
    // getters: no arguments, returns the stored values of the instance variables
    int getWriter()		{ return writer; }
    int getYear()		{ return year; }
    int getTitle()		{ return title; }

    // setters: take ints as arguments and sets instance variables
    void setWriter(string w)	{ writer = w; }
    void setYear(int y)		{ year = y; }
    void setTitle(string t)	{ title = t; }

};

int main(){

    Movie kk;
    kk.setWriter("Robert Mark Kamen");
    kk.setYear(1984);
    kk.setTitle("The Karate Kid");



}
