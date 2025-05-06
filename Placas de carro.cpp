//https://neps.academy/br/exercise/2715
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define pb push_back
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

signed main(){
    op
        char x;
        vector<char> placa;
    while(cin>>x){
        placa.pb(x);
    }
    if(placa.size()==7){
        if(placa[0]=='A' || placa[0]=='B' ||placa[0]=='C' ||placa[0]=='D' ||placa[0]=='E' ||placa[0]=='F' ||placa[0]=='G' ||placa[0]=='H' ||placa[0]=='I' ||placa[0]=='J' ||placa[0]=='K' ||placa[0]=='L' ||placa[0]=='M' ||placa[0]=='N' ||placa[0]=='O' ||placa[0]=='P' ||placa[0]=='Q' ||placa[0]=='R' ||placa[0]=='S' ||placa[0]=='T' ||placa[0]=='U' ||placa[0]=='V' ||placa[0]=='W' ||placa[0]=='X' ||placa[0]=='Y' ||placa[0]=='Z'){
           if(placa[1]=='A' || placa[1]=='B' ||placa[1]=='C' ||placa[1]=='D' ||placa[1]=='E' ||placa[1]=='F' ||placa[1]=='G' ||placa[1]=='H' ||placa[1]=='I' ||placa[1]=='J' ||placa[1]=='K' ||placa[1]=='L' ||placa[1]=='M' ||placa[1]=='N' ||placa[1]=='O' ||placa[1]=='P' ||placa[1]=='Q' ||placa[1]=='R' ||placa[1]=='S' ||placa[1]=='T' ||placa[1]=='U' ||placa[1]=='V' ||placa[1]=='W' ||placa[1]=='X' ||placa[1]=='Y' ||placa[1]=='Z'){
               if(placa[2]=='A' || placa[2]=='B' ||placa[2]=='C' ||placa[2]=='D' ||placa[2]=='E' ||placa[2]=='F' ||placa[2]=='G' ||placa[2]=='H' ||placa[2]=='I' ||placa[2]=='J' ||placa[2]=='K' ||placa[2]=='L' ||placa[2]=='M' ||placa[2]=='N' ||placa[2]=='O' ||placa[2]=='P' ||placa[2]=='Q' ||placa[2]=='R' ||placa[2]=='S' ||placa[2]=='T' ||placa[2]=='U' ||placa[2]=='V' ||placa[2]=='W' ||placa[2]=='X' ||placa[2]=='Y' ||placa[2]=='Z'){
                   if(placa[3]=='0' || placa[3]=='1'||placa[3]=='2'||placa[3]=='3'||placa[3]=='4'||placa[3]=='5'||placa[3]=='6'||placa[3]=='7'||placa[3]=='8'||placa[3]=='9'){
                       if(placa[4]=='A' || placa[4]=='B' ||placa[4]=='C' ||placa[4]=='D' ||placa[4]=='E' ||placa[4]=='F' ||placa[4]=='G' ||placa[4]=='H' ||placa[4]=='I' ||placa[4]=='J' ||placa[4]=='K' ||placa[4]=='L' ||placa[4]=='M' ||placa[4]=='N' ||placa[4]=='O' ||placa[4]=='P' ||placa[4]=='Q' ||placa[4]=='R' ||placa[4]=='S' ||placa[4]=='T' ||placa[4]=='U' ||placa[4]=='V' ||placa[4]=='W' ||placa[4]=='X' ||placa[4]=='Y' ||placa[4]=='Z'){
                          if(placa[5]=='0' || placa[5]=='1'||placa[5]=='2'||placa[5]=='3'||placa[5]=='4'||placa[5]=='5'||placa[5]=='6'||placa[5]=='7'||placa[5]=='8'||placa[5]=='9'){
                              if(placa[6]=='0' || placa[6]=='1'||placa[6]=='2'||placa[6]=='3'||placa[6]=='4'||placa[6]=='5'||placa[6]=='6'||placa[6]=='7'||placa[6]=='8'||placa[6]=='9'){
                                  cout<<'2'<<endl;
                              }
                              else{
                                  cout<<'0'<<endl;
                              }
                          }
                           else{
                                  cout<<'0'<<endl;
                              }
                       }
                       else{
                                  cout<<'0'<<endl;
                              }
                   }
                   else{
                                  cout<<'0'<<endl;
                              }
               }
               else{
                                  cout<<'0'<<endl;
                              }
           }
            else{
                                  cout<<'0'<<endl;
                              }
        }
        else{
                                  cout<<'0'<<endl;
                              }
    }
    else if(placa.size()==8){
         if(placa[0]=='A' || placa[0]=='B' ||placa[0]=='C' ||placa[0]=='D' ||placa[0]=='E' ||placa[0]=='F' ||placa[0]=='G' ||placa[0]=='H' ||placa[0]=='I' ||placa[0]=='J' ||placa[0]=='K' ||placa[0]=='L' ||placa[0]=='M' ||placa[0]=='N' ||placa[0]=='O' ||placa[0]=='P' ||placa[0]=='Q' ||placa[0]=='R' ||placa[0]=='S' ||placa[0]=='T' ||placa[0]=='U' ||placa[0]=='V' ||placa[0]=='W' ||placa[0]=='X' ||placa[0]=='Y' ||placa[0]=='Z'){
           if(placa[1]=='A' || placa[1]=='B' ||placa[1]=='C' ||placa[1]=='D' ||placa[1]=='E' ||placa[1]=='F' ||placa[1]=='G' ||placa[1]=='H' ||placa[1]=='I' ||placa[1]=='J' ||placa[1]=='K' ||placa[1]=='L' ||placa[1]=='M' ||placa[1]=='N' ||placa[1]=='O' ||placa[1]=='P' ||placa[1]=='Q' ||placa[1]=='R' ||placa[1]=='S' ||placa[1]=='T' ||placa[1]=='U' ||placa[1]=='V' ||placa[1]=='W' ||placa[1]=='X' ||placa[1]=='Y' ||placa[1]=='Z'){
               if(placa[2]=='A' || placa[2]=='B' ||placa[2]=='C' ||placa[2]=='D' ||placa[2]=='E' ||placa[2]=='F' ||placa[2]=='G' ||placa[2]=='H' ||placa[2]=='I' ||placa[2]=='J' ||placa[2]=='K' ||placa[2]=='L' ||placa[2]=='M' ||placa[2]=='N' ||placa[2]=='O' ||placa[2]=='P' ||placa[2]=='Q' ||placa[2]=='R' ||placa[2]=='S' ||placa[2]=='T' ||placa[2]=='U' ||placa[2]=='V' ||placa[2]=='W' ||placa[2]=='X' ||placa[2]=='Y' ||placa[2]=='Z'){
                   if(placa[3]=='-'){
                   if(placa[4]=='0' || placa[4]=='1'||placa[4]=='2'||placa[4]=='3'||placa[4]=='4'||placa[4]=='5'||placa[4]=='6'||placa[4]=='7'||placa[4]=='8'||placa[4]=='9'){ 
                          if(placa[5]=='0' || placa[5]=='1'||placa[5]=='2'||placa[5]=='3'||placa[5]=='4'||placa[5]=='5'||placa[5]=='6'||placa[5]=='7'||placa[5]=='8'||placa[5]=='9'){
                              if(placa[6]=='0' || placa[6]=='1'||placa[6]=='2'||placa[6]=='3'||placa[6]=='4'||placa[6]=='5'||placa[6]=='6'||placa[6]=='7'||placa[6]=='8'||placa[6]=='9'){
                                  if(placa[7]=='0' || placa[7]=='1'||placa[7]=='2'||placa[7]=='3'||placa[7]=='4'||placa[7]=='5'||placa[7]=='6'||placa[7]=='7'||placa[7]=='8'||placa[7]=='9'){
                                  cout<<'1'<<endl;
                                  } 
                                  else{
                                  cout<<'0'<<endl;
                                  }
                              }
                              else{
                                  cout<<'0'<<endl;
                              }
                          }
                          else{
                                  cout<<'0'<<endl;
                          }
                   }
                   else{
                                  cout<<'0'<<endl;
                   }
                   }
                   else{
                                  cout<<'0'<<endl;
                   }
               }
               else{
                                  cout<<'0'<<endl;
               }
           }
           else{
                                  cout<<'0'<<endl;
           }
         }
         else{
                                  cout<<'0'<<endl;
         }
        
    }
    else{
        cout<<'0'<<endl;
    }
    return 0;
}
