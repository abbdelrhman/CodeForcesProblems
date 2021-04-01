#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    string input ;
    getline(cin, input);//the space problem solved here since cin >> finish when see a space
    set<char> str;
   // cout << input<<endl;

    int len = input.length();
    for(int i= 0 ;i<input.length();i++){
       if(input[i]!=',' && input[i]!='{'&&input[i]!='}' && input[i] != ' '){
        str.insert(input[i]);
       }
    }

    cout<<str.size()<<endl;
    return 0;
}
