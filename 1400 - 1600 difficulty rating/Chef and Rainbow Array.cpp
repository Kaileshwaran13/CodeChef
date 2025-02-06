#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int i = 0;
        int j = n - 1;
        int count = 1;
        bool findans = 0;
        while (i <= j) {
            if ((arr[i] == arr[j]) and arr[i] == count) {
                i++;
                j--;
            }
            else {
                count++;
                if ((arr[i] == arr[j]) and arr[i] == count) {
                    i++;
                    j--;
                }
                else {
                    findans = 1;
                    break;
                }
            }
            if (count > 7) {
                findans = 1;
                break;
            }
        }
        if (findans == 0 and count == 7) 
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
    }
    return 0;
}
