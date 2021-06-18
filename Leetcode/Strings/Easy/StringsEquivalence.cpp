#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int wrdidx1 = 0, wrdidx2 = 0; 
        int chidx1 = 0, chidx2 = 0;
        while( wrdidx1 < word1.size() && wrdidx2 < word2.size()){
            if (word1[wrdidx1][chidx2++] != word2[wrdidx2][chidx2++])
                return false;

            if (chidx1 == word1[wrdidx1].length() - 1){
                chidx1 = 0;
                wrdidx1++;
            }
            if (chidx2 == word2[wrdidx2].length() - 1){
                chidx2 = 0;
                wrdidx2++;
            }  
        }

        return wrdidx1 == word1.size() and wrdidx2 == word2.size();
    }
    // }
    //    string s1 = "", s2 = "";
    //     for(int i=0; i<word1.size(); i++)
    //         s1 += word1[i];
    //     for(int i=0; i<word2.size(); i++)
    //         s2 += word2[i];
    //     return s1 == s2;
    // }
};