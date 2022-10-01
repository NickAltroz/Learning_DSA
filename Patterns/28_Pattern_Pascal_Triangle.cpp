#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pascal Triangle *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;

    while(i<=n){

        int j = 1;
        //print space
        int space = n-i;
        while(space > 0){
            cout << " ";
            space--;
            cout << "\t";
        }

        //print 1st triangle
        while(j <= i){
            cout << j;
            j++;
            cout << "\t";
        }
        //print 2nd triangle
        int k = i-1;
        while(k > 0){
            cout << k;
            k--;
            cout << "\t";
        }
        cout << endl;
        i++;
    }
}