#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
    int age;
    int marks1;
    int marks2;
    string name ;

    person( string nm, int ag, int m1)
    {
        name=nm;
        age= ag;
        marks1= m1;
        // marks2= m2;
    }
     int total_marks()
     {
        return marks1;
        return marks1;
        // return marks1+marks2;
        // cout<<"inside the function is called "<<endl;
     }




};
int main()
{   
    person bappi(" Bappi",18,95);
    person akramuddoula("akramuddoula",20,98);
     bappi.total_marks();
    //  akramuddoula.total_marks();

    if(bappi.marks1> akramuddoula.marks1)
    {
        cout<<bappi.name<<endl;
    }
    else 
    {
        cout<<akramuddoula.marks1<<endl;
    }
    bappi.total_marks();
 
 return 0;
}