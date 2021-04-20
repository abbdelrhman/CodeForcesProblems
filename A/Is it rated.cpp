#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> arr[i][j];
        }
    }
    string ans = "";
    int counter = 0;
    bool flag = false;

    for (int i = n - 1; i >= 0 && !flag; --i) {
        for (int j = 0; j < 1 && !flag; ++j) {
            if (arr[i][j] != arr[i][j + 1]) {
                ans = "rated";
                flag = true;
                break;
            }
        }
        if (i != 0 && arr[i][0] > arr[i - 1][0] && !flag) {
            ans = "unrated";
        }

    }
    if (ans.size() == 0) {
        cout << "maybe";
    } else {
        cout << ans;
    }
    return 0;
}
