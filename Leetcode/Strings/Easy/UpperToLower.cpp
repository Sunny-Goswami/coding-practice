#include<iostream>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i < s.length(); i++){
           if (ch>=65 and ch <= 91)
                s[i] = char(s[i] + 32);
        }
        return s;

    // for (char& c : str)
    //      c |= 0b00100000;
    }
};


int main(){
    string str;
    cin >> str;
    Solution obj;
    cout << obj.toLowerCase(str);
    return 0;
}

// "al&phaBET"
