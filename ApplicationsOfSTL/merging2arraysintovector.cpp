#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    vector<int> v;
    for(int i = 0; i < 5; i++)
    {
        v.push_back(arr1[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        v.push_back(arr2[i]);
    }

    print(v); 

    return 0;
}