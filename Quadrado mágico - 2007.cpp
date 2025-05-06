//https://neps.academy/br/exercise/236
#include <bits/stdc++.h>
#define endl "\n"
#define op ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    op
        int n;
    cin>>n;
    int quad[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>quad[i][j];
        }
    }
    int soma0=0, soma=0;
    for(int l=0; l<n; l++){
        for(int c=0; c<n; c++){
           if (l==0){
               soma0+=quad[0][c];
           }
            else{
                soma+=quad[l][c];
            }
               }
        if(l>0 && soma0!=soma){
         cout<<"-1"<<endl;
            return 0;
           }
        else{
            soma=0;
        }

    }    
    for(int c=0; c<n; c++){
        for(int l=0; l<n; l++){
                soma+=quad[l][c];
               }
        if(soma0!=soma){
         cout<<"-1"<<endl;
            return 0;
           }
        else{
            soma=0;
        }
    }
    for(int c=0; c<n; c++){
        soma+=quad[c][c];   
        }
       if(soma0!=soma){
         cout<<"-1"<<endl;
            return 0;
           }
    soma=0;
        for(int c=n-1; c>=0; c--){
                soma+=quad[n-1-c][c];
               }
        if(soma0!=soma){
         cout<<"-1"<<endl;
            return 0;
           }
    cout<<soma0<<endl;  
    return 0;
}
