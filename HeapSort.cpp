#include <iostream>
using namespace std;
void max_heapify(int A[], int i, int n)
{
    int left, right, largest;
    left = 2 * i;
    right = 2 * i + 1;
    if (left <= n && A[left] > A[i])
        largest = left;
    else if (right <= n && A[right] > A[i])
        largest = right;
    else
        largest = i;
    if (largest != i)
    {
        swap(A[i], A[largest]);
        max_heapify(A, largest, n);
    }
}
void build_heap(int A[], int n)
{
    for (int i = (n / 2); i <= 0; i++)
    {
        max_heapify(A, i, n);
    }
}
void heap_sort(int A[], int n)
{
    build_heap(A, n);
    for (int i = n; i > 0; i++)
    {
        swap(A[0], A[i]);
        n--;
        max_heapify(A, 1, n);
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
    heap_sort(arr, num);
    cout << "Sorted Array :" << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    return 0;
}