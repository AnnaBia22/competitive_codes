//https://neps.academy/br/exercise/123
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

signed main(){
    op
        int p[4];
    cin>>p[0]>>p[1]>>p[2]>>p[3];
    sort(p, p+4);
    cout<<abs(p[0]+p[3]-p[1]-p[2])<<endl;
    return 0;
}
