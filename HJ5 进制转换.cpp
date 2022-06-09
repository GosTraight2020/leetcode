#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        int res = 0;
        for(int i=2; i<s.size(); i++){
            int temp=0;
            if(s[i]>='A' && s[i]<='F'){
                temp = 10+(s[i] - 'A');
            }
            if(s[i]>='0' && s[i]<='9'){
                temp = s[i] - '0';
            }
            res = res * 16 + temp;
        }
        cout << res << endl;
    }
    return 0;
}
