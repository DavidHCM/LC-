#include <iostream>

using namespace std;

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





int main()
{
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





    return 0;
}
