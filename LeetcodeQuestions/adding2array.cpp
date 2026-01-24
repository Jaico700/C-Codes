#include <iostream>
#include <deque>
using namespace std;

void add(int arr1[], int n, int arr2[], int m, deque<int> &v)
{
    int i = n - 1;
    int j = m - 1;
    int sum = 0;
    int carry = 0;
    while(i >= 0 && j >=0)
    {
        sum = arr1[i--] + arr2[j--] + carry; 
        v.push_front(sum % 10);
        carry = sum / 10;
    }
    while(i >= 0)
    {
        sum = arr1[i--] + carry; 
        v.push_front(sum % 10);
        carry = sum / 10;
    }
    while(j >= 0)
    {
        sum = arr2[j--] + carry; 
        v.push_front(sum % 10);
        carry = sum / 10;
    }
    if(carry != 0) v.push_front(carry);
}

void print(deque<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr1[100] = {1,2,3,4,5};
    int arr2[100] = {1,2,3,4,5};
    int n = 5;
    int m = 5;
    deque<int> v;
    add(arr1,n,arr2,m, v);
    print(v);
}