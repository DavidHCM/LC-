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
    Book(string name, string aAuthor, int aPages)
    {
        // This constructor is executing each time we call the function
        title = name;
        author = aAuthor;
        pages = aPages;
    }
};





int main()
{
    Book book1("Harry potter","JK Rowling", 300);
    



    return 0;
}
