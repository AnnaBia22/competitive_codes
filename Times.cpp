//https://neps.academy/br/exercise/253
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
#define mp make_pair
#define pb push_back
using namespace std;

vector<vector<string>> team;
priority_queue<pair<int, string>> jog;

signed main(){
    op
    int n, t;
    cin>>n>>t;
    for(int i=0; i<t; i++){
        team.pb(vector<string>());
    }
    for(int i=0; i<n; i++){
        string nome;
        int h;
        cin>>nome>>h;
        jog.push(mp(h, nome));
    }
    int ta=0;
     while(jog.size()>0){
        team[ta].pb(jog.top().second);
        jog.pop();
        ta=(ta+1)%t;
    }
    for(int i=0; i<t; i++){
        sort(team[i].begin(), team[i].end());
        cout<<"Time "<<i+1<<endl;
        for(int j=0; j<team[i].size(); j++){
            cout<<team[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
