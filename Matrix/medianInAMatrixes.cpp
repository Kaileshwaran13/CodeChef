#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int arr[x*y] = {0};
    for(int i = 0; i < x*y;i++){
        cin >> arr[i];
    }
    sort(arr,arr+(x*y));
    int half = floor((x*y)/2);
    cout << arr[half];
    
}