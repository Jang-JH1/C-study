//  값으로 호출 - 호출하는 곳에서 인수를 전달할 때 인수의 값이 매개 변수로 복사
//  참조로 호출 - 원본 인수가 함수에 전달되는 방법. 함수 안에서 매개 변수는 변경하면 원본 인수가 변경됨
//  값으로 전달 - 평소에 하던대로 

#include<iostream>
using namespace std;

/* 참조로 호출 예시*/

void modify(int& x, int& y)
{
    x = x * 2;
    y = y * 3;
}

int main()
{
    int a = 2;
    int b = 3;
    modify(a, b);

    cout << a <<"\n";
    cout << b;

    // a == 4, b == 9가 나옴.
    // &를 안붙이면 a = 2 , b = 3이 나옴.

    return 0;
}

/*
int main()
{
    int a = 100, b = 200;
    cout << a << "\n" << b<<"\n";
    swap(a, b);
    cout << a << "\n" << b;
}

void swap(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
*/
