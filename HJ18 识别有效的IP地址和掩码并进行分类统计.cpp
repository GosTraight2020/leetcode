#include<bits/stdc++.h>

using namespace std;

bool is_ip(string ip){
    istringstream iss(ip);
    string seg;
    int j = 0;
    while(getline(iss, seg, '.')){
        if(++j > 4 || seg.empty() || stoi(seg) > 255)
            return false;
    }
    return j==4;
}

bool is_private_ip(string ip){
    istringstream iss(ip);
    string seg;
    vector<string> rec;
    while(getline(iss, seg, '.')) rec.push_back(seg);
    if(rec[0] == "10") return true;
    if(rec[0] == "172" && (stoi(rec[1]) >= 16 && stoi(rec[1])<=31)) return true;
    if(rec[0] == "192" && rec[1] == "168") return true;
    return false;
}

bool is_mask(string mask){
    istringstream iss(mask);
    string seg;
    unsigned b =0;
    while(getline(iss, seg, '.')) b = (b<<8) + stoi(seg);
    if(!b) return false;
    b = ~b+1;
    if(b == 1) return false;
    if(b & (b-1) == 0) return false;
    return false;
}


int main()
{
    string input;
    int a=0, b=0, c=0, d=0, e=0, err=0, p=0;
    while(cin >> input){
        istringstream iss(input);
        string add;
        vector<string> v;
        while(getline(iss, add, '~')) v.push_back(add);
        if(!is_ip(v[1]) || is_mask(v[1])) err++;
        else{
            if(!is_ip(v[0])) err++;
            else{
                int first = stoi(v[0].substr(0, v[0].find_first_of('.')));
                if(is_private_ip(v[0])) p++;
                if(first >0 && first <127) a++;
                else if(first > 127 && first < 192) b++;
                else if(first > 191 && first < 224) c++;
                else if(first > 223 && first < 240) d++;
                else if(first > 239 && first < 256) e++;
            }
        }
    }
    
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << err << " " << p << endl;
    return 0;
}
