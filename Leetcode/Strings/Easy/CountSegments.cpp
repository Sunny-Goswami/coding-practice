#include<iostream>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int len = s.length();
        if (len == 0 || s == " ")
            return 0;
        
        int cntSeg = 0;
        for(int i=0; i<len-1; i++){
            if(s[i] != ' ' && s[i+1] == ' ')
                cntSeg++;
        }
        return cntSeg;
    }
};