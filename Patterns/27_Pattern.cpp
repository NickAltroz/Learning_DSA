#include <iostream>
using namespace std;

int main (){
    cout << endl;
    cout << "************************************************* Pattern 27 *************************************************\n\n";

    int i=1,n;
    cout << "Enter No. of Rows:";
    cin >> n;
    cout << endl;

    int count = 1;


    while (i<=n){
        int j = 1;
        int space = n - i;
        while(space > 0){
            cout << " ";
            space--;
            cout << "\t";
        }
        while(j<=i){
            cout << count;
            count++;
            cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
}