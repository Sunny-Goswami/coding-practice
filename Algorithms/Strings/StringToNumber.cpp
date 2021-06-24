#include<iostream>
using namespace std;

int main(){
    string str = "245685";
    int num = 0;
    for(int i=0; i<str.length(); i++){
        num = num *10 + (str[i] - '0') ;
    }
    cout << num - 685 << " ";
}
