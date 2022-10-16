#include<iostream>
using namespace std;


void reverse_array(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    int arr[5] = {11, 7, 3, 12, 4};
    int size = 5;

    cout << "Original Array: " << endl;
    print_array(arr, size);

    reverse_array(arr, size);
    cout << endl << "Reverse Array: " << endl;
    print_array(arr, size);
}