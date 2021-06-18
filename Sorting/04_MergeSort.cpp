#include<iostream>
using namespace std;

void merge(int *arr, int left, int mid, int right){
    int lsize = mid - left + 1;
    int rsize = right - mid;

    int leftHalf[lsize]; 
    int rightHalf[rsize]; 
    for(int i=0; i<lsize; i++){
        leftHalf[i] = arr[left + i];
    }
    for(int i=0; i<rsize; i++){
        rightHalf[i] = arr[mid + 1 + i];
    }

    int i=0, j=0, k=left;
    while(i < lsize && j < rsize){
        if (leftHalf[i] <= rightHalf[j]){
            arr[k] = leftHalf[i];
            i++;
        }
        else{
            arr[k] = rightHalf[j];
            j++;
        }
        k++;
    }

    while (i < lsize){
        arr[k] = leftHalf[i];
        k++;
        i++;
    }
    while (j < rsize){
        arr[k] = rightHalf[j];
        k++;
        j++;
    }
}

void mergeSort(int *arr, int left, int right){

    if (left >= right)
        return;
    
    //Step 1: Dividing the array
    int mid = left + (right-left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    //Step 2: Sort each half and merge
    merge(arr, left, mid, right);
}

int main(){
    int n=5; 
    int arr[n] = { 2, 4, 1, 3, 8};
    mergeSort(arr, 0, n-1);
    for (int item: arr)
        cout << item << " ";  
}