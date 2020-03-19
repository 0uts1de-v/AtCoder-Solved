#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (auto &i : l) cin >> i;
    // input

    sort(l.begin(), l.end());
    int ans {0};
    for (int i = 2; i < n; ++i) {
        for (int j = 1; j < i; ++j) {
            auto it = lower_bound(l.begin(), l.end(), l[i] - l[j] + 1);
            auto pos = distance(l.begin(), it);
            if (pos < j) {
                ans += j - pos;
            }
        }
    }

    cout << ans << endl;
}
