#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, k;
        cin >> n >> k;
        int z = n - k;
        int count = 0;
        while (n > 0)
        {
            count++;
            n = n - k;
        }
        cout << count << "\n";
    }
    return 0;
}
