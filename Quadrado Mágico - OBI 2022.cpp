//https://neps.academy/br/exercise/2068
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int quad[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> quad[i][j];
        }
    }
    for(int l=0; l<n; l++){
        for(int c=0; c<n; c++){
            if(quad[l][c]==0) {
                if(l>0){
                    int st=0;
                    for(int i=0; i<n; i++){
                        st+=quad[0][i];
                    }
                   int sf=0;
                    for(int i=0; i<n; i++){
                        sf+=quad[l][i];
                    }

                    cout<<st-sf<<endl<<l+1<<endl<<c+1;
        }
                else {
                    int st=0;
                    for(int i=0; i<n; i++) {
                        st+=quad[1][i];
                    }
                    int sf=0;
                    for(int i=0; i<n; i++){
                        sf+=quad[l][i];
                    }

                    cout<<st-sf<<endl<<l+1<<endl<<c+1<<endl;
                }
            }
        }
    }

    return 0;
}

