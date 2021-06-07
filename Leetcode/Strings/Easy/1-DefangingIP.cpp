#include<bits/stdc++.h>
using namespace std;

string defangIPaddr(string address) {
    string str="";
    if(address.size()){
        for(int i=0; i<address.size(); i++){
            if(address[i] == '.') str += "[.]";
            else str += address[i];
        }       
    }
    return str; 
}

string defangIPaddr(string a) {
        return regex_replace(a, regex("\\."), "[.]");
}

int main(){
    string st = "1.1.1.1";
    cout<<st<<endl;
    cout<<defangIPaddr(st);
}