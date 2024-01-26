// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//  int n; 
//  cin>>n; 
// int a=0;
// int max_val=0;
// for(int i=1;i<=n;i++)
// {
//     cin>>a;
//        int mn= max(0,a);
//       if(mn>0)
//       {
//         max_val=mn;
//       }
// }

// cout<<max_val;
//  return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a = 0;
//     int max_val = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a;
//         int mn = max(0, a);
//         if (mn > max_val)
//         {
//             max_val = mn;
//         }
//     }

//     cout << max_val;
//     return 0;
// }
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n; 
        cin>>n; 
        int mn=INT_MIN;
        for(int i=0; i<=n; i++)
        {
            int num;
            cin>>num;
            mn = max(mn,num);

        }
        cout<<mn;
     
     return 0;
    }