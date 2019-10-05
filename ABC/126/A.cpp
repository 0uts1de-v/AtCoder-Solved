#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cfloat>

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

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    --k;
    if (s[k] == 'A') {
        s[k] = 'a';
    } else if (s[k] == 'B') {
        s[k] = 'b';
    } else {
        s[k] = 'c';
    }
    cout << s;
    return 0;
}
