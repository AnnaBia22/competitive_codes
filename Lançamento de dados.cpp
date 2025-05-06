//https://neps.academy/br/exercise/188
#include <bits/stdc++.h>
using namespace std;

int dado[12];

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, x, max=0;
    cin>>n;
    for(int i=0; i<n; i++){
       cin>>x;
       dado[x-1]++;
    }
    for(int i=0; i<12; i++){
        if(dado[i]>max){
            max=dado[i];
        }
    }
    for(int i=0; i<12; i++){
        if(dado[i]==max){
            cout<<i+1<<' ';
        }
    }
    cout<<endl;
    return 0;
}
