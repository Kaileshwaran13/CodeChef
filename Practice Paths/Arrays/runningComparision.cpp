#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                if(a[i] * 2 >= b[i])
                    count++;
            }else if(b[i] < a[i]){
                if(b[i] * 2 >= a[i]){
                    count++;
                }
            }else{
                count++;
            }
            
        }
        cout << count << '\n';
    }
	
}