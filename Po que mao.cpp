//https://neps.academy/br/exercise/8
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

signed main(){
    op
        int f, pkm[3], c=0;
    cin>>f;
    for(int i=0; i<3; i++){
        cin>>pkm[i];
    }
    sort(pkm, pkm+3);
    for (int i=0; i<3; i++){
        if(f>=pkm[i]){
            c++; 
            f-=pkm[i];
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
