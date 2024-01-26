#include <bits/stdc++.h>
using namespace std;
class Student
{   public:
    char name[100];
    int roll; 
    int cls;
    char section; 
};
int main()
{
    Student karim; 
    karim.section='A';
    karim.roll=20;
    karim.cls=12;
    char nm[100]="karim";
    strcpy(karim.name,nm);

    Student bappi; 
    bappi.section='B';
    bappi.roll=21;
    bappi.cls=12;
    char nmm[100]="bappi";
    strcpy(karim.name,nmm);

    cout<<bappi.section<<endl;
   


 return 0;
}