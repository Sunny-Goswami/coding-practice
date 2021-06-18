#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int alpha[26] = {}, res = 0;
        for (auto ch: allowed)
            alpha[ch - 'a']++;
        
        for(auto &word: words){
            bool isConsistent = true;
            for (auto &ch: word){
                if (alpha[ch - 'a'] == 0){
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) res++;
        }

        // for(auto &w: words){
        //     res += all_of(w.begin(), w.end(), 
        //     [&](char ch) {
        //         return cnt [ch - 'a'];
        //     });
        //     cout << res <<" ";

        // }
        return res;
    }
};

int main(){
    string allowed = "cad";
    vector<string> str = {"a", "b", "ad", "bc", "ac"};
    Solution obj;
    cout << obj.countConsistentStrings(allowed, str);
}



