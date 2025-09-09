#include <iostream>
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
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3,3,3,3,3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    highest_lowest_frequency_element(arr, n);
    return 0;
}