#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string nm ;
    int cls;
    char sec;
    int math_marks;
    int eng_marks;

};


int main()
{
 int n; cin>>n;
//  cin.ignore();
 student a[n];
 for(int i=0;i<n;i++)
 {
    // getline(cin,a[i].nm);
    cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].math_marks>>a[i].eng_marks;
  

 }
 int j=n-1;
 int i=0;
 while( i<j)
 {
    swap( a[i],a[j]);
    i++;
    j--;
 }

 for( int i=0;i<n; i++)
 {
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].math_marks
    <<" "<<a[i].eng_marks<<" "<<endl;
 }


 return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// class student 
// {
//     public:
//     string name ;
//     int roll;
//     int marks;

// };


// int main()
// {
//  student a[3];
 
//  for( int i=0;i<3;i++)
//  {
  
//     cin>>a[i].nm>>a[i].roll>>a[i].marks;
//     cin.ignore();
//  }
//  int j=3-1;
//  int i=0;
//  while(i<j)
//  {
//     swap(a[i],a[j]);
//     i++;
//     j--;
//  }

//  for( int i=0;i<3;i++)
//  {
//     cout<<a[i].name<<" "<<a[i].roll<<" "<<
//     a[i].marks<<endl; 
//  }
//  return 0;
// }