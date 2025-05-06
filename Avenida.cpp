//https://neps.academy/br/exercise/2791
#include <iostream>

using namespace std;

int main(){
    int d;
    cin>>d;
    if (d>=0 && d<=200){
        cout<<d<<endl;
    }
    else if (d>200 && d<=400){
        cout<<400-d<<endl;
    }
    else if (d>400 && d<=600){
        cout<<d-400<<endl;
    }
    else if (d>600 && d<=800){
        cout<<800-d<<endl;
    }
    else if (d>800 && d<=1000){
        cout<<d-800<<endl;
    }
    else if (d>1000 && d<=1200){
        cout<<1200-d<<endl;
    }
    else if (d>1200 && d<=1400){
        cout<<d-1200<<endl;
    }
    else if (d>1400 && d<=1600){
        cout<<1600-d<<endl;
    }
    else if (d>1600 && d<=1800){
        cout<<d-1600<<endl;
    }
    else if (d>1800 && d<=2000){
        cout<<2000-d<<endl;
    }
    return 0;
}
