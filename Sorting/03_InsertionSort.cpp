#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for (int i = 1; i<n; i++){
        int j = i-1;
        int curr = arr[i];
        while(j>=0 && curr < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}
int main(){
    int n=5; 
    int arr[n] = { 2, 4, 1, 3, 8};
    insertionSort(arr, n);
    for (int item: arr)
        cout << item << " ";  
}   