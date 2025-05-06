//https://neps.academy/br/exercise/282
#include <bits/stdc++.h>
using namespace std;

long long n;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>n;
    int contador=0;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            contador++;
            if(i != 1 && i != n / i) {
                contador++;
                }
        }
        if(contador>2){
            break;
        }
    }
    if(contador<=2){
        cout<<'N'<<endl;
    }
    else{
        cout<<'S'<<endl;
    }
    return 0;
}
