#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 15 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;

    char start = 'A';

    while (i<=n){
        int j = 1;
        while(j<=n){
            cout << start;
            cout << "\t";
            j++;
            start++;
        }
        cout << endl;
        i++;
    }
}