#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], temp = 100;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(temp > a[i]){
                temp = a[i];
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == temp){
                count++;
            }
        }
        cout << n - count << '\n';
        // your code goes here
    }

}