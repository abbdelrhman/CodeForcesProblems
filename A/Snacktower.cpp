#include <iostream>

#include <algorithm>


using namespace std;



int main() {
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i < n+1; ++i) {
        cin >> arr[i];
    }
    bool visited [n+1] ={false};
    int c= n ;
    for (int i = 1; i <=n ; ++i) {
        visited[arr[i]] = true;
        while (c>0 && visited[c]){
            cout << c-- <<" ";
        }
        cout<<'\n';
    }


}
