#include <iostream>
using namespace std;
#define Max_Size 20
void merge(int A[], int begin, int mid, int end)
{
    int n1 = mid - begin + 1;
    int n2 = end - mid;
    int left[Max_Size], right[Max_Size];
    for (int i = 0; i < n1; i++)
        left[i] = A[begin + i];
    for (int j = 0; j < n2; j++)
        right[j] = A[mid + 1 + j];
    int i = 0, j = 0, k = begin;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            A[k] = left[i];
            i++;
        }
        else
        {
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        A[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        A[k] = right[j];
        j++;
        k++;
    }
}
void merge_sort(int A[], int begin, int end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    merge_sort(A, begin, mid);
    merge_sort(A, mid + 1, end);
    merge(A, begin, mid, end);
}
int main()
{
    int num;
    int arr[Max_Size];
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
    merge_sort(arr, 0, num - 1);
    cout << "Sorted Array :" << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    return 0;
}