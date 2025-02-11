#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int rows, cols;
        cin >> rows >> cols;
        vector < string > matrix(cols);
        for (int i = 0; i < cols; ++i) {
            cin >> matrix[i];
        }
        long long result = 0;
        for (int col = 0; col < rows; ++col) {
            int count0 = 0, count1 = 0, other = 0;

            for (int row = 0; row < cols; ++row) {
                char char_at = matrix[row][col];
                if (char_at == '0') count0++;
                else if (char_at == '1') count1++;
                else other++;
            }
            int min_count = min(count0, count1);
            int max_count = max(count0, count1);
            if (min_count + other <= max_count) {
                min_count += other;
            } else {
                other -= max_count - min_count;
                min_count = max_count;
                max_count += other / 2;
                min_count += (other + 1) / 2;
            }
            result += (long long) min_count * max_count;
        }
        cout << result << endl;
    }

    return 0;
}
