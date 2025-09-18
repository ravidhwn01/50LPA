#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n-1; i++)
    {

        int min = i;
        for (int j = i + 1; j <= n-1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

void bubble_sort(int arr[],int n){

    // what if array is already sorted
    bool swapped;
    for (int i = 0; i < n-1; i++)
    {
        swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void merge_sort(){
    
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11,45,76,34,23,54};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}