#include<iostream>
#include<string>
using namespace std;

void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    cout << a << " " << b << endl;
}

int main()
{
    int a = 1; int b = 2;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << a << " " << b << endl;
}

// 이렇게 하면 1 , 2 // 함수문에서만 2 , 1로 변경됨
// void swap(int &a, int &b) 참조에 의한 호출로 할 시 2, 1로 변경된 상태로 지속됨.