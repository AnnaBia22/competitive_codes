//https://neps.academy/br/exercise/276
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define op ios::sync_with_stdio(false); cin.tie(0);

int main(){
    op
   queue <char> jogos;
    for(char i = 'A'; i <= 'P'; i++){
        jogos.push(i); 
    }
    for(int i=0; i<15; i++){
        int a, b;
        cin>>a>>b;
        char t1, t2;
        t1=jogos.front();
        jogos.pop();
        t2=jogos.front();
        jogos.pop();
        if(a>b){
            jogos.push(t1);
        }
        else{
            jogos.push(t2);
        }
    }
    cout<<jogos.front()<<endl;
    return 0;
}
