#include <iostream>

#include<cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        int max_x, max_y, min_x, min_y;
        if (x1 > x2) {
            max_x = x1;
            min_x = x2;
        }
        else {
            max_x = x2;
            min_x = x1;
        }
        if (y1 > y2) {
            max_y = y1;
            min_y = y2;
        }
        else {
            max_y = y2;
            min_y = y1;
        }
        int normal_x = max_x - min_x;
        int normal_y = max_y - min_y;
        int sum = normal_x + normal_y;
        int min1 = min(x1, y1);
        int max_x1y1 = max(x1, y1);
        int output = min(min1, (n - max_x1y1 + 1));
        int min2 = min(x2, y2);
        int max_x2y2 = max(x2, y2);
        int input = min(min2, (n - max_x2y2 + 1));
        int answer = input + output;
        cout << min(answer, sum) << endl;
    }
    return 0;
}
