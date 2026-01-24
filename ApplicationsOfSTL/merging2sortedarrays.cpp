#include <iostream>
#include <vector>
using namespace std;

void sort(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }   
    }
    while(i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while(j < m)
    {
        arr3[k++] = arr2[j++];
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
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10,11};
    int arr3[11];
    sort(arr1,arr2,arr3,5,6);

    print(arr3, 11); 

    return 0;
}