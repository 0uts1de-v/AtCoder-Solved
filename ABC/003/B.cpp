#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>
#include <ios>
#include <iomanip>


using namespace std;


int main() {
    string s, t, ans = "You can win";
    cin >> s >> t;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != t[i]) {
            if (s[i] == '@' &&
                (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' ||
                 t[i] == 'r' || t[i] == '@')) {

            } else if (t[i] == '@' &&
                       (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' ||
                        s[i] == 'r' || s[i] == '@')) {

            } else {
                ans = "You will lose";
            }
        }
    }

    cout << ans << endl;
    return 0;
}
