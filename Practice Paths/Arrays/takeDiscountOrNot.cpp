#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n], bsum = 0, asum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            bsum += a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i] < y){
                asum += 0;
            }else{
                asum += a[i] - y;
            }
        }
        if((asum + x) < bsum){
            cout << "COUPON" << '\n';
        }else{
            cout << "NO COUPON" << '\n';
        }
    }
}