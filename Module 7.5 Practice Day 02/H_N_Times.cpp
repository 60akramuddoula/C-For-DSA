#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i =1; i<=test; i++)
    {
        int n;
        cin >> n;
        char ch;

        for (int j = 0; j < n; j++)
        {
            cin >> ch;
        }

        for (int m = 0; m < n; m++)
        {
            cout <<ch;
            if( m<(n-1))
            {
                cout<<" ";
            } 
        }
        cout << endl; 
    }

    return 0;
}
