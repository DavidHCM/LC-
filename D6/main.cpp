#include <iostream>

using namespace std;

/*
// Class
class Students
{
public:
    string name;
    string major;
    int gpa;
    Students(string aName, string aMajor, int aGPA)
    {
        name = aName;
        major = aMajor;
        gpa = aGPA;
    }

    // Function
    bool hasHonors()
    {
        if(gpa >= 3.5)
        {
            return true;
        }
        return false;
    }
};

Students student1("Jim","Business",2.4);
    Students student2("Pam","Art",3.6);


    if(student1.hasHonors())
    {
        cout << "Has honors" << endl;
    }
    else
    {
        cout << "Does not have honors" << endl;
    }


 */



class Movie
{
private:
    string title;
    string director;
public:
    Movie(string aTitle, string aDirector)
    {
        setDirector(aDirector);
        setTitle(aTitle);

    }

    // Setters

    void setTitle(string aTitle)
    {
        title = aTitle;
    }
    void setDirector(string aDirector)
    {
        director = aDirector;
    }

    // Getters

    string getTitle()
    {
        return title;
    }
    string getDirector()
    {
        return director;
    }
};

class Ratings : Movie
{
public:
    string rating;

    Ratings(string aTitle1, string aDirector1, string aTitle, string aDirector, string aRating) : Movie(aTitle1, aDirector1)
    {
        setDirector(aDirector);
        setTitle(aTitle);
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        rating = aRating;
    }
    string getRating()
    {
        return rating;
    }

};


int main()
{
    Ratings avengers(std::string(), std::string(), "The avengers", "Joss Whedon", "PG-13");
    cout << avengers.getRating() << endl;
    avengers.setRating("NR");
    cout << avengers.getRating();


    return 0;
}
