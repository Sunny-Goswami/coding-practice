#include<iostream>
#define lli long long int
#define mod 1000000007
using namespace std;

lli prefixArr[10000];
lli invMod[10001];

void init(string s){
    int p = 31;
    int p_power = 1;

    prefixArr[0] = s[0] - 'a' + 1;
    invMod[0] = 0;
    for(int i=1; i<s.length(); i++){
        prefixArr[i] = (prefixArr[i-1] + (s[i] - 'a' + 1)  * p_power) % mod;
        invMod[i] = invMod[i-1] + power()
    }
    
}

int checkIfExist(string patt, string text) {

}


int main(){
    int T;
    while (cin >> T) {
        string patt; cin >> patt;
        string text; cin >> text;
        init(text);
        cout << checkIfExist(patt, text);
    }
}