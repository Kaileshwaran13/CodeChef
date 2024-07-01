#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > temp){
                temp = a[i];
            }
        }
        int count = 0, addr = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == temp && count < b[i]){
                count = b[i];
                addr = i;
            }
        }
        cout << addr + 1 << '\n';
        // your code goes here
    }

}