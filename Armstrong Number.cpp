#include<iostream>

using namespace std;

int main()
{
    int n,r,sum=0,m;
    cout<<"Enter n:";
    cin>>n;
    m=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
    {
        cout<<m<<" is an Armstrong number";
    }
    else
    {
        cout<<m<<" is not an Armstrong number";
    }
    return 0;
}
