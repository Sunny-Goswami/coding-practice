#include<iostream>
#define lli long long int
#define mod 1000000007
using namespace std;

lli prefixArr[10001];
lli invModArr[10001];

lli power (lli base, lli power){
    int res = 1;
    while (power){
        if (power % 2){
            res = (res * base) % mod;
            power--;
        }
        else {
            base = (base * base) % mod ;
            power /= 2;
        }
    }
    return res;
}
void init(string s){
    lli p_power = 1;
    int p = 31;
    invModArr[0] = 1;
    prefixArr[0] = (s[0] - 'a' + 1);

    for (int i=1; i < s.length(); i++){
        p_power = (p_power * p) % mod;
        invModArr[i] = power(p_power, mod - 2);
        prefixArr[i] = (prefixArr[i-1] + (s[i] - 'a' + 1) * p_power) % mod;
    }
}

lli hashOfSubstr(int L, int R){
    if (L==0)
        return prefixArr[R];
    
    lli res = prefixArr[R] - prefixArr[L-1];
    res = (res * invModArr[L]) % mod;
    return res;
}

int main(){
    int T; cin >> T;
    string input_string; cin >> input_string;
    init(input_string);
    while (T--) {
        int L, R; cin >> L >> R;
        cout << hashOfSubstr(L, R) << "\n";
    }
}