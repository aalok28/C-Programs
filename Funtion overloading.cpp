#include<iostream>
#include<conio.h>
using namespace std;

int add(int a,int b)
{

    return a+b;


}

int add(int a,int b,int c)
{

    return a+b+c;

}

float add(float a, float b)
{
    return a+b;
}

int main()
{
    int a=10, b=5;
    float f = 1.2, g=1.3;
    int c = add(a,b);
    int d = add(a,b,c);
    float e = add(f,g);
    cout << "Addition is :" << c << endl;
    cout << "Addition is :" << d << endl;
    cout << "Addition is :" << e << endl;
    getch();
    return 0;
}
