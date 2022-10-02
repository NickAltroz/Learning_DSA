//Link: https://leetcode.com/problems/power-of-two/


#include<iostream>
using namespace std;


int power_of_Two(int n){
    while(n != 1){
        if(n == 0 || n % 2 != 0){
            return 0;
        }
        n = n / 2;
    }
    return 1;
}

int main(){

    int n;
    cout << "Enter The Number: ";
    cin >> n;
    cout << endl;

    int ans = power_of_Two(n);
    cout << "is it Power of Two: " << ans;

}