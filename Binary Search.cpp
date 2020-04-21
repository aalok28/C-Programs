#include<iostream>

using namespace std;

int main()
{

    int l=0,h=9,mid,key,n=10,i,A[10];
    cout<<"Enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the key:";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Key is found at index "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"Key is not found";
    return 0;
}
