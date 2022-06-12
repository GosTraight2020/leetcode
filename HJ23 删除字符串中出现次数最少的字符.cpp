#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin, s)){
        map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]] ++;
        }
        int min = 20;
        for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
            if(it->second < min){
                min = it->second;
            }
        }
        
        for(int i=0; i< s.size(); i++){
            if(mp[s[i]] > min) cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
