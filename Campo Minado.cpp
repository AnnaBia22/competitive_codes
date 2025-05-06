//https://neps.academy/br/exercise/241
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    int cm[55];
    for(int i=1; i<n+1; i++){
        cin>>cm[i];
    }
    cm[0]=0;
    cm[n+1]=0;
    for(int i=1; i<n+1; i++){
            cout<<cm[i-1]+cm[i]+cm[i+1]<<endl;
    }
    return 0;
}
