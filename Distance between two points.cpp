#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main()
{

    int x1,x2,y1,y2;
    float distance;
    cout<<"Enter the values of x1 , x2 , y1 & y2:";
    cin>>x1>>x2>>y1>>y2;
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"Distance is: "<<distance;
    getch();



    return 0;
}
