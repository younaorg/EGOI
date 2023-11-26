#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, num; cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> num;
        v[i]=num; 
    }
    for(int i=0; i<n; i++){
        if(i==(n-1)){
            cout << "IMPOSSIBLE" << endl;
            break;
        }
        for(int j=i+1; j<n; j++){
            if((v[i]+v[j])==x){
                cout << i+1 << ' ' << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}