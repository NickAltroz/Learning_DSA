#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 8 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;

    while (i<=n){
        int j = 1;
        while(j<=i){
            cout << j;
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}