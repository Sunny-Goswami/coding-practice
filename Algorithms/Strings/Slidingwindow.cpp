#include<iostream>
using namespace std;

int LP, LT;
string T, P;
bool match(int L, int R){
    for (int i = 0; i < LP; i++)
        if (T[L + i] != P[i]) return false;
    return true;

}
void slidingWindow(string T, string P){
    LT = T.length();
    LP = P.length();

    for(int L = 0, R = LP-1; R<LT; L++, R++){
        if (match(L, R))
            cout << L << " ";
    }
}
int main(){
    int t;
    cin >> t;

    cin.ignore(); 
    while (t--){
        getline(cin, T);
        getline(cin, P);
        slidingWindow(T, P);
    }
    return 0;

}