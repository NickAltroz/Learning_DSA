#include <iostream>
using namespace std;

int getMin(int arr[], int size){
    int Mini = INT_MAX;
    for(int i = 0; i < size; i++){
        Mini = min(Mini, arr[i]);
    }
    return Mini;
}

int getMax(int arr[], int size){
    int Maxi = INT_MIN;
    for(int i = 0; i < size; i++){
        Maxi = max(Maxi, arr[i]);
    }
    return Maxi;
}

int main(){
    int arr[5] = {12,56,2,66,3};
    int size = 5;

    cout << "Max value in array is: " << getMax(arr, size) << endl;
    cout << "Min value in array is: " << getMin(arr, size);
    
}