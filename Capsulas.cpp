//https://neps.academy/br/exercise/205

#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int MAX = 1e8;

int32_t main(){
    op
    int n, f;
    cin >> n >> f;
    int vetor[n];
    for(int i = 0; i < n; ++i)
        cin >> vetor[i];
    int l = 0, r = MAX, answer = MAX; 
    while(l <= r){
        int mid = l + (r - l) / 2, t = 0;
        for(int i = 0; i < n; ++i)
            t += mid / vetor[i];
        if(t >= f){
            answer = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
}
