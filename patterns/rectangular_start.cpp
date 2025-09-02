
#include <iostream>

using namespace std;
void printRectangle(int n) {
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           cout << " * ";
       }
       cout << endl;
   }
}

void printRightAngledTriangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < i+1; j++)
        {
           cout << " * ";
        }
        cout << endl;
    }
}

void  printRightAngledNumberPyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << " " << j+1;
        }
        cout << endl;
    }
    
}
void printRightAngledNumberPyramid2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << " " << i+1;
        }
        cout << endl;
    }
}
void printInvertedRightPyramid(int n){
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-1-i; j++)
        {
            cout << " " << "*";
        }
        cout << endl;
    }
    
}

void printInvertedNumberedRightPyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-1-i; j++)
        {
            cout << " " << j+1;
        }
        cout << endl;
    }
}

void printStarPyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void invertedStarPyramid(int n){
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void  printDiamond(int n) {
    printStarPyramid(n);
    invertedStarPyramid(n);
}

int main()
{
    int n;
    n = 5;
    // printRectangle(n);
    // printRightAngledTriangle(n);
    // printRightAngledNumberPyramid(n);
    // printRightAngledNumberPyramid2(n);
    // printInvertedRightPyramid(n);
    // printInvertedNumberedRightPyramid(n);
    // printStarPyramid(n);
    invertedStarPyramid(n);
    printDiamond(n);

    return 0;
}

