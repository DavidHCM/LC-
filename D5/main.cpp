#include <iostream>

using namespace std;

/*
// Functions
// Same as C the functions are the same and have the same principals
void hello(string indi)
{
    cout << indi << endl;
}
 */

//  --- Class ---

// This class can be seen as a template for a book datatype (this is a very ambiguous example)
class Book
{
    // Attributes public
    public:
        string title;
        string author;
        int pages;
        int ID;
};

int main()
{
    /*
    // Madlibs
    // Enter values with a console in

    // This part is just to remember some stuff
    string color, noun,someone;

    cout << "Enter color:";
    // getline to get a string
    getline(cin,color);

    cout << "Enter a noun:";
    getline(cin,noun);

    cout << "Enter someone:";
    getline(cin,someone);

    // We get all the values in the next story
    cout << "Roses are " << color << endl;
    cout << noun << " are blue" << endl;
    cout << "I love " << someone << endl;


    // Arrays

    // The arrays are same as C, with the same sintaxis

    // Functions are the same as C
    // hello("Hello!");

    // If statements are the same and same thing with switch statements are the same as C

    // While and for work the same as C


    // Pointers


    int age = 19;
    int *pAge = &age;
    // Here with & im printing the pointer of the location of the age.
    // It works the same as C, same thing to access the information in the pointer.
    cout << "Original age location: " << &age << endl;

    cout << "Pointer of the age location: " << pAge << endl;
    // We are getting the reference of the memories address
    cout << "Value of the pointer locating the age: "<< *pAge << endl;
    */

    // ==========================================================
    // Classes & Objects
    // ==========================================================


    /*
     * A class can be seen as a new datatype in de POO, where u can make a class that specify a datatype to make something to exist. And an object is the actual instance of the class.
     */

    // Creating the book with an object:
    Book firstBook;
    firstBook.title = "C++ Starters";
    firstBook.author = "No one";
    firstBook.pages = 100;
    firstBook.ID = 1;

    return 0;
}
