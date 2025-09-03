#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Upper half (pyramid)
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half (inverted pyramid)
    for (int i = n - 2; i >= 0; i--) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printHalfDiamond(int n){
    for (int i = 0; i < 2*n-1; i++)
    {
        int star = i+1;
        if(i>n-1) star = 2*n-i-1;
        for (int j = 0; j < star; j++)
        {
            cout << "*";        
        }
        cout << endl;

    }
    
    
}
int main() {
    int n = 5;
    printDiamond(n);
    printHalfDiamond(n);
    return 0;
}
