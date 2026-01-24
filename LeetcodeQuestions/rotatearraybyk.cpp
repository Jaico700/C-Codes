#include <iostream>
using namespace std;

void rotate(int arr1[], int n, int k, int arr2[])
{
    for(int i = 0; i < n; i++)
    {
        arr2[i] = arr1[(i + k) % n];
    }
}

void print(int arr[], int size)
{
    cout << "Entered elements of array: " ;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr1[100] = {11,12,13,14,15};
    int n = 5;
    int k = 2;
    int arr2[100];
    rotate(arr1,n,k,arr2);
    print(arr2,n);
}