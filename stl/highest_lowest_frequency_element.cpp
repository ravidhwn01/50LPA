#include <iostream>
#include <unordered_map>
using namespace std;


void highest_lowest_frequency_element(int arr[], int n)
{

    int max_count = 0, min_count = n + 1;
    int max_element = -1, min_element = -1;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > max_count)
        {
            max_count = count;
            max_element = arr[i];
        }

        if (count < min_count)
        {
            min_count = count;
            min_element = arr[i];
        }
    }

    cout << "Element with highest frequency: " << max_element << " (Frequency: " << max_count << ")" << endl;
    cout << "Element with lowest frequency: " << min_element << " (Frequency: " << min_count << ")" << endl;
}

void fre(int arr[], int n){

    // using unordered map
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;   // for counting the frequency of each element
    }

    int max_count = 0, min_count = n + 1;
    int max_element = -1, min_element = -1;

    for (auto it : freq)
    {
        if (it.second > max_count)
        {
            max_count = it.second;
            max_element = it.first;
        }

        if (it.second < min_count)
        {
            min_count = it.second;
            min_element = it.first;
        }
    }

    cout << "Element with highest frequency: " << max_element << " (Frequency: " << max_count << ")" << endl;
    cout << "Element with lowest frequency: " << min_element << " (Frequency: " << min_count << ")" << endl;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3,3,3,3,3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    highest_lowest_frequency_element(arr, n);
    fre(arr, n);
    
    return 0;
}