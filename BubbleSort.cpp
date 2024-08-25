#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[40];
    int n;
    cout << "Enter the no of elements in array" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int j = 0; j < n; j++)
        cin >> arr[j];
    bubblesort(arr, n);
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}