#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int num, val;
    vector<int> data;
    while(t--){
        data.clear();
        cin >> num;
        for(int i = 0; i < num; i++){
            cin >> val;
            data.push_back(val);
        }
        int minVal = INT_MAX, maxVal = INT_MIN, count = 1;
        for(int i = 0; i < data.size() - 1; i++){
            if(abs(data[i] - data[i + 1]) <= 2){
                count++;
            }else{
                minVal = min(minVal, count);
                maxVal = max(maxVal, count);
                count = 1;
            }
        }
        minVal = min(minVal, count);
        maxVal = max(maxVal, count);
        cout << minVal << " " << maxVal << '\n';
    }
}
