#include <iostream>
using namespace std;
void countFrequencyOfEachElementInTheArray(){
    bool visited[100] = {false};
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int  i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times " << endl;
    }
    
}
int main()
{
    countFrequencyOfEachElementInTheArray();
    return 0;
}