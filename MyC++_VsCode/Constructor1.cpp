/*
    생성자
    - 객체가 생성되는 시점에 자동으로 호출되는 멤버 함수
    - 클래스 이름과 동일한 멤버 함수 

    생성자의 목적
    - 객체가 생성될 때 겍체가 필요한 초기화를 위해
    - 생성자는 리턴타입 선언 x
    - 반드시 클래스 이름과 동일
    - 객체 생성 시 오직 한 번만 호출
    - 생성자는 중복 가능
    - 생성자가 선언되어 있지 않으면 기본 생성자 자동으로 생성

    생성자는 반드시 있어야함.
    클래스에 생성자가 하나도 선언되지 않은 경우 컴파일러가 대신 기본 생성자 삽입.(디폴트 생성자)
    생성자가 선언되어 있으면 컴파일러는 기본 생성자를 생성하지 않음.
 */

#include <iostream>
using namespace std;

class Time
{
public:
    int hour;
    int min;

    // 기본 생성자
    // Time()
    // {
    //     hour = 0;
    //     min = 0;
    // } 

    // // 생성자의 중복 정의
    // Time(int h, int m)
    // {
    //     hour = h;
    //     min = m;
    // }

    Time(int h = 0, int m = 0) // 디폴트 생성자 12~23 라인을 합쳐서 이렇게 작성 가능
    {
        hour = h;
        min = m;
    }

    void print()
    {
        cout << hour << " : " << min<<endl;
    }

};

int main()
{
    Time a;
    a.print();

    Time b(5,10);
    b.print();

    Time c{10, 20};
    c.print();
}