#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n==0)
            return "";
        
        string res = "";    
        sort(strs.begin(), strs.end());

        string a = strs[0];
        string b = strs[n-1];

        for(int i=0; i < a.length(); i++){
            if (a[i] != b[i])
                break;
            res += a[i];
        }
        return res;
    }
};

int main(){
    vector<string> strs;
    strs = {"flower","flow","flight"};
    Solution obj;
    string str = obj.longestCommonPrefix(strs);
    cout << str;
}