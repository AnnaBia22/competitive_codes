//https://neps.academy/br/exercise/643
#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

vector<int> cidades[53];
int c, e, l, p, dist[53];
bool visited[53];

void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    dist[s]=0;
    while(!q.empty()){
        int g = q.front();
        q.pop();
        for(int i=0; i<cidades[g].size(); i++){
            int vizinho=cidades[g][i];
            if(!visited[vizinho]){
                visited[vizinho]=true;
                dist[vizinho]=dist[g]+1;
                q.push(vizinho);
            }
        }
    }
}

int32_t main(){
    int k=1;
    while (true){
        fill(visited, visited +53, false);
        fill(dist, dist+53, -1);
        cin>>c>>e>>l>>p;
        if (c==0 && e==0 && l==0 && p==0) 
            break;
        for(int i=0; i<e; i++){
            int x, y;
            cin>>x>>y;
            cidades[x].pb(y);
            cidades[y].pb(x);
        }
        bfs(l);
        cout<<"Teste "<<k<<endl;
        for(int i=0; i<53; i++){
            if(dist[i]>0 && dist[i]<=p){
                cout<<i<<" ";
            }
        }
        cout<<endl<<endl;
        k++;
        for(int i=0; i<53; i++){
            cidades[i].clear();
        }
    }
}
