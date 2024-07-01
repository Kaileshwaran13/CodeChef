#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        string v;
        cin>>v;
        int temp = 100;
        for(int i = 0; i < n; i++){
            if(v[i] == '0' && temp > s[i]){
                temp = s[i];
            }
        }
        cout << temp << '\n';
        // your code goes here
    }

}