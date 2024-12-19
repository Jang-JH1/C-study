#include<iostream>
#include<string>
using namespace std;

class Rectangle{
    public:
    int wid;
    int hei;

    int CalcArea()
    {
        return wid * hei;
    }
};

// 위 클래스를 가지고 하나의 객체를 생성하기

int main()
{
    Rectangle rect;
    rect.wid = 5;
    rect.hei = 8;

    cout << "면적 : " << rect.CalcArea()<<endl;
}