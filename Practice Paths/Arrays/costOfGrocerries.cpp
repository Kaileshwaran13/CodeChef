#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n], sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] >= x){
                a[i] = -1;
            }
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
            if(a[j] == -1){
                sum += b[j];
            }
        }
        cout << sum << '\n';
        // your code goes here
    }

}