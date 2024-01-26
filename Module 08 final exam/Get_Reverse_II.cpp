#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string nm ;
    int cls;
    char sec;
    int id; 

};


int main()
{
 int n; cin>>n;
//  cin.ignore();
 student a[n];
 for(int i=0;i<n;i++)
 {
    // getline(cin,a[i].nm);
    cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id;
  

 }
 int j=n-1;
 int i=0;
 while( i<j)
 {
    swap( a[i].id,a[j].id);
    i++;
    j--;
 }

 for( int i=0;i<n; i++)
 {
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl;
 }


 return 0;
}



