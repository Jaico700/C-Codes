#include<iostream>
using namespace std;

int findunique(int arr[], int n)
{
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
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
    int unique = findunique(arr ,n);
    cout << unique;
}