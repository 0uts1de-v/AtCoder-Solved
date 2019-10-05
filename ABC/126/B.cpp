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
    string s;
    cin >> s;
    string a = "00", b = "00";
    a[0] = s[0]; a[1] = s[1]; b[0] = s[2]; b[1] = s[3];
    int m, u;
    m = stoi(a); u = stoi(b);
    if (m == 0 || m > 12) {
        if (u == 0 || u > 12){
            cout << "NA" << endl;
            return 0;
        } else {
            cout << "YYMM" << endl;
            return 0;
        }
    } else {
        if (u == 0 || u > 12){
            cout << "MMYY" << endl;
            return 0;
        } else {
            cout << "AMBIGUOUS" << endl;
            return 0;
        }
    }
    return 0;
}
