//https://br.spoj.com/problems/ACOES1MG/

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define pb push_back
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int investimento_max(int n, int k){
    if(k>=n)
        return 1;
    int x, y;
    x=n/2;
    y=n-x;
    return investimento_max(x, k) + investimento_max(y, k);
}

int32_t main(){
    op
    int n, k;
    vector<int> valor, max, investe;
    while (true) {
        int n, k;
        cin>>n>>k;
        if (n==0 && k==0)
            break;
        valor.pb(n);
        max.pb(k);
    }
    for(int i=valor.size(); i>0; i--)
        investe.pb(investimento_max(valor[i-1], max[i-1]));
    for(int i=investe.size(); i>0; i--)
        cout<<investe[i-1]<<endl;
    return 0;
}
