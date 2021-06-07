#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        unordered_map<string, string> d = {
            { "(al)", "al"},
            { "G", "G"},
            { "()", "o"}
        };

        string tmp = "", res = ""; 
        for(char c: command){
            tmp += c;
            if(d.find(tmp)!=d.end()){
                res += d[tmp];
                tmp = "";
            }
        }
        return res;
    }
};

int main(){
    string str = "(al)G(al)()()G";
    Solution *obj = new Solution();
    cout<<obj->interpret(str);

}