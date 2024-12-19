// 생성자 예시
#include <iostream>
#include<string>
using namespace std;

class Rectangle
{
public:
    int wid;
    int hei;

    Rectangle();
    Rectangle(int len);
    Rectangle(int w, int h);
    bool isSquare();
};

Rectangle::Rectangle()
{
    wid = hei = 1;
}

Rectangle::Rectangle(int w, int h)
{
    wid = w;
    hei = h;
}

Rectangle::Rectangle(int l)
{
    wid = hei = l;
}

bool Rectangle::isSquare()
{
    if(wid == hei) return true; // 정사각형이면 true
    else return false;          // 정사각형이 아니면 false
}

int main()
{
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다"<<endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다"<<endl;
    if(rect3.isSquare()) cout << "rect3은 정사각형이다"<<endl;
}