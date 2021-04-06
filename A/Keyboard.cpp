#include <iostream>

using namespace std;

int main() {
    char c1[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char c2[] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
    char c3[] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    char shift;
    cin >> shift;
    string s ;
    cin >> s;
    for (int i = 0; i <s.size() ; ++i) {
        for (int j = 0; j <10 ; ++j) {
            if(s.at(i) == c1[j]){
                if (shift == 'R'){
                    cout << c1[j-1];
                } else{
                    cout << c1[j+1];
                }
            }
        }
        for (int j = 0; j <10 ; ++j) {
            if(s.at(i) == c2[j]){
                if (shift == 'R'){
                    cout << c2[j-1];
                } else{
                    cout << c2[j+1];
                }
            }
        }
        for (int j = 0; j <10 ; ++j) {
            if(s.at(i) == c3[j]){
                if (shift == 'R'){
                    cout << c3[j-1];
                } else{
                    cout << c3[j+1];
                }
            }
        }
    }
    return 0;
}
