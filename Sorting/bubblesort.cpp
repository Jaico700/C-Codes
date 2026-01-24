#include <iostream>
#include <climits>
using namespace std;

void sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for(int j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) break;

    }
}

void printarr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void arrin(int arr[] , int size)
{
    cout << "Elements of array: " ;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{   int n;
    cout << "Length of array: " ;
    cin >> n ; 
    int arr[n];
    arrin(arr , n);
    sort(arr, n);
    printarr(arr, n);
}