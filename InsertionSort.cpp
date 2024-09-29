#include <iostream>
using namespace std;
void insertion_sort(int A[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
int main()
{
    int num;
    int arr[20];
    cout << "Enter the number of elements in the array : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the element of the array : ";
        cin >> arr[i];
    }
    cout << "Unsorted Array :" << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;
    insertion_sort(arr, num);
    cout << "Sorted Array :" << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    return 0;
}