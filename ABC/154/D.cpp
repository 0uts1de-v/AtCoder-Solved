#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    for (auto &i : p) cin >> i;
    // input

    double ans{k};
    vector<ll> cusum(n), sum(n - k + 1);
    cusum[0] = p[0];
    for (int i = 1; i < n; ++i) cusum[i] = cusum[i - 1] + p[i];
    //preprocess

    for (int i = 0; i < n - k; ++i) sum[i] = cusum[i + k] - cusum[i];
    if (n == k) sum[0] = cusum[k - 1];
    ans = *max_element(sum.begin(), sum.end()) + k;
    ans /= 2;
    // solve

    cout << fixed << setprecision(12) << ans << endl;
}