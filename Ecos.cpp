//https://neps.academy/br/exercise/3758

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int upper(vector<int>& v, int l, int r, int value){
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid] >= value){
            ans = mid;   
            r = mid - 1; 
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int lower(vector<int>& v, int l, int r, int value){
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid] <= value){
            ans = mid;   
            l = mid + 1;  
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int32_t main() {
    op
    int n, l, r, counter = 0;
    string eco;
    cin >> n >> l >> r >> eco;
    vector <int> apear[26];

    for(int i = 0; i < n; ++i)
        apear[eco[i] - 'a'].pb(i);
    

    for(int i = 0; i < n; ++i){
        if(apear[eco[i]-'a'].empty())
            continue;
        auto a = upper(apear[eco[i]-'a'], 0, apear[eco[i]-'a'].size() - 1, i + l );
        auto b = lower(apear[eco[i]-'a'], 0, apear[eco[i]-'a'].size() - 1, i + r );

        if(a == -1) 
            continue;
        if(b == -1)
            continue;

        if(a > b)
            continue; 

        int dist = b - a + 1;
        counter += dist;
    }
    cout << counter << endl;
    return 0;
}
