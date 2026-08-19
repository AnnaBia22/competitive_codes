//https://neps.academy/br/exercise/3838

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n, m;
        cin >> n >> m;
        int matriz[n][m];
        set <int> apear;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin >> matriz[i][j];
                apear.insert(matriz[i][j]);
            }
        }
        map<int, int> v;
        for (auto& i : apear) 
            v[i] = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(v[matriz[i][j]] == 2)
                    continue;
                if(i+1 < n)
                    if(matriz[i+1][j] == matriz[i][j]){
                        v[matriz[i][j]] = 2;
                        continue;
                    }
                if(j+1 < m)
                    if(matriz[i][j+1] == matriz[i][j]){
                        v[matriz[i][j]] = 2;
                        continue;
                    }
                if(i-1 >= 0)
                    if(matriz[i-1][j] == matriz[i][j]){
                        v[matriz[i][j]] = 2;
                        continue;
                    }
                if(j-1 >= 0)
                    if(matriz[i][j-1] == matriz[i][j]){
                        v[matriz[i][j]] = 2;
                        continue;
                    }
                v[matriz[i][j]] = 1;
            }
        }
        for(auto& i : v){
            if(i.second == 2){
                i.second = 0;
                break;
            }
        }
        int ans = -1;
        for(auto& i : v){
            if(i.second == 0){
                ans = 0;
                break;
            }
        }
        for(auto& i : v)
            ans += i.second;
        cout << ans << endl;
    }
    return 0;
}
