//https://neps.academy/br/exercise/676
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

signed main(){
    op
        int n, maiormaior, maiormenor, maior;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    maiormaior=v[n-1]*v[n-2]*v[n-3];
    maiormenor=v[0]*v[1]*v[n-1];
    if(maiormaior>maiormenor){
maior=maiormaior;
}
    else{
        maior=maiormenor;
    }
    cout<<maior<<endl;
    return 0;
}
