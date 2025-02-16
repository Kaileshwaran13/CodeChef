#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector < int > A(N), B(N);
        for (int i = 0; i < N; ++i) 
            cin >> A[i];
        for (int i = 0; i < N; ++i) 
            cin >> B[i];
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int start = (N - 1) / 2, end = N - 1, median = INT_MAX;
        for (int i = start; i < N; ++i)
        {
            median = min(median, A[i] + B[end]);
            end--;
        }
        cout << median << endl;
    }
    return 0;
}
