#include<iostream>
#include "Chaining-linkedlist.h"
using namespace std;

void sortedInsert(Node* *index, int data){
    Node *node1 = new Node;
    node1 -> data = data;
    node1 -> next = NULL;

    if (*index == NULL)
        *index = node1;
    else{
        Node *curr = *index;
        Node *prev = NULL;
        while(curr != NULL && (curr -> data ) < data ){
            prev = curr;
            curr = curr -> next;
        }
        if (curr == *index){
            node1 -> next = *index;
            *index = node1;
        }
        else {
            node1 -> next = curr;
            prev -> next = node1;
        }
    }
}

Node* search(Node *index, int key){
    Node* temp = index;
    while (temp != NULL){
        if (key == temp -> data ){
            return index;
        }
        temp = temp -> next;
    }
    return NULL;
} 

int calcHash(int key){
    return key % 10;
}

int main(){
    // ht is a pointer that points to an array of pointers which contains addresses of nodes.
    // ht -> arr [arr[0] -> ll, arr[1] -> ll .....]
    Node* *hT = new Node*[10];
    
    for(int i=0; i<10; i++)
        hT[i] = NULL;
    
    int arr[] = {2, 3, 4, 13, 8, 1, 7, 17, 27};
    int arrLen = sizeof(arr)/sizeof(int);
    
    for (int i=0; i< arrLen; i++){
        int hash = calcHash(arr[i]); 
        sortedInsert(&(hT[hash]), arr[i]);
    }    

    for (int i=0; i< arrLen; i++){
        int hash = calcHash(arr[i]); 
        if (hT[hash] == NULL)
            cout << "Not Found" <<'\n';
        else {
            Node *temp = search(hT[hash], arr[i]);
            if (temp != NULL)
                cout << "Found "<< arr[i] << " at "<< temp -> data<<"\n";
            else
                cout << "Not Found" <<'\n';
        }
    }
}

