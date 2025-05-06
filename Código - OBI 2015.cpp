//https://neps.academy/br/exercise/47
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int c=0;
    for(int i=0; i<=n-3; i++){
        if(b[i]==1 && b[i+1]==0 && b[i+2]==0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
