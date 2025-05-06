//https://neps.academy/br/exercise/2793
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], p[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        p[a[i]-1]=i+1;
    }
        for(int i=0; i<n; i++){
         cout<<p[i]<<endl;
    }
    return 0;
}
