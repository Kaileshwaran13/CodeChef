#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], oddCount = 0, evenCount = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            evenCount+= a[i];
        else
            oddCount += a[i];
    }
    if(evenCount > oddCount)
        cout << "READY FOR BATTLE" << '\n';
    else
        cout << "NOT READY" << '\n';
}