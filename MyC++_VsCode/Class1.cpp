#include<iostream>
#include<string>
using namespace std;

class Circle{
    public:
    int rad;
    string color;

    double calArea()
    {
        return 3.14 * rad * rad;
    }
};

int main()
{
    Circle cc;

    cc.rad = 100;
    cc.color = "blue";

    cout<<"원1의 면적 : " << cc.calArea() << endl;

    Circle cc2;
    cc2.rad = 200;
    cc2.color = "red";

    cout<<"원2의 면적 : " << cc2.calArea() << endl;
}