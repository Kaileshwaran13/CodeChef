#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    while (num--)
    {
        int N, M;
        cin >> N >> M;
        int m[N];
        for (int i = 0; i < N; i++) {
            cin >> m[i];
        }
        int offeredSalary[M], maxJobOffers[M];
        for (int i = 0; i < M; i++) {
            cin >> offeredSalary[i] >> maxJobOffers[i];
        }
        string qual[N];
        for (int i = 0; i < N; i++) {
            cin >> qual[i];
        }
        int isitcomp[M] = {}, company = -1, curr = -1, got = 0, n = 0;
        long int total = 0;
        for (int i = 0; i < N; i++) {
            company = -1;
            curr = -1;
            for (int j = 0; j < M; j++) {
                if (qual[i][j] == '1') {
                    if ((curr == -1) && (offeredSalary[j] >= m[i]) && (maxJobOffers[j] > 0)) {
                        curr = offeredSalary[j];
                        company = j;
                    }
                    else if ((offeredSalary[j] >= m[i]) && (maxJobOffers[j] > 0)) {
                        if (offeredSalary[j] > curr) {
                            curr = offeredSalary[j];
                            company = j;
                        }
                    }
                }
            }
            if (company != -1) {
                got++;
                total += curr;
                maxJobOffers[company]--;
                isitcomp[company] = 1;
            }
        }
        for (int i = 0; i < M; i++) {
            if (isitcomp[i] == 0) {
                n++;
            }
        }
        cout << got << " " << total << " " << n << endl;
    }
}
