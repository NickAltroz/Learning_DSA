#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 22 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;


    while (i<=n){
        int j = 1;
        int star = n-i+1;
        while(star > 0){
            cout << "*";
            star--;
            cout << "\t";
        }
        while(j<=i){
            cout << " ";
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}