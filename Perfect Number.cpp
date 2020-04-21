#include<iostream>


using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter n:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(2*n==sum)
    {
        cout<<n<<" is a Perfect Number.";
    }
    else
    {
        cout<<n<<" not a Perfect Number.";
    }
    return 0;
}
