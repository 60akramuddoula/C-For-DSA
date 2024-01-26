#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string name ;
    int roll;
    int marks;

};
int main()
{
 student a[3];
 for( int i=0;i<3;i++)
 {
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    cin.ignore();
 }
 student mx;
 mx.marks= INT_MIN;

 for( int i=0; i<3; i++)
 {
    if(a[i].marks>INT_MIN)
    {
        mx= a[i];
    }
 }
 cout<<mx.marks<<" "<<mx.name<<" "<<mx.roll<<endl; 
 cout<<mx.marks<<" "<<mx.name<<" "<<mx.roll<<endl; 
 cout<<mx.marks<<" "<<mx.name<<" "<<mx.roll<<endl; 

 return 0;
}