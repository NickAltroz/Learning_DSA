#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 12 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;
    while (i<=n){
        int j = 1;
        // int value = i;
        while(j<=i){
            cout << i-j+1; //  cout << value;
            cout << "\t";
            // value--;
            j++;
        }
        cout << endl;
        i++;
    }
}