// Q: 1832. Check if the Sentence Is Pangram
#include<iostream>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.length()<26)
            return false;
        
        string str = "abcdefghijklmnopqrstuvwxyz";
        
        for(int i=0; i<26; i++){
            if (sentence.find(str[i]) == -1)
                return false;
        }
        return true;
    }

    // O(1) Solution:
    bool checkIfPangram(string sentence){
        int max = (1<<26) - 1;
        int seen = 0;
        for(auto &ch: sentence){
            seen = seen | (1<<(ch - 'a'));
            if (seen == max) return true;
        }
        return false;
    }

};
int main(){
    string str; cin >> str;
    Solution str1; 
    cout << str1.checkIfPangram(str);
    return 0;
}

// jwtucoucmdfwxxqnxzkaxoglszmfrcvjoiunqqausaxxaaijyqdqgvdnqcaihwilqkpivenpnekioyqujrdrovqrlxovcucjqzjsxmllfgndfprctxvxwlzjtciqxgsxfwhmuzqvlksyuztoetyjugmswfjtawwaqmwyxmvo
