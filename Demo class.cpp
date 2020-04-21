#include<iostream>
#include<conio.h>
using namespace std;

class Reactangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Reactangle r1;
    r1.length = 5;
    r1.breadth = 10;
    cout<<"Area is : "<<r1.area()<<endl;
    cout<<"Perimeter is : "<<r1.perimeter()<<endl;
    getch();
    return 0;
}
