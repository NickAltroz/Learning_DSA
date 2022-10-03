#include <iostream>
using namespace std;


int find_array_sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    cout << "Sum of Value in array: " << find_array_sum(arr, size) << endl;
}