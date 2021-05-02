#include <bits/stdc++.h>

using namespace std;

int main() {
    string n, tmp;
    cin >> n;
    tmp = n;

    reverse(tmp.begin(), tmp.end());
    if (n == tmp) {
        cout << "Yes" << endl;
        return 0;
    }
    while (n[n.size() - 1] == '0') {
        n.pop_back();
        tmp = n;
        reverse(tmp.begin(), tmp.end());
        if (n == tmp) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}