#include <iostream>
using namespace std;
int main()
{
    int a,b;
    
    a = 4;
    b = 5;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
    return 0;
}