#include <bits/stdc++.h>
using namespace std;

int main() {
    vector < char > vowels = {'a','e','i','o','u'};
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string P, Q;
        cin >> P >> Q;

        int total_count = 0;
        vector < int > alp_count(26);

        for (int i = 0; i < n; i++) {
            if (P[i] == Q[i]) {
                continue;
            } else if (P[i] == '?') {
                alp_count[Q[i] - 'a']++;
            } else if (Q[i] == '?') {
                alp_count[P[i] - 'a']++;
            } else {
                if (find(vowels.begin(), vowels.end(), P[i]) != vowels.end() && find(vowels.begin(), vowels.end(), Q[i]) != vowels.end()) {
                    total_count += 2;
                } else if (!(find(vowels.begin(), vowels.end(), P[i]) != vowels.end()) && !(find(vowels.begin(), vowels.end(), Q[i]) != vowels.end())) {
                    total_count += 2;
                } else {
                    total_count++;
                }
            }
        }

        int sum_vowels = 0, sum_cons = 0, max_vow = 0, max_cons = 0, ind_vow = -1, ind_cons = -1;

        int j = 0;

        for (int i = 0; i < 26; i++) {
            if (i == (vowels[j] - 'a')) {
                j++;
                sum_vowels += alp_count[i];
                if (max_vow < alp_count[i]) {
                    max_vow = alp_count[i];
                    ind_vow = i;
                }
            } else {
                sum_cons += alp_count[i];
                if (max_cons < alp_count[i]) {
                    max_cons = alp_count[i];
                    ind_cons = i;
                }
            }
        }

        int if_vowel_chosen = 2 * (sum_vowels - max_vow) + sum_cons;
        int if_cons_chosen = 2 * (sum_cons - max_cons) + sum_vowels;

        if (if_vowel_chosen < if_cons_chosen) {
            total_count += if_vowel_chosen;
        } else {
            total_count += if_cons_chosen;
        }

        std::cout << total_count << std::endl;
    }
}
