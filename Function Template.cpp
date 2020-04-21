#include<iostream>
#include<conio.h>
using namespace std;

template <class T>
T maxim(T a,T b)
{
    return a>b?a:b;
}

int main()
{
    cout<<maxim(10,20)<<endl;
    cout<<maxim(1.2,3.4)<<endl;
    cout<<maxim(3.6f,5.9f)<<endl;
    getch();
    return 0;
}
