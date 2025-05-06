//https://neps.academy/br/exercise/5
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

signed main(){
    op
        int h, p, f, d;
    cin>>h>>p>>f>>d;
    for(int i=0; i<17; i++){
         f+=d;
        if(f==16 && d==1){
            f=0;
        }
        else if(f==-1 && d==-1){
            f=15;
        }
        if(f==p){
            cout<<'N'<<endl;
            return 0;
        }
        else if(f==h){
            cout<<'S'<<endl;
            return 0;
        }
    }
    return 0;
}
