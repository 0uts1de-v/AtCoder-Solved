#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(){
    int ans = 0;
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> p(n);
    for (int i = 0; i < n; ++i){
        cin >> p[i];
    }
    vector<int> pn(3,0);
    for (int i = 0; i < n; ++ i){
        if (p[i] <= a){
            pn[0]++;
        }
        if (a < p[i] && p[i] <= b){
            pn[1]++;
        }
        if (b < p[i]){
            pn[2]++;
        }
    }
    sort(pn.begin(),pn.end());
    ans = pn[0];
    cout << ans << endl;
    return 0;
}
