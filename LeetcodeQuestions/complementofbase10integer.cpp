//incomplete


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int check = 1;
    int ans = 0;
    int i = 0;
    int power = 1;
    while(n != 0)
    {
        int bit = n & 1;
        ans = ans + (bit * power);
        n = n >> 1;
        i++;
        power *= 10;
    }
    ans = ~ans;
    cout << ans;
}