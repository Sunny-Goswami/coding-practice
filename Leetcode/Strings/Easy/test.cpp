#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "hello";
    string::iterator it = str.begin();
    sort(str.begin(), str.end());

    string s[10];
    sort(s, s+10);
}