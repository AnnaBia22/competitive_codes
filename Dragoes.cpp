//https://neps.academy/br/exercise/3302

#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int32_t main() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    int a = 0;
    for(int i = 0; i < n; ++i){
        cin >> x[i];
        a += x[i];
    }
    int l = 0, r = a;
    while(l<=r){
        int mid = l + (r - l) / 2;
        bool vaidarcerto = false;
        int j = 0;
        for(int i = 0; i < k; ++i){
            int t = 0;
            while(true){
                if(j < n && t + x[j] <= mid){
                    t += x[j];
                    j++;
                }
                else
                    break;
            }
            if(j >= n)
                vaidarcerto = true;
        }
        if(vaidarcerto){
            r = mid - 1;
            a = mid;
        }
        else
            l = mid + 1;
    }
    cout << a;
    return 0;
}
