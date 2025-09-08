#include <iostream>
// #include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
int main()
{
    // unordered_set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.erase(2);
    // s.insert(2);

    // if(s.find(2) != s.end())
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    // cout << s.size() << endl;

    string str;
    getline(cin, str);
    cout << str << endl;
    string rev ;

    for (int i = str.size()-1; i >= 0; i--)
    {
        rev.push_back(str[i]);
    }
    cout << rev << endl;

    
    return 0;
}