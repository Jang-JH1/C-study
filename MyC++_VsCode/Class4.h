#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
    int speed;
    int gear;
    
    public:
    int getSpeed();
    void SetSpeed(int s);
};