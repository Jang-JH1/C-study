#include<iostream>
#include<string>
using namespace std;

// Car 클래스 작성

class Car{
    public:
    int speed;
    int gear;
    string color;

    void speedUp()
    {
        speed += 10;
    }

    void speedDown()
    {
        speed -= 10;
    }
};

int main()
{
    Car myCar;
    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "black";

    cout << "현재 속도 : " << myCar.speed << endl;
    myCar.speedUp();
    cout << "현재 속도 : " << myCar.speed << endl;
    myCar.speedDown();
    cout << "현재 속도 : " << myCar.speed << endl;
}