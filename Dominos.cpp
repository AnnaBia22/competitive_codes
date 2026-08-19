//https://neps.academy/br/exercise/3757

#include <bits/stdc++.h>
#define int long long 
#define endl "\n"
#define pb push_back
#define pii pair<int, pair<int, int>>
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int32_t main() {
	op
    int n;
    cin >> n;
    int a = 1, v[n];
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    for(int i=1; i<=n && i <=a; ++i){
        int c = i + v[i-1] - 1;
        if(c > a)
            a=c;
    }
    if(a>n)
        a=n;
    cout << a << endl;
    return 0;    
}
