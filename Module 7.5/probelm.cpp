#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string name ;
    int roll;
    int marks;

};
bool cmp ( student a ,student b)
{
    if(a.marks==b.marks)
    {
        if(a.roll>b.roll) return true ;
        else return false ;   
    }
    else 
    {
        if(a.marks<b.marks) return true ;
        else return false ; 
    }
}

int main()
{
 int n; cin>>n;
 // mind it intger newr pr getline nite parse na tai 
 // habijabi dekhy so be carefull when u are  going to take 
 // integer value and getline 
 cin.ignore();
 student a[3];
 for( int i=0;i<3;i++)
 {
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].marks;
    cin.ignore();
 }

 // sorting call korbo 
 sort(a,a+n,cmp);

 for( int i=0;i<3;i++)
 {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<
    a[i].marks<<endl; 
 }
 return 0;
}