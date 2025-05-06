//https://neps.academy/br/exercise/2608
#include <iostream>
using namespace std;

int main(){
    int b, a, c=0;
    cin>>b>>a;
    int toys[b];
    for(int i=0; i<b; i++){
        cin>>toys[i];
    }
    for(int i=0; i<b; i++){
        if(toys[i]<=a){
        c++;
}
    }
cout<<c;
    return 0;
}
