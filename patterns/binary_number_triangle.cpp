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

int main()
{
    int n = 5;
    printBinaryNumberTriangle(n);
    printNumberCrown(n);
    printIncreasingNumberTriangle(n);
    return 0;
    }