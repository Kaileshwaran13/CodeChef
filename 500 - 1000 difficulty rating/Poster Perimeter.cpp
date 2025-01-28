#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        
       int  peri = 2*(n+m);
       if(peri<k){
           cout<<k-peri;
       }
       else{
           if(k==1||k==2||k==3||k==4) {
               cout<<4-k;
           }
           else
           {
               if(k%2==0) cout<<0;
               else cout<<1;
           }
           
       }
       cout<<endl;
    }

}
