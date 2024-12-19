// 위임 생성자

#include <iostream>
#include<string>
using namespace std;

class Circle{
    public:
    int rad;
    Circle();       // 위임 생성자
    Circle(int r);  // 타겟 생성자
    double getArea();
};

Circle::Circle() : Circle(1){} // 위임 생성자

Circle::Circle(int r)          // 타겟 생성자
{
    rad = r;
    cout<<"반지름 : " << rad << " 원 생성"<<endl;
}

double Circle::getArea()
{ 
    return 3.14 * rad * rad;
}

int main()
{
    Circle yourCircle;
    double uCricle = yourCircle.getArea();
    cout << "니 원 : " << uCricle<<endl;

    Circle myCircle(30);
    double area = myCircle.getArea();
    cout << "내 원 : " << area<<endl;
}