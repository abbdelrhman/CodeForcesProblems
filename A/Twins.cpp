#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int temp[n];
    int total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr, arr + n, greater<int> ());
    for (int i = 0; i < n; ++i) {
        temp[i] = arr[n - i - 1];
    }
    int curr[n], sum[n];
    curr[0] = arr[0];
    sum[0] = total - arr[0];
    for (int i = 1; i < n; ++i) {
        curr[i] = curr[i - 1] + arr[i];
        sum[i] = total - curr[i];
    }
    int no = n ;
    for (int i =0  ; i< n ; i++){
        if(curr[i] > sum[i]){
            no=i+1;
            cout << no ;
            break;
        }
    }
        return 0;
}
