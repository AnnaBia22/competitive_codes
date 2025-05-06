//https://neps.academy/br/exercise/278
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

signed main(){
    op
    int a, b, ca=0, cb=0;
    cin>>a>>b;
    set <int> ali;
    set <int> bia;
    for(int i=0; i<a; i++){
        int x;
        cin>>x;
        ali.insert(x);
    }
    for(int i=0; i<b; i++){
        int x;
        cin>>x;
        bia.insert(x);
    }
     for(int x : ali){
        if(bia.count(x) == 0){
            ca++;
        }
    }
    for(int x : bia){
        if(ali.count(x) == 0){
            cb++;
        }
    }
    cout<<min(ca,cb)<<endl;
    return 0;
}
