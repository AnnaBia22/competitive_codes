//https://cses.fi/problemset/result/14227033/
#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int m, n, di[4]={-1, 1, 0, 0}, dj[4]={0, 0, -1, 1}, sx, sy, ex, ey;
char  grid[1002][1002], dd[4]={'U','D', 'L', 'R'}, save[1002][1002];
bool visited[1002][1002];
int dist[1002][1002];

void bfs(int s1, int s2){
    queue<pair<int, int>> q;
    q.push(mp(s1, s2));
    visited[s1][s2]=true;
    dist[s1][s2]=0;
    while(!q.empty()){
        auto [x, y]=q.front();
        q.pop();
        for(int i=0; i<4; i++){
            if(x+di[i]>=0 && x+di[i]<n && y+dj[i]>=0 && y+dj[i]<m && !visited[x+di[i]][y+dj[i]] && grid[x+di[i]][y+dj[i]]!='#'){
                visited[x+di[i]][y+dj[i]]=true;
                dist[x+di[i]][y+dj[i]]=dist[x][y]+1;
                save[x+di[i]][y+dj[i]]=dd[i];
                q.push(mp(x+di[i], y+dj[i]));
            }
        }
    }
}

string constru_caminho(){
    string caminho="";
    int x=ex, y=ey;
    while(x!=sx || y!=sy){
        char dire=save[x][y];
        caminho+=dire;
        if (dire == 'U') 
            x++;
        else if (dire == 'D')  
            x--;
        else if (dire == 'L') 
            y++;
        else if (dire == 'R') 
            y--;
    }
    reverse(caminho.begin(), caminho.end());
    return caminho;
}

int32_t main() {
	fill(&visited[0][0], &visited[0][0] + 1002*1002, false);
    fill(&dist[0][0], &dist[0][0] + 1002*1002, -1);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>grid[i][j];
            if(grid[i][j]=='A'){
                sx=i;
                sy=j;
            }
            else if(grid[i][j]=='B'){
                ex=i;
                ey=j;
            }
        }
    }
    bfs(sx, sy);
    if(dist[ex][ey]!=-1){
        string caminho=constru_caminho();
        cout<<"YES"<<endl<<dist[ex][ey]<<endl<<caminho;
    }
    else{
        cout<<"NO"<<endl;
    }
}
