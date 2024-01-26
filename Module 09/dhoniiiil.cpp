#include <bits/stdc++.h>
using namespace std;
class crickter
{
    public:

   int  jersey_no;
	string country;

};















int main()
{
      
    crickter* dhoni = new crickter; 
    crickter* kohli = new crickter; 

    dhoni->jersey_no=25;
    dhoni->country="india";

    kohli->jersey_no= dhoni->jersey_no;
    kohli->country= dhoni->country;

    cout<<kohli->country<<endl;
    cout<<kohli->jersey_no<<endl;
    delete dhoni;
    cout<<dhoni->country<<endl;
    cout<<dhoni->jersey_no<<endl;



 return 0;
}