#include<bits/stdc++.h>

using namespace std;

string transfer(string s){
    char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"};
    char b[] = {"bcdefghijklmnopqrstuvwxyza222333444555666777788899990123456789"};
    
    string res = s;
    for (int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            res[i] = b[s[i] - 'A']; 
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            res[i] = b[s[i] - 'a' + 26];
        }
        else if(s[i] >= '0' && s[i] <= '0'){
            res[i] = b[s[i] - '0' +52];
        }
    }
    return res;
}

int main(){
    string str;
    while(getline(cin, str)){
        cout << transfer(str) << endl;;
    }
    return 0;
}
