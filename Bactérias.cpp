//https://neps.academy/br/exercise/2712
#include <iostream>

using namespace std;

int main(){
    int n, p, t, contador=0;
    cin>>n>>p;
    for(t=p; t<=n; t=t*p){
     contador++;
}
    if(t<n){
        cout<<contador-1<<endl;
    }
    else{
        cout<<contador<<endl;
    }

    return 0;
}
