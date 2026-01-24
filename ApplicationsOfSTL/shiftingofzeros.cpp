#include <iostream>
using namespace std;


void sort(int arr[], int n)
{
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[j] != 0)
        {
            swap(arr[i], arr[j++]);
        }
    }
}

void print(int arr3[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr[] = {2,0,1,3,0,0,0};
    sort(arr, 7);
    print(arr, 7);

}