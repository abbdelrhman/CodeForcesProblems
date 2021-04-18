#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long even = n/2 ;
    long long odd = n-even ;
    if(k <= odd){
        cout<< 1+(k-1)*2;
    }else{
        cout<< 2+(k-odd-1)*2;
    }
 return 0;
}
