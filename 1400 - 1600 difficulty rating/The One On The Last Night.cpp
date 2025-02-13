#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> n >> k;
        long long int prod = 1;
        int arr[10];
        int temp;
        int p = 0;
        while (n > 0)
        {
            temp = n % 10;
            arr[p++] = temp;
            n = n / 10;
        }
        sort(arr, arr + p);
        for (int i = 0; i < k; i++)
        {
            if (arr[0] == 9)
                break;
            else
            {
                arr[0]++;
                sort(arr, arr + p);
            }
        }
        for (int i = 0; i < p; i++)
            prod *= arr[i];

        cout << prod << "\n";
    }

    return 0;
}
