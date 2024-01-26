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
 int j=3-1;
 int i=0;
 while(i<j)
 {
    swap(a[i],a[j]);
    i++;
    j--;
 }

 for( int i=0;i<3;i++)
 {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<
    a[i].marks<<endl; 
 }
 return 0;
}