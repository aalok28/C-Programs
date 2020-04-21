#include <iostream>
#include<conio.h>
using namespace std;

int maxim(int x, int y, int z)
{
    if (x>y && x>z)
        return x;
    else if (y>z)
        return y;
    else
        return z;
}
int main()
{
    int a=10,b=16,c=25,r;
    r=maxim(a,b,c);
    cout<< "Maximum is :" << r << endl;
    getch();
    return 0;
}
