#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    stringstream ss(name);
    string word;
    int flag = 0;
    
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            flag = 1;
            break; // ore mama Ratul paya gesi break kor jldi be
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
