#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cfloat>

using namespace std;

//start of 0uts1de's library

int cin_int_arr(vector<int>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cin >> arr.at(i);
    }
    return 0;
}

int cin_int_arr(vector<int>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cin >> arr.at(i);
    }
    return 0;
}

int cin_double_arr(vector<double>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cin >> arr.at(i);
    }
    return 0;
}

int cin_double_arr(vector<double>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cin >> arr.at(i);
    }
    return 0;
}


int cout_int_arr(vector<int>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}

int cout_int_arr(vector<int>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}

int cout_double_arr(vector<double>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}

int cout_double_arr(vector<double>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}


int max_int_arr(std::vector<int>& arr, int mode = 0){    //0 -> data  1 -> index
    int maxVal = INT_MIN;       //min of int
    int maxIndex = 0;
    for (int i = 0; i < arr.size(); ++i){
        if (arr.at(i) > maxVal){
            if (mode == 0){
                maxVal = arr.at(i);
            }
            else if (mode == 1){
                maxVal = arr.at(i);
                maxIndex = i;
            }
            else{
                cout << "Invalid mode." << endl;
                return -1;
            }
        }
    }
    if (mode == 0){
        return maxVal;
    }
    else if (mode == 1){
        return maxIndex;
    }
    return -1;
}

double max_double_arr(std::vector<double>& arr, int mode = 0){    //0 -> data  1 -> index
    double maxVal = -DBL_MAX;       //min of double
    int maxIndex = 0;
    for (int i = 0; i < arr.size(); ++i){
        if (arr.at(i) > maxVal){
            if (mode == 0){
                maxVal = arr.at(i);
            }
            else if (mode == 1){
                maxVal = arr.at(i);
                maxIndex = i;
            }
            else{
                cout << "Invalid mode." << endl;
                return -1;
            }
        }
    }
    if (mode == 0){
        return maxVal;
    }
    else if (mode == 1){
        return maxIndex;
    }
    return -1;
}

//end of 0uts1de's library

int main(){
    int n, k, ans = INT_MAX;
    cin >> n >> k;
    vector<int> h(n);
    cin_int_arr(h);
    sort(h.begin(), h.end());
    for (int i = 0; i < n - k + 1; ++i){
        if (h.at(i + k - 1) - h.at(i) < ans){
            ans = h.at(i + k - 1) - h.at(i);
        }
    }
    cout << ans << endl;
    return 0;
}
