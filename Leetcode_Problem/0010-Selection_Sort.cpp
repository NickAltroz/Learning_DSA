#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}


void print_array(int arr[], int size){
    cout << "Printing Array: ";
    cout << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    int arr[5] = {13,3,19,7,11};
    int size = 5;

    selection_sort(arr, size);
    print_array(arr, size);
}