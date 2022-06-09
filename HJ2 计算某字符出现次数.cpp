#include<string>
#include<iostream>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    char c = tolower(getchar());
    uint16_t n=0;
    for(auto i:str){
        if(tolower(i) == c){
            ++n;
        }
    }
    cout<<n;
    return 0;
}

######################################

#include<string>
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    char c = tolower(getchar());
    unordered_map<char, uint16_t> map;
    uint16_t n=0;
    for(auto i:str){
        map[tolower(i)]++;
    }
    cout<<map[c]<<endl;
    return 0;
}
