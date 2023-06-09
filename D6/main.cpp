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
};





int main()
{
    Students student1("Jim","Business",2.4);
    Students student2("Pam","Art",3.6);





    return 0;
}
