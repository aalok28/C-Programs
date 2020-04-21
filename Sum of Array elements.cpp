#include<iostream>

using namespace std;

int main()
{
    int A[6]={0,1,2,3,4,7};
    int sum=0;

    for(int i=0;i<6;i++)
    {
        sum=sum+A[i];
    }
    cout<<"Sum is "<<sum;
    return 0;
}
