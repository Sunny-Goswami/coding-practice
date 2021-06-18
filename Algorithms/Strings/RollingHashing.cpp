#include<iostream>
#define lli long long int
#define mod 1000000007
using namespace std;

lli getHash(string key){

    lli value = 0;
    lli p = 31;
    lli p_power = 1; // (31 ^ 0)

    for(char ch: key){
        value += ( (ch - 'a' + 1) * p_power) % mod ;
        p_power = (p_power * p) % mod;
    }
    return value;
}
int main() {
    string s; cin >> s;
    cout << getHash(s);
}