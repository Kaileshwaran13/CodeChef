#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        unordered_map<int, pair<int, int>> grid_map;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int val;
                cin >> val;
                grid_map[val] = make_pair(i, j);
            }
        }
        
        int total_steps = 0;
        int current_number = 1;
        while (current_number != n * n) {
            pair<int, int> current_pos = grid_map[current_number];
            pair<int, int> next_pos = grid_map[current_number + 1];
            total_steps += abs(current_pos.first - next_pos.first) + abs(current_pos.second - next_pos.second);
            current_number++;
        }
        
        cout << total_steps << endl;
    }
    return 0;
}
