#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixFunction(string pat) {
    vector<int> piTable(pat.size());
    int j = 0;
    for (int i = 1; i < (int)pat.size(); i++){
        while (j > 0 && pat[j] != pat[i])
            j = piTable[j - 1];
        
        if (pat[j] == pat[i])
            j++;
        piTable[i] = j;
    }
    return piTable;
}

void kmpPatterSearch(string text, string pat){
    int tlen = text.length();
    int plen = pat.length();

    vector<int> piTable;
    piTable = prefixFunction(pat);

    int i = 0;
    int j = 0;
    while(i < tlen){
        if (pat[j] == text[i]){
            i++;
            j++;
        }
        if (j == plen){
            cout << "Pattern found at location "<< (i-j) <<"\n";
            j = piTable[j - 1];
        }
        else{
            i++;
        }
    }

}

int main() {
    string text = "ababcabcabababd";
    string pat = "ababd";
    kmpPatterSearch(text, pat);
}