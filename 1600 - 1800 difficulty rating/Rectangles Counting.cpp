#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N != 0) {
        vector < pair < int, int > > coordinates;
        map < int, vector < int > > x_to_y_coordinates;
        map < pair < int, int > , vector < int >> y_coordinates_frequency;
        for (int i = 0; i < N; i++) {
            int x, y;
            cin >> x >> y;
            coordinates.push_back(make_pair(x, y));
        }
        for (int i = 0; i < N; i++) {
            int x = coordinates[i].first, y = coordinates[i].second;
            x_to_y_coordinates[x].push_back(y);
            sort(x_to_y_coordinates[x].begin(), x_to_y_coordinates[x].end());
        }
        unsigned long long answer = 0;
        for (auto it = x_to_y_coordinates.begin(); it != x_to_y_coordinates.end(); it++) {
            if (it -> second.size() == 2) {
                pair < int, int > y_pair = make_pair(it -> second[0], it -> second[1]);
                y_coordinates_frequency[y_pair].push_back(it -> first);
                answer += (y_coordinates_frequency[y_pair].size() - 1);
            }
        }
        cout << answer << endl;
        cin >> N;
    }
    return 0;
}
