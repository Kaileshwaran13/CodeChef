#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, aliceCount, bobCount, num;
    cin >> tt;
    vector<int> xSet;
    vector<int> ySet;
    while(tt--){
        xSet.clear();
        ySet.clear();
        for(int i = 0; i < 3; i++){
            cin >> num;
            xSet.push_back(num);
        }
        for(int i = 0; i < 3; i++){
            cin >> num;
            ySet.push_back(num);
        }
        sort(xSet.begin(), xSet.end());
        sort(ySet.begin(), ySet.end());
        aliceCount = 0;
        bobCount = 0;
        aliceCount = xSet[xSet.size() - 1] + xSet[xSet.size() - 2];
        bobCount = ySet[ySet.size() - 1] + ySet[ySet.size() - 2];
        if(aliceCount == bobCount){
            cout << "Tie" <<'\n';
        }
        else if(aliceCount > bobCount){
            cout << "Alice" <<'\n';
        }
        else{
            cout << "Bob" <<'\n';
        }
        
    }
}
