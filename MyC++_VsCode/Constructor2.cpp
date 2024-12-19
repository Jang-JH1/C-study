// 생성자 예시

#include <iostream>
#include<string>
using namespace std;

class Animal
{
public:
    string sound;
    int mari;

    Animal();
    Animal(int a);
    
    void setSound(string _sound);
    string getSound();
};

Animal::Animal()
{
    mari = 1;
    cout << "동물 " << mari << " 마리" << endl;
}

Animal::Animal(int a)
{
    mari = a;
    cout << "동물 " << mari << " 마리" << endl;
}

void Animal::setSound(string _sound)
{
    sound = _sound;
}

string Animal::getSound()
{
    string abs;

    if (!sound.empty())
        abs = sound;

    cout << abs;
    return abs;
}

int main()
{
    Animal cat;

    Animal dog(5);
    dog.setSound("멍");
    dog.getSound();
}