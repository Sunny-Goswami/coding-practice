#include <iostream>
using namespace std;

// Fermat's Little theorem.

int power(int base, int power, int P){
    int res = 1;
    while (power){
    if (power % 2){
        res = (res * base) % P;
        power--;
    }
    else {
        base = (base * base) % P;
        power /= 2;
    }
    }
    return res;
} 

// when m is prime 
int main() {
    int T;  cin >> T;
    while (T--) {
        int a, m; cin >> a >> m;
        int a_inv = power(a, m-2, m);
        cout << "inverse : "<< a_inv << "\n";
    }
}