#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 4 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;

    while (i<=n){
        int j =1;
        while(j<=n){
            cout << n-j+1;
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}