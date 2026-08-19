//https://neps.academy/br/exercise/2438

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int32_t main() {
    op
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    int l = 0, r = 1, c = 1;
    set <int> rep;
    rep.insert(v[0]);
    while(r < n){
        while(rep.count(v[r])){
            rep.erase(v[l]);
            l++;
        }
        rep.insert(v[r]);
        c = max(c, (int)rep.size());
        r++;
    }
    cout << c << endl;
    return 0;
}
