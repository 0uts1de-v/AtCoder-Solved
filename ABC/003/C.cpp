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
    double ans = 0;
    unsigned int n, k;
    cin >> n >> k;
    vector<unsigned int> r(n);
    for (int i = 0; i < n; ++i) {
        cin >> r[i];
    }

    sort(r.begin(), r.end());

    for (int j = 0; j < k; ++j) {
        ans = (ans + r[n - k + j]) / 2.0;
    }

    cout << fixed << ans << endl;
    return 0;
}
