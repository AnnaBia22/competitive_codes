//https://neps.academy/br/exercise/2126
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

signed main(){
    op
    int nota[5], maior1=0, maior2=0, trofeu=0, placa=0;
    for(int i=0; i<5; i++){
        cin>>nota[i];
    } 
    for(int i=0; i<5; i++){
        if(nota[i]>maior1){
            maior1=nota[i];
        }
    }
    for(int i=0; i<5; i++){
        if(nota[i]>maior2 && nota[i]<maior1){
            maior2=nota[i];
        }
    }
    for(int i=0; i<5; i++){
        if(nota[i]==maior1){
            trofeu++;
        }
        else if(nota[i]==maior2){
            placa++;
        }
    }
    cout<<trofeu<<' '<<placa<<endl;
    return 0;
}
