#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int s = n * m;
    set<char> colors;
    for (int i = 0; i < s; ++i) {
        char a;
        cin >> a;
        colors.insert(a);
    }
    if (colors.count('C') || colors.count('M') || colors.count('Y')) {
        cout << "#Color";
    }else{
        cout<<"#Black&White";
    }
    return 0;
}
