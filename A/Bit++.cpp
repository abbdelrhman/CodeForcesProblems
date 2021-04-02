#include <iostream>

using namespace std ;
int main() {
    int n ;
    cin >> n ;
    string arr[n] ;
    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
    }
    int ans=0 ;
    for (int i = 0; i <n ; ++i) {
        if(arr[i].at(1) == '+'){
            ans++;
        } else if (arr[i].at(1) == '-'){
            ans--;
        }
    }
    cout <<ans;
    return 0;
}
