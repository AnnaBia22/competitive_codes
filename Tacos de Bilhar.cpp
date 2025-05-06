// https://neps.academy/br/exercise/54
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

signed main(){
    op
    int c, tacos=0;
    set <int> estoque;
    cin>>c;
    for(int i=0; i<c; i++){
        int tmh;
        cin>>tmh;
        if(estoque.find(tmh)==estoque.end()){
            estoque.insert(tmh);
            tacos+=2;
        }
        else{
            estoque.erase(tmh);
        }
    }
    cout<<tacos<<endl;
    return 0;
}
