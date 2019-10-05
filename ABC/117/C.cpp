#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    vector<int> diff(m - 1);
    for (int i = 0; i < m; ++i){
        cin >> x[i];
    }
    if (n >= m){
        cout << 0 << endl;
        return 0;
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < m - 1; ++i){
        diff[i] = abs(x[i + 1] - x[i]);
    }
    sort(diff.begin(), diff.end());
    for (int i = 0; i < n - 1; ++i){
        diff.pop_back();
    }
    int ans = 0;
    for (int i = 0; i < diff.size(); ++i){
        ans += diff[i];
    }
    cout << ans << endl;
    return 0;
}
