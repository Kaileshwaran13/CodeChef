#include<iostream>

using namespace std;

int
main()
{

    int t;

    cin >> t;

    int i = 0;

    while (i < t)
    {

        int A1, A2, A3, A4, A5, P;
        cin >> A1 >> A2 >> A3 >> A4 >> A5 >> P;
        int time = (A1 + A2 + A3 + A4 + A5) * P;
        if (time > 120) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }

        i++;


    }

}
