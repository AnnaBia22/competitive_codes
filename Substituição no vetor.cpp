//https://neps.academy/br/exercise/401
#include <bits/stdc++.h>
#define endl "\n"
#define op ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    op
        int l[10];
    for(int i=0; i<10; i++){
        cin>>l[i];
    }
    int menor=100;
    for(int i=0; i<10; i++){
        if(l[i]<menor){
         menor=l[i];
            }
    } 
        cout<<"Menor: "<<menor<<endl<<"Ocorrencias: "; 
    for(int i=0; i<10; i++){
        if(l[i]==menor){
        cout<<i<<" ";
            l[i]=-1;
            }
    }
        cout<<endl;
        for(int i=0; i<10; i++){
        cout<<l[i]<<" ";
    }
cout<<endl;
            return 0;
    }
