#include<iostream>
#include<climits>
using namespace std;

void sort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0)
        {
            if(arr[j] < temp)
            {
                arr[j] = arr[j + 1];
                
            }
            else break;
            j--;
        }
        arr[j + 1] = temp;

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