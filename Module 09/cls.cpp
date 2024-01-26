#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, math_marks, cls;
    char section;

    Student(string nm, int x, char b, int marks, int clas)
    {
        name = nm;
        roll = x;
        section = b;
        math_marks = marks;
        cls = clas;
    }

    int getmarks()
    {
        return math_marks;
    }

    string getname()
    {
        return name;
    }
};

int main()
{
    Student person_1("Bappi", 60, 'A', 90, 12);
    Student person_2("Akramuddoula", 65, 'B', 95, 11);
    Student person_3("Habib", 65, 'B', 99, 11);

    if (person_1.getmarks() > person_2.getmarks() && person_1.getmarks()>person_3.getmarks())
    {
        cout << person_1.getname() << endl;
    }
    else if(person_2.getmarks() > person_3.getmarks() && person_3.getmarks()>person_1.getmarks())
    {
        cout << person_2.getname() << endl;
    }
    else 
    {
         cout << person_3.getname() << endl;
    }
    

    return 0;
}
