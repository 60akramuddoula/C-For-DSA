#include <bits/stdc++.h>
using namespace std;
class Student
  {
     public:
    char name[100];
    int roll; 
    int cls;
    char section; 

    Student(char* ch ,int x,int y,char s)
{
   strcpy(name,ch);
   roll=x;
   cls=y;
   section=s;
   
}
  };
      
int main()
{
    char name[100]="akramuddoula bappi";
    Student* bappi = new Student(name,60,12,'A');
//   (  *bappi).roll=55;// updating the information for bappi if i make any mistake .
    // cout<<dynamic.name<<endl; 

    //shortcut upay to change the data 
    bappi->roll=52;
    // cant use this bcz its now in form of pointer ; 
    int* p = new int ; 
    *p=10;
    cout<<*p<<endl; //then just do the same manner as it is for dynamic object for bappi named 


    cout<<bappi->name<<endl; //shortcut upay for printing dynamic object 
    cout<<(*bappi).roll<<endl;
    cout<<(*bappi).section<<endl;
    cout<<(*bappi).cls<<endl;
    // delete an object 
    delete bappi; 
    // lets take a proof wheather it is deleted or not below
     cout<<bappi->name<<endl; //shortcut upay for printing dynamic object 
    cout<<(*bappi).roll<<endl;
    cout<<(*bappi).section<<endl;
    cout<<(*bappi).cls<<endl;
 

    
 return 0;
}