// link: https://leetcode.com/problems/complement-of-base-10-integer/

#include <iostream>
using namespace std;

int complement(int n){
    int m = n;
    int mask = 0;

    if(m == 0){
        return 1;
    }
    while(n!=0){
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    return (~m)&mask;
}

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << endl;

    int ans = complement(n);
    cout << "complement of " << n << " is: " << ans;
}