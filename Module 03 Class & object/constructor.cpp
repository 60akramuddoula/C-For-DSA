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
    Student karim("karim",60,12,'A');
    Student rahim("rahim",65,12,'B');
    cout<<karim.name<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    cout<<"now showing Rahim's information"<<endl;
 
    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
 
 return 0;
}
