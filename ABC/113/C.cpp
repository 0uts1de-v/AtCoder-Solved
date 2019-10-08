//include
//------------------------------------------
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {
    int v;
    istringstream sin(s);
    sin >> v;
    return v;
}
template <class T>
inline string toString(T x) {
    ostringstream sout;
    sout << x;
    return sout.str();
}

//math
//-------------------------------------------
template <class T>
inline T sqr(T x) { return x * x; }

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i, c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort((c).begin(), (c).end())
#define RSORT(c) sort((c).begin(), (c).end(), std::greater<decltype((c).front())>())
#define SUM(c) accumulate((c).begin(), (c).end(), 0LL)
template <class T>
inline T max_V(vector<T> &vec) {
    auto maxVal = vec[0];
    for (const auto &i : vec)
        if (i > maxVal) maxVal = i;
    return maxVal;
}
template <class T>
inline size_t max_I(vector<T> &vec) {
    size_t maxIndex = 0;
    for (size_t i = 0; i != vec.size(); ++i)
        if (vec[i] > vec[maxIndex]) maxIndex = i;
    return maxIndex;
}

//repetition
//------------------------------------------
#define FOR(i, a, b) for (long long i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

//constant
//--------------------------------------------
constexpr double EPS = 1e-10;
constexpr double PI = 3.141592653589793;

//clear memory
#define CLR(a) memset((a), 0, sizeof(a))

//debug
#define dump(x) cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
                      << " " << __FILE__ << endl;

int main() {
    int n, m; cin >> n >> m;
    vector<tuple<int, int, int>> a(m); // P, Y, order
    REP (i, m) {
        cin >> get<0>(a[i]) >> get<1>(a[i]);
        get<2>(a[i]) = i;
    }

    SORT(a);
    auto tmp_p = get<0>(a[0]);
    int cnt = 1;
    REP (i, m) {
        if (get<0>(a[i]) == tmp_p) {
            get<1>(a[i]) = cnt;
            ++cnt;
        }
        else {
            tmp_p = get<0>(a[i]);
            get<1>(a[i]) = 1;
            cnt = 2;
        }
    }
    sort(
        a.begin(),
        a.end(),
        [](tuple<int, int, int> &x, tuple<int, int, int> &y){return get<2>(x) < get<2>(y);}
        );

for (const auto &i : a) cout << setfill('0') << right << setw(6) << get<0>(i) << setw(6) << get<1>(i) << "\n"; 
}
