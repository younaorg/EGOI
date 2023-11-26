/**#include <bits/stdc++.h>

using namespace std;

long long  main(){
    long long  n, x, num; cin >> n >> x;
    vector<long long > v(n);
    for(long long  i=0; i<n; i++){
        cin >> num;
        v[i]=num; 
    }
    for(long long  i=n; i>0; i--){
        if(i==(n-1)){
            cout << "IMPOSSIBLE" << endl;
            break;
        }
        for(long long  j=i+1; j<n; j++){
            //cout << v[i] << ' ' << v[j] << endl;
            if((v[i]+v[j])==x){
                cout << i+1 << ' ' << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}**/

#include <bits/stdc++.h>

using namespace std;

int  main() {
	long long N;
	cin >> N; 

	vector<long long> v(N);
    vector<long long> first; 
    vector<long long> second; 

	for (long long i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
    reverse(v.begin(), v.end());   
    first.push_back(v[0]); 

	for (long long  i=1; i<N; i++) {
        long long  sumfirst = (accumulate(first.begin(),first.end(),0));
        long long  sumsecond = (accumulate(second.begin(),second.end(),0)); 
		if(sumfirst>sumsecond){
            second.push_back(v[i]); 
        } else {
            first.push_back(v[i]); 
        }
	}
    long long firstsum = accumulate(first.begin(),first.end(),0);
	long long secondsum = accumulate(second.begin(),second.end(),0);
	long long max = std::max(firstsum, secondsum); 
    long long min = std::min(firstsum, secondsum); 
    long long res = max-min; 
	cout << res << endl;
	return 0;
}
