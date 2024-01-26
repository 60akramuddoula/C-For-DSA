#include <bits/stdc++.h>
using namespace std;
int main()
{
 int test;
 cin>> test;

string tik;
 for(int i=1;i<=test;i++)
 {   
    int sum1=0;
    int sum2=0;
    cin>>tik;
    for( int j=0; j<tik.size()/2;j++)
    {
        sum1=sum1+tik[j]-'0';
    }
    for( int m =tik.size()/2; m<tik.size() ; m++)
    {
        sum2=sum2+tik[m]-'0';
    }
    if(sum1== sum2)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
 }
 return 0;
}