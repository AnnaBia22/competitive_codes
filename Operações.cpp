//https://neps.academy/br/exercise/218
#include <bits/stdc++.h>

using namespace std;

int main(){
    char op;
    double a, b;
    cin>>op>>a>>b;
    cout.precision(2);
    cout.setf(ios::fixed);
    if(op=='M'){
        cout<<a*b<<endl;
    }
    else{
        cout<<a/b<<endl;
    }
    return 0;
}
