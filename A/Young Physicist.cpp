#include <iostream>

using namespace std;

int main() {
    int ans[3] = {0} ;
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <3 ; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j <n ; ++j) {
            ans[i]+= arr[j][i];
        }
    }
    bool eqi = true ;
    for (int i = 0; i <3 ; ++i) {
        if (ans[i] != 0 ){
            eqi = false;
            break;
        }
    }

    if (eqi){
        cout<<"YES";
    }else{
        cout <<"NO";
    }

    return 0;
}
