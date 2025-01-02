#include<iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= n - 1; j++) // Start j from i+1
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr; // Free the memory
    return 0;
}
