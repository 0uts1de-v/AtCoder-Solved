#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int n,h,w,ans;
    cin >> n >> h >> w;
    ans = (n+1-h)*(n+1-w);
    cout << ans << endl;
    return 0;
}
