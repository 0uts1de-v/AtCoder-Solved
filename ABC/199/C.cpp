#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    string s, ans;
    cin >> n >> s >> q;
    vector<int> t(q), a(q), b(q);
    for (int i = 0; i < q; ++i) {
        cin >> t[i] >> a[i] >> b[i];
    }

    string s_1 = s.substr(0, n), s_2 = s.substr(n, n);

    bool swapped = false;
    for (int i = 0; i < q; ++i) {
        if (t[i] == 1) {
            if (a[i] - 1 < n && b[i] - 1 < n) {
                if (!swapped) swap(s_1[a[i] - 1], s_1[b[i] - 1]);
                else swap(s_2[a[i] - 1], s_2[b[i] - 1]);
            }
            else if (a[i] > n && b[i] > n) {
                if (!swapped) swap(s_2[a[i] - 1 - n], s_2[b[i] - 1 - n]);
                else swap(s_1[a[i] - 1 - n], s_1[b[i] - 1 - n]);
            }
            else if (a[i] - 1 < n && b[i] > n){
                if (!swapped) swap(s_1[a[i] - 1], s_2[b[i] - 1 - n]);
                else swap(s_2[a[i] - 1], s_1[b[i] - 1 - n]);
            }
            else {
                if (!swapped) swap(s_2[a[i] - 1 - n], s_1[b[i] - 1]);
                else swap(s_1[a[i] - 1 - n], s_2[b[i] - 1]);
            }
        }
        if (t[i] == 2) swapped = !swapped;
    }
    

    if (!swapped) ans = s_1 + s_2;
    else ans = s_2 + s_1;

    cout << ans << endl;
}