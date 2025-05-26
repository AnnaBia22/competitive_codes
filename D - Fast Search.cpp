//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int achar_l(int vetor[], int L, int R, int l){
    if(R<L)
     return -1;
    int mid=(L+R)/2;
    if(vetor[mid]>=l){
        int p=achar_l(vetor, L, mid-1, l);
        if(p!=-1)
         return p;
        else 
         return mid;
    }
    else
     return achar_l(vetor, mid+1, R, l);
}

int achar_r(int vetor[], int L, int R, int r){
    if(R<L)
      return -1;
    int mid=(L+R)/2;
    if(vetor[mid]<=r){
        int p=achar_r(vetor, mid+1, R, r);
        if(p!=-1)
          return p;
        else
         return mid;
    }
    else
      return achar_r(vetor, L, mid-1, r);
}

int binary_search(int vetor[], int L, int R, int l, int r){
    int a=achar_l(vetor, L, R, l), b=achar_r(vetor, L, R, r);
    if(a==-1 || b==-1)
      return 0;
    else if (a==b)
        return 1;
    else
      return b-a+1;
    
}

signed main(){
    int n;
    cin>>n;
    int vetor[n];
    for(int i=0; i<n; i++)
        cin>>vetor[i];
    sort(vetor, vetor+n);
    int k;
    cin>>k;
    int respostas[k];
    for(int i=0; i<k; i++){
        int l, r, s;
        cin>>l>>r;
        s=binary_search(vetor, 0, n-1, l, r);
        respostas[i]=s;
    }
    for(int i=0; i<k; i++){
        cout<<respostas[i]<< ' ';
    }
    cout<<endl;
    return 0;
}
