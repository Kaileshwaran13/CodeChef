#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2, num3, size = 0, maxVal = 0;
    cin >> num1 >> num2 >> num3;
    size = num1 + num2 + num3;
    int arr[size] = {0};
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        maxVal = max(arr[i], maxVal);
    }
    
    int arrCount[maxVal + 1] = {0};
    for(int i = 0; i < size; i++){
        arrCount[arr[i]]++;
    }
    
    vector<int> finalList;
    for(int i = 0; i < maxVal; i++){
        if(arrCount[i] >= 2){
            finalList.push_back(i);
        }
    }
    cout << finalList.size() << '\n';

    for(auto x : finalList){
        cout << x << '\n';
    }
}
