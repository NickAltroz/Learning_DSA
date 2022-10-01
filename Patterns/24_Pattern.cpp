#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 24 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;


    while (i<=n){
        int j = 1;
        int space = i-1;
        while(space > 0){
            cout << " ";
            space--;
            cout << "\t";
        }
        while(j<=n-i+1){
            cout << i;
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}