//https://neps.academy/br/exercise/273
#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;
priority_queue<int, vector<int>, greater<int>> cx;
int tp=0, r=0, t, d;

signed main(){
  op
  int c,n;
  cin>>c>>n;
  if (c >= n) {
    cout<<0<<"\n";
    return 0;
  }
  for (int i = 0;i < c; i++) {
    cin>>t>>d;
    cx.push(t+d);
  }
  for (int i = c; i < n; i++) {
    cin>>t>>d;
    tp=cx.top();
    cx.pop();
    if (tp-t>20){
        r++;
    }
    cx.push(max(tp, t)+d);
  }
  cout<<r<<endl;

  return 0;
}
