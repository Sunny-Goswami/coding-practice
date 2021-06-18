#include<iostream>
using namespace std;

void swap (int *curr, int *next){
    int temp = *curr;
    *curr = *next;
    *next = temp;
}

void bubbleSort(int *arr, int n){
    int flag = 0;
    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]) {  //Ascending Order.
                swap((arr + j), (arr + j + 1));
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
int main(){
    int n=5; 
    int arr[n] = { 2, 4, 1, 3, 8};
    bubbleSort(arr, n);
    for (int item: arr)
        cout << item << " ";  
}