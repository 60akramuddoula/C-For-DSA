// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
    
//     for (int i = 1; i <= test; i++)
//     {
//         int n;
//         cin >> n;
        
//         if (n % 2 == 0)
//         {
//              int a[n];
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[j];
//         }
        
//         int even = 0;
//         int odd = 0;
//         int div = n / 2;
    
//         for (int m = 0; m < n; m++)
//         {
//             if (a[m] % 2 == 0)
//             {
//                 even++;
//             }
//             else
//             {
//                 odd++;
//             }
//         }
        
//         int result;
//        int result = abs(even - odd);
//        cout<<result<<endl;
//         }
//         else 
//         {
//              cout << "-1" << endl;
//             continue;
//             //need to move the next test case 
//         }
        
        
        
//     }

//     return 0;
// }


// new vabe kora 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            int a[n];
            for (int j = 0; j < n; j++)
            {
                cin >> a[j];
            }

            int even = 0;
            int odd = 0;
            int div = n / 2;

            for (int m = 0; m < n; m++)
            {
                if (a[m] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            int result = abs(even - div);
            cout << result << endl;
        }
        else
        {
            cout << "-1" << endl;
            // continue;
            
        }
    }

    return 0;
}

