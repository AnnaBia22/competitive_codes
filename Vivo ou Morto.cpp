//https://neps.academy/br/exercise/627

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int32_t main() {
    op
    int counter = 1;
    while(true){
        int p, r;
        cin >> p >> r;
        if(p == 0 && r == 0)
            break;
        cout << "Teste " << counter << endl; 
        
        list<int> l;
        for(int i = 0; i < p; ++i){
            int x;
            cin >> x;
            l.pb(x);
        }
        for(int i = 0; i < r; ++i){
            int n, j;
            cin >> n >> j;
            vector<int> a(n);
            for(int k = 0; k < n; ++k)
                cin >> a[k];
            auto z = l.begin();
            int k = 0;
            while(z != l.end() && k < n){
                if(a[k] != j)
                    z = l.erase(z); 
                else 
                    ++z;           
                k++;
            }
        }
        for (int i : l)
            cout << i << endl << endl;
        counter++;
    }
    return 0;
}
