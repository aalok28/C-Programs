#include<iostream>

using namespace std;

int main()
{
    int A[10],n=5,key;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the key:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Key is found at index "<<i;
            return 0;
        }
    }
    cout<<"Key is not found";
    return 0;
}
