//https://neps.academy/br/exercise/252
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

signed main(){
    op
    int n;
    set <int> alunos;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        alunos.insert(a);
    }
    cout<<alunos.size()<<endl;
    return 0;
}
