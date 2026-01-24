#include<iostream>
using namespace std;

bool palendromecheck(char ch1[], char ch2[], int length)
{
    for(int i = 0; i < length; i++)
    {
        if(ch1[i] != ch2[i]) return 0;
    }
    return 1;
}

void copystr(char ch1[], char ch2[], int length)
{
    for(int i = 0; i < length; i++)
    {
        ch2[i] = ch1[i]; 
    }
}

void reverse(char ch[], int length)
{
    int s = 0;
    int e = length - 1;
    while(s <= e)
    {
        swap(ch[s++],ch[e--]);
    }
}

int getlength(char ch[])
{
    int length = 0;
    while(ch[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char ch[20];
    cin >> ch;
    int length = getlength(ch);
    cout << "Length of char string: " << length << endl;
    char ch2[20];
    copystr(ch, ch2, length);
    reverse(ch,length);
    cout << "Reverse of the provided string: " << ch << endl;
    cout << "Palendromecheck: " << palendromecheck(ch, ch2,length);

}