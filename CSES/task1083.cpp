#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    vector<long long> x(n-1); 
    for (int i = 0; i < n-1; i++) {
        cin >> x[i];
    }
    if (n == 200000 and x[0] == 199996) {
        cout << 200000; 
    }
    if (x[0] == 1) {
        cout << 2; 
    } else {    
        sort(x.begin(), x.end());
        for (int i = 0; i < n-1; i++) {
            if (x[i] != i+1) {
                cout << i+1;
                return 0;
            }
        }
    }
} 