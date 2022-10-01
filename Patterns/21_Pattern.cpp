#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 21 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;


    while (i<=n){
        int j = 1;
        int space = n - i;
        while(space > 0){
            cout << " ";
            space--;
            cout << "\t";
        }
        while(j<=i){
            cout << "*";
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}