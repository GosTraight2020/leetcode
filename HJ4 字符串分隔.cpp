#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s; 
    while(getline(cin, s)){
        while(s.size()>8){
            cout << s.substr(0, 8)<<endl;
            s = s.substr(8, s.size()-8);
        }
        
        int len = s.size();
        if(len == 8){
            cout << s <<endl;
            return 0;
        }
        cout.width(8);
        cout.fill('0');
        cout << left << s << endl;
        return 0;
    }
    
}
