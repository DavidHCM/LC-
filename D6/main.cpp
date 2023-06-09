#include <iostream>

using namespace std;

// Class
class Book
{
public:
    string title;
    string author;
    int pages;

    // Constructor
    // The constructor goes inside the class declaration
    Book(string name)
    {
        // This constructor is executing each time we call the function
        cout << "Creating object: " << name << endl;
    }
};





int main()
{
    Book book1("Harry potter");
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 300;



    return 0;
}
