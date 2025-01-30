#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    while (n--) {
        int rt, rd, st, sd;
        set < int > tr;
        set < int > dr;
        set < int > ts;
        set < int > ds;
        vector < int > tr1;
        vector < int > dr1;
        vector < int > ts1;
        vector < int > ds1;
        cin >> rt;
        for (i = 0; i < rt; i++) {
            int a;
            cin >> a;
            tr.insert(a);
        }
        cin >> rd;
        for (i = 0; i < rd; i++) {
            int a;
            cin >> a;
            dr.insert(a);
        }
        cin >> st;
        for (i = 0; i < st; i++) {
            int a;
            cin >> a;
            ts.insert(a);
        }
        cin >> sd;
        for (i = 0; i < sd; i++) {
            int a;
            cin >> a;
            ds.insert(a);
        }
        for (auto x: tr) {
            tr1.push_back(x);
        }
        for (auto x: dr) {
            dr1.push_back(x);
        }
        for (auto x: ts) {
            ts1.push_back(x);
        }
        for (auto x: ds) {
            ds1.push_back(x);
        }
        sort(tr1.begin(), tr1.end());
        sort(dr1.begin(), dr1.end());
        sort(ts1.begin(), ts1.end());
        sort(ds1.begin(), ds1.end());
        if ((includes(tr1.begin(), tr1.end(), ts1.begin(), ts1.end())) && (includes(dr1.begin(), dr1.end(), ds1.begin(), ds1.end())))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
