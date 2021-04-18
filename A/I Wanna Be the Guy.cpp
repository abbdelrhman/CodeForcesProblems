#include <iostream>
#include <set>


using namespace std ;
int main() {
    set<int > coop;

    int n,p,q ;
    cin >> n>>p ;
    for (int i = 0; i <p; ++i) {
        int c ;
        cin >> c ;
        coop.insert(c);
    }
    cin >> q;
    for (int i = 0; i <q; ++i) {
        int c ;
        cin >> c ;
        coop.insert(c);
    }
    if (n==coop.size()){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
