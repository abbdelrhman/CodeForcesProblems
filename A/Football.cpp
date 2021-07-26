#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    string a[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    int leadingTeam=1, equalizerTeam=0;
    string team1 = a[0];
    string team2 ="" ;
    for (int i = 1; i <n ; ++i) {
        if (team1 == a[i]){
            leadingTeam++;
        }else{
          team2=a[i];
          equalizerTeam++;
        }
    }
    if (leadingTeam>equalizerTeam){
        cout<<team1;
    }else{
        cout<<team2;
    }
    return 0;
}
