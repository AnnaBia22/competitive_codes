//https://neps.academy/br/exercise/2835
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int binary_search(vector<pair<string, int>> &p, string a, int l, int r){
    if(l>r)
        return -1;
    int mid=(l+r)/2;
    if(p[mid].first==a)
        return p[mid].second;
    else if(p[mid].first>a)
        return binary_search(p, a, l, mid-1);
     else if(p[mid].first<a)
        return binary_search(p, a, mid+1, r);
}

int32_t main(){
    op
    int n, x;
    cin>>n;
    int respostas[n]={0};
    string c[n];
    vector<pair<string, int>> p;
    for(int i=0; i<n; i++){
        int k;
        cin>>c[i]>>k;
        for(int j=0; j<k; j++){
            string g;
            cin>>g;
            p.pb(mp(g, i));
        }
    }
    sort(p.begin(), p.end());
    cin>>x;
    for(int i=0; i<x; i++){
        string a;
        int r;
        cin>>a;
        r=binary_search(p, a, 0, p.size());
        if(r!=-1)
        respostas[r]++;
    }
    int max=-1;
    string palavra="";
    for(int i=0; i<n; i++){
        if(respostas[i]>max){
            max=respostas[i];
            palavra=c[i];
        }
        else if(respostas[i]==max)
            palavra=min(palavra, c[i]);
    }
    cout<<palavra;
    return 0;
}
