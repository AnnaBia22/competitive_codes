//https://neps.academy/br/exercise/3010
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=0 && n<=2){
        cout<<"Fervendo"<<endl;
    }
    else if(n>=3 && n<=5){
        cout<<"Quente"<<endl;
    }
    else if(n>=6 && n<=10){
        cout<<"Morno"<<endl;
    }
    else if(n>10){
        cout<<"Frio"<<endl;
    }
    return 0;
}
