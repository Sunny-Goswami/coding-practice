#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index = 0;
        if(ruleKey[0] == 'c')
            index = 1;
        
        if(ruleKey[0] == 'n')
            index = 2;
        
        int count = 0;
        for (int i = 0; i < items.size(); i++){
            if(items[i][index] == ruleValue)
                count++;
        }
        return count;
    }
};
