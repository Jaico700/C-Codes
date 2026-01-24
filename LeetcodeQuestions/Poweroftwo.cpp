#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int comp = 0;
    int ans = 0;
    for(int i = 0; i <= 30; i++)
    {
        comp = pow(2,i);
        if(comp == n)
        {
            ans = 1;
            break;
        }
    }
    cout << ans;
}