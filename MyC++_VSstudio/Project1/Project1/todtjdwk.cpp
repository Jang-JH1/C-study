// ���� ������

#include <iostream>
#include<string>
using namespace std;

class Circle {
public:
    int rad;
    Circle();       // ���� ������
    Circle(int r);  // Ÿ�� ������
    double getArea();
};

Circle::Circle() : Circle(1) {} // ���� ������

Circle::Circle(int r)          // Ÿ�� ������
{
    rad = r;
    cout << "������ : " << rad << " �� ����" << endl;
}

double Circle::getArea()
{
    return 3.14 * rad * rad;
}

int main()
{
    Circle myCircle(30);
    double area = myCircle.getArea();
    cout << "�� �� : " << area << endl;
}