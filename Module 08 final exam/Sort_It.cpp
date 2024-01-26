#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string nm ;
    int cls;
    char sec;
    int id ;
    int math_marks;
    int eng_marks;
    int total_marks;

};

bool cmp( student a, student b)
{
    if(a.total_marks==b.total_marks)
    {
       if(a.id<b.id) return true; 
       else return false;
    
    }
   
    else
    {
        if(a.total_marks>b.total_marks) return true; 
        else return false;
    }
}


int main()
{
 int n; cin>>n;
//  cin.ignore();
 student a[n];
 for(int i=0;i<n;i++)
 {
    // getline(cin,a[i].nm);
    cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks;

    a[i].total_marks= a[i].math_marks+ a[i].eng_marks;
  

 }

 // sorting according to marks
    sort(a,a+n,cmp);

 for( int i=0;i<n; i++)
 {
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].math_marks
    <<" "<<a[i].eng_marks<<" "<<endl;
 }


 return 0;
}



