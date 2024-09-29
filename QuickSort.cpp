#include <iostream>
using namespace std;
int partition(int A[], int begin, int end)
{
    int pivot = A[end];
    int i = begin - 1;
    for (int j = begin; j < end - 1; j++)
    {
        if (A[j] <= pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[end], A[i + 1]);
    return i + 1;
}
void quick_sort(int A[], int begin, int end)
{
    if (begin < end)
    {
        int pivot = partition(A, begin, end);
        quick_sort(A, begin, pivot - 1);
        quick_sort(A, pivot + 1, end);
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
    quick_sort(arr, 0, num - 1);
    cout << "Sorted Array :" << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    return 0;
}