// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//  int test;
//  cin>> test;
//  for(int i=0;i<=test;i++)
//  {
//     int ans=0;
//     char arr[26];
//     cin>>arr;

//     for(int j=0;j<strlen(arr);j++)
//     {
//         char store= arr[i];
//         int index= store- 'A';
//         if(arr[index]==0)
//         {
//             ans= ans+2;
//             arr[index]=1;
//         }
//         else 
//         {
//             ans++;
//         }
//     }
//     cout<<ans<<endl;

//  }
//  return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int ans = 0;
        char arr[26];
        cin >> arr;

        for (int j = 0; j < strlen(arr); j++)
        {
            char store = arr[j];
            int index = store - 'A';
            if (arr[index] == 0)
            {
                ans = ans + 2;
                arr[index] = 1;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
