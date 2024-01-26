#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

  for(int i=1;i<=test;i++) {
        int n;
        cin >> n;

        int arr[n];
        int min_ = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int result = arr[i] + arr[j] + j - i;
                min_ = min(min_, result);
            }
        }

        cout << min_ << endl;
    }

    return 0;
}
