#include <iostream>
using namespace std;
int main()
{
    int x= 10;
    int *p = &x;
    cout << "Value of x: " << x << endl;
    cout<< "Address of x: " << &x << endl;
    cout << "Value of pointer p (Address of x): " << p << endl;
    cout << "Value of pointer p (Address of x+1): " << p+1 << endl;
    cout << "Value pointed to by p: " << *p+1 << endl;

    int **q = &p;
    cout << "Value of pointer q (Address of p): " << q << endl;
    cout << "Value of pointer *q : " << *q << endl;
    cout << "Value of pointer **q : " << **q << endl;
    return 0;
}