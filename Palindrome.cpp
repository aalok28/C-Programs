#include<iostream>

using namespace std;

int main()
{
    int m,n,r,rev=0;
    cout<<"Enter n:";
    cin>>n;
    m=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m)
    {
        cout<<"The number is palindrome";
    }
    else
    {
        cout<<"The number is not palindrome";
    }
    return 0;
}
