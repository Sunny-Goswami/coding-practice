#include<iostream>
using namespace std;

void swap (int *curr, int *next){
    int temp = *curr;
    *curr = *next;
    *next = temp;
}

void selectionSort(int *arr, int n) {
    for (int i=0; i<n-1; i++){
        int pos = i;
        for (int j=i; j<n; j++) {
            if (arr[i] > arr[j]){
                    pos = j;
            }
            if(pos != i)
                swap(&arr[i], &arr[pos]);
        }
    }
}

int main(){
    int n=5; 
    int arr[n] = { 2, 4, 1, 3, 8};
    selectionSort(arr, n);
    for (int item: arr)
        cout << item << " ";  
}   