#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    for(int i = size-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    int arr[6] = {10,1,7,6,14,8};
    int size = 6;

    cout << "before Sorting: ";
    print_array(arr, size);
    bubble_sort(arr, size);
    cout <<endl;
    cout << "After Sorting: ";
    print_array(arr, size);
    
}