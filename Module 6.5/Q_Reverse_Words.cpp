// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     string word;
    

//     while (ss >> word)
//     {
//         // for (int i = word.size() - 1; i >= 0; i--)
//         // {
//         //     cout << word[i];
//         // }
//         reverse(word.begin(),word.end());
//         cout<<word<<" ";
        
//         // cout << " "; 
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  stringstream ss(s);
  string word;
   int flag =1;
   // this can be done by using flag also
   // mind it flag is changed only one time ever
//   bool isfirst_word= true;
    while( ss>> word)
    {
        if(!flag)
        {
            cout<<" ";
        }

        reverse( word.begin(),word.end());
        cout<<word;
        // isfirst_word= false ;
        flag= 0 ;
    }
 return 0;
}