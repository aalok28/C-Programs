#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int u,v,a;
    float speed;
    cout<<"Enter the values of u, v & a: ";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"Speed is: "<<speed;
    getch();




    return 0;
}
