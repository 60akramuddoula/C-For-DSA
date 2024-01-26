#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a= new int[5];

    for(int i=0; i<5;i++)
    {
        cin>>a[i];
    }
    int b[7];
    b[5]=60;
    b[6]=70;

    for(int i=0; i<5;i++)
    {
      b[i]=a[i];
    }
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" "<<endl; 
    }
    //delete an array from dynamic memory 
    // here windows camn give me extra excess thats why it can show some value 
    delete[] a ; 
    for( int i=0; i<5; i++)
    {
        cout<<a[i]<<" "; 
    }







 return 0;
}