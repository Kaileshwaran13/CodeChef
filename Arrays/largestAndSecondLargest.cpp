#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int maxArr[1000] = {0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxArr[a[i] - 1]++;
        }
        int count = 0, twoCount = 0;
        for(int j = 999; j >= 0; j--){
            if(maxArr[j] > 0 && twoCount != 2){
                count += (j + 1);
                twoCount++;
            }
        }
        cout << count << '\n';
    }
	// your code goes here

}