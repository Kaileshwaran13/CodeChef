#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; T > i; i++) {
        int N;
        cin >> N;
        int arr[N] = {0};
        arr[0] = 3;
        arr[N - 1] = 3;
        for (int i = 0; N > i; i++) {
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}
