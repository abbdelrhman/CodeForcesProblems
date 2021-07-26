#include <iostream>
using namespace std ;
int main() {
    int n;
    cin >> n ;
    string s="" ;
    cin >> s ;

    for (int i = 0; i <s.length()-1 ; ++i) {
        if ((s[i] == '0' && s[i+1]=='1') || (s[i] == '1' && s[i+1]=='0') ){

            s.erase(s.begin()+i,s.begin()+(i+2));
            if (i==0&& s.size()!=0 ){
                i--;
            }else{
                i-=2;
            }
        }
    }
    cout << s.length();
    return 0;
}
