#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void altswap(int arr[], int n)
{
    for(int i = 0; i <= n - 2 ; i = i + 2)
    {
        swap(arr[i], arr[i+1]);
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
    altswap(arr ,n);
    printarr(arr ,n);
}