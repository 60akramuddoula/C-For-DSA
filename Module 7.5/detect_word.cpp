#include <bits/stdc++.h>
using namespace std;
int main()
{
 string sen;
 getline(cin,sen);
 string terget;
 cin>>terget;
 stringstream ss(sen);
 string word;
 int cnt=0;
//  while(ss>>word)
//  {
//     if(word==terget)
//     {
//         cnt++;
//     }
//  }

for( int i=0;i<sen.size();i++)
{
    while(sen.find(terget)!=-1)
    {
        cnt++;
    }
}
 cout<<cnt<<endl;

 return 0;
}