#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    string s;
    while(getline(cin ,s)){
        set<char> rec;
        int res = 0;
        
        for(auto i : s){
            if(rec.find(i) == rec.end()){
                rec.insert(i);
                res ++;
            }
        }
        cout << res <<endl;
    }
    return 0;
}


####################################################

#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    string s;
    while(getline(cin ,s)){
        set<char> rec;
        
        for(auto i : s){
                rec.insert(i);
            }
        cout << rec.size();
    }
    return 0;
}
