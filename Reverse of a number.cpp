#include<iostream>

using namespace std;

int main()
{
    int m,r,n,rev=0;
    cout<<"Enter n:";
    cin>>n;
    m=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }

    cout<<"Reverse of "<<m<<" is "<<rev;
    return 0;


}
