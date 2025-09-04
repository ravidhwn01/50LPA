#include <iostream>
using namespace std;

void printBinaryNumberTriangle(int n)
{
    int start = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void printNumberCrown(int n)
{
}

void printIncreasingNumberTriangle(int n)
{
    int count = 1;   // i forgot to initialize count to 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void printDecreasingNumberTriangle(int n)
{
    int count = n * (n + 1) / 2; // sum of first n natural numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }
}

void printIncreasingLetterTriangle(int n){
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

}
void printSameIncreasingLetterTriangle(int n){
   
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

}

void printInvertedSameIncreasingLetterTriangle(int n){
    for(int i = n; i>0;i--){
        char ch = 'A';
        for(int j = 1; j<=i;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
}

void printAlphaRamp(int n){
    for(int i=0; i<n;i++){
    // for(int i=n; i<=0;i--){ for inverted

        char ch = 'A'+i;
        for(int j=0; j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void printAlphaHillPattern(int n){
    for(int i=0; i<n;i++){
        bool f = false;
        char ch = 'A';
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1;j++){
            if(j<=i){
                cout<<ch;
                ch++;
                f = true;
            } 
            else{
                if(f == true){    // we have to decrease 2 times 
                    ch--;
                    f = false;
                }
                ch--;
                cout<<ch;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n = 5;
    // printBinaryNumberTriangle(n);
    // printNumberCrown(n);
    // printDecreasingNumberTriangle(n);
    // printIncreasingNumberTriangle(n);
    // printIncreasingLetterTriangle(n);
    // printSameIncreasingLetterTriangle(n);
    // printInvertedSameIncreasingLetterTriangle(n);
    cout << endl;
    // printAlphaRamp(n);
    cout << endl;
    printAlphaHillPattern(n);
    return 0;
    }