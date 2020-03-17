#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    vector<int> t(q), f(q);
    vector<char> c(q);
    for (int i = 0; i < q; ++i) {
        cin >> t[i];
        if (t[i] == 2) {
            cin >> f[i] >> c[i];
        }
    }
    // input

    deque<char> ans(s.size());
    for (int i = 0; i < s.size(); ++i) ans[i] = s[i];
    bool rev = false;
    // preprocess

    for (int i = 0; i < q; ++i) {
        if (t[i] == 1) rev = !rev;
        else {
            if (f[i] == 1) {
                if (!rev) ans.push_front(c[i]);
                else ans.push_back(c[i]);
            }
            else {
                if (!rev) ans.push_back(c[i]);
                else ans.push_front(c[i]);
            }
        }
    }
    // solve

    if (!rev) for (int i = 0; i < ans.size(); ++i) cout << ans[i];
    else for (int i = ans.size() - 1; i > -1; --i) cout << ans[i];
    cout << endl;
}