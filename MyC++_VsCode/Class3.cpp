// 클래스의 인터페이스와 구현의 분리
// 복잡한 클래스의 경우 멤버 함수를 클래스 외부에서 정의
#include <iostream>
#include <string>
using namespace std;

// 클래스 선언부
class Circle
{
public:
    int rad;

    double calArea();
};

// 리턴타입 / 클래스 이름 / 범위 지정 연산자 // 멤버 함수명과 매개변수
double Circle::calArea()
{
    return 3.14 * rad * rad;
}

int main()
{
    Circle donut;
    donut.rad = 10;
    cout << donut.calArea() << endl;
    return 0;
}