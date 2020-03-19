#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> ab(n);
    for (int i = 0; i < n; ++i) cin >> ab[i].first >> ab[i].second;
    // input

    sort(ab.begin(), ab.end(), [](const pair<int, int> &a, const pair<int, int> &b){return a.second < b.second; });
    ll sum {0};
    for (int i = 0; i < n; ++i) {
        sum += ab[i].first;
        if (sum > ab[i].second) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
