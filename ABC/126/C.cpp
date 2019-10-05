#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cfloat>
#include <iomanip>

using namespace std;
using ll = long long int;

const ll MOD = 1000000007;

template<typename T>
int cin_vec(vector<T> &vec) {
    for (auto &i : vec) {
        cin >> i;
    }
    return 0;
}

template<typename T>
int cout_vec(vector<T> vec, bool insertNewLine = true) {
    if (insertNewLine) {
        for (const auto &i : vec) {
            cout << i << endl;
        }
    } else {
        for (const auto &i : vec) {
            cout << i << flush;
        }
    }
    return 0;
}

template<typename T>
ll min_vec(std::vector<T> vec) {
    auto iter = min_element(vec.begin(), vec.end());
    ll index = distance(vec.begin(), iter);
    return index;
}

template<typename T>
ll max_vec(std::vector<T> vec) {
    auto iter = max_element(vec.begin(), vec.end());
    ll index = distance(vec.begin(), iter);
    return index;
}

int f(int x, int k) {
    int count = 0;
    while (x < k) {
        ++ count;
        x *= 2;
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    double ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += (pow(0.5, f(i, k)) / n);
    }
    cout << setprecision(10) << ans << endl;
    return 0;
}
