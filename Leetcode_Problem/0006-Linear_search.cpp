#include <iostream>
using namespace std;



int linear_search(int arr[], int size, int n){
    for(int i = 0; i<size; i++){
        if(arr[i] == n){
            return 1;
        }
    }
    return 0;
}

int main(){

int arr[5] = {12,-2,5,3,8};
int n,size = 5;

cout << "Enter Number to Search For: ";
cin >> n;
cout << endl;

int ans = linear_search(arr,size,n);

if(ans){
    cout << "Number is Found.";
}else{
    cout << "Not Found!";
}

}