#include<iostream>
#include<sstream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        stringstream words(s);
        string word;
        pair<int, string>;
        vector<pair<int, string>> sent;

        // s1
        while ( words >> word){
            int len = word.size();
            int i = int(word[len - 1]) - 48;
            sent.push_back(make_pair(i, word.substr(0, len-1)));
        }

        //s2
        sort(sent.begin(), sent.end());

        //s3
        string ans = "";
        int len = sent.size();
        for(int i=0; i<len; i++){
            ans += sent[i].second;
            if (i != len-1)
                ans += " ";
        }
        return ans;
    }
};
