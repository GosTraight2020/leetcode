#include<bits/stdc++.h>

using namespace std;

bool isNum(string num){
    int len = num.size();
    if(len > 2) return false;
    for(int i=0; i<len; i++){
        if(num[i]>='0' && num[i]<='9') continue;
        else return false;
    }
    return true;
}

int main(){
    string s;
    pair<int,int> p(0, 0);
    while(getline(cin, s, ';')){
        if(s.empty()) continue;
        string val = s.substr(1);
        if(isNum(val)){
            switch(s[0]){
                case 'A':
                    p.first -= stoi(val);
                    break;
                case 'D':
                    p.first += stoi(val);
                    break;
                case 'W':
                    p.second += stoi(val);
                    break;
                case 'S':
                    p.second -= stoi(val);
                    break;
            }
        }
    }
    cout << p.first << ',' << p.second;
    
}
