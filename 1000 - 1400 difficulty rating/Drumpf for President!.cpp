#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, eligible, count;
    cin >> tt;
    while (tt--) {
        cin >> size >> eligible;
        int arr[size];
        int arrCount[101] = {0};
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
            if(arr[i] == i + 1)
                arrCount[arr[i]] = -1;
            else{
                if(arrCount[arr[i]] >= 0)
                    arrCount[arr[i]]++;
            }
        }
        count = 0;
        for (int i = 1; i <= size; i++) {
            if (arrCount[i] >= eligible) {
                count++;
            }
        }
        cout << count << '\n';

    }

}
