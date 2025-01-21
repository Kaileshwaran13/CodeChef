#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--) {
        int num, cnt = 0;
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < num; i++) {
            int sum = 0, pro = 1;
            for (int j = i; j < num; j++) {
                sum += arr[j];
                pro *= arr[j];
                if (sum == pro)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
