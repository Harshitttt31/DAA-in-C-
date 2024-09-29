#include <iostream>
using namespace std;
void selction_sort(int A[],int n){
    int smallest;
    for (int i = 0; i < n; i++)
    {
        smallest=i;
        for (int k = i+1; k < n; k++)
        {
            if (A[k]<A[smallest])
                smallest=k;
        }
        if (smallest!=i)
        {
            int temp;
            temp=A[i];
            A[i]=A[smallest];
            A[smallest]=temp;
        }
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
    selction_sort(arr, num);
    cout << "Sorted Array :" << endl;
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    return 0;
}