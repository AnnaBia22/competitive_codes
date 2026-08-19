//https://neps.academy/br/exercise/3756

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
   int n, counter = 0;
   cin >> n;
    for(int i = 0; i < n; ++i){
        int ing[3];
        cin >> ing[0] >> ing[1] >> ing[2];
        sort(ing + 0, ing + 3);
        counter += ing[1];
        counter += ing[2];
    }    
    cout << counter << endl;
}
