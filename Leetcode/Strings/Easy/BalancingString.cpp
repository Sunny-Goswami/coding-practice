#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.length(); i++){
            if(!st.empty() && st.top() != s[i])
                st.pop();
            else 
                st.push(s[i]);
            if(st.empty()){
                count++;
            }
        }
        return count;
    }

    // Better approach:
    int balancedStringSplit(string s){
        int res = 0, cnt = 0;
        for(auto &c : s){
            cnt += c == 'L' ? 1 : -1;
            if (cnt == 0)
                ++res;
        }
        return res;
    }
};

int main(){
    string s; cin >> s;
    Solution *strobj = new Solution();
    int res = strobj -> balancedStringSplit(s);
    cout << res;
}