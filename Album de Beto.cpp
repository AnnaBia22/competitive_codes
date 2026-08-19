//https://neps.academy/br/exercise/3755

#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int32_t main() {
    op
    int x, n, p;
    cin >> x >> n >> p;
    x = x - n - (p * 5);
    if(x <= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
