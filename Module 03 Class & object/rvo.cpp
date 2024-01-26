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
        void display()
        {
            cout<<"Hi, Beche acho?"<<endl;
        }
  };
    
     Student fun()
     {  
        char name[100] ="akramuddoula bappi";
        Student rahim(name,65,12,'B');
            return rahim; 
     }
int main()
{
        Student rahim= fun();
        rahim.display();
    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
 
 
 return 0;
}