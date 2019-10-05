#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, ans;
    cin >> n;
    vector<int> t(n);
    
    for(int i = 0; i < n; ++i)
    {
        cin >> t[i];
    }

    sort(t.begin(), t.end());
    
    ans = t[0];

    cout << ans << endl;
    return 0;
}
