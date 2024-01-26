#include <bits/stdc++.h>
using namespace std;


class customSort
{
    public:
    char c;
    int cnt;
};
// custom sort korte hole ekta boolean function lagbe 
// clas er baire and main er opre jeta always 2 ta obj 
// receive korbe but compare korbe obj er properties 
// j ami kiser  vittite sort korte chai .
bool cmp( customSort a, customSort b)
{
    if(a.cnt>b.cnt) return true ;
    else return false; 

}

int main()
{
    int n; cin>>n;
    customSort frq[26];
    for(int i=0;i<26;i++)
    {
        frq[i].c= i+'a';
        frq[i].cnt=0;

    }
    for( int i =0;i<n;i++)
    {
        char ch; 
        cin>>ch;
        frq[ch-'a'].cnt++;
        // ch-'a' index a j obj ache tar vitore j cnt ache setar 
        // value increase korte hbe . but normal array sort er
        // belay sudu ++ korlei hoto. kintu eta obj tai dot operator use korte hobe
    }
    // sort korbo initial and ses er ager value dibo and cmp function dibo
        sort(frq,frq+26,cmp);

    for( int i=0;i<26;i++)
    {
        // cout<<frq[i].c<<" "<<frq[i].cnt<<endl;
        // ami chai se letter guoa ache segular cnt show korte only
        // tai loop use korbo
        if(frq[i].cnt> 0)
        {
            // cout<<frq[i].c<<" "<<frq[i].cnt<<endl;
            for( int j=0;j<frq[i].cnt;j++)
            {
                cout<<frq[i].c;
            }
        }

    }
 
 return 0;
}