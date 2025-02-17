#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int r, c;
        cin >> r >> c;
        vector<pair<int,int>> ans;
        int sum = r + c;
        ans.push_back({sum/2, sum/2});
        if(sum/2 != 1){
            ans.push_back({1,1});
        }
        int k = 1;
        for(int i=ans.size(); k<=3; i+=4){
            ans.push_back({ans[i-1].first+1, ans[i-1].second+1});
            ans.push_back({ans[i].first+k, 1});
            ans.push_back({1, ans[i].second+k});
            ans.push_back({ans[i].first, ans[i].second});
            k++;
        }
        int l = 2;
        k--;
        for(int i=ans.size(); k>0; i+=4){
            ans.push_back({ans[i-1].first+1, ans[i-1].second+1});
            ans.push_back({ans[i].first+k, l});
            ans.push_back({l, ans[i].second+k});
            ans.push_back({ans[i].first, ans[i].second});
            k--;
            l+=2;
        }
        ans.push_back({8,8});
        cout << ans.size() << endl;
        for(int i=0; i<ans.size(); ++i){
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
   return 0;
}
