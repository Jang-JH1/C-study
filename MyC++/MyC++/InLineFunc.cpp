// 인라인 함수
// 함수 이름 앞에 inline이 붙으면 컴파일러는 함수를 생성하지 않고 함수의 코드를 호출한 곳에 직접 집어넣는다.

#include<iostream>
using namespace std;

inline double square(double i)
{
    return i*i;
}

int main()
{
    double n = 3;
    n = square(n);

    cout << n;
    return 0;
}

// 함수 호출의 오버헤드가 많으면 인라인 함수로 하는 것이 좋다.
// 예시

/* 
int odd(int a)
{
    return (a%2);
}

int main()
{
    int sum = 0;
    for(int a = 0; a<10000; a++) // 1에서 10000까지의 홀수의 합 계산
    {
        if(odd(a))
        {
            sum += 1;
        }
    }
    // odd() 함수의 코드를 계산하는 시간보다 odd()함수 호출에 의한 오버헤드가 더 클 경우
    //inline을 사용할 경우 오버헤드를 줄일 수 있다.
}
*/

/* 
    인라인 함수
     - 컴파일러에 의해 이루어짐
     - 매크로와 유사
     - 코드 확장 후 인라인 함수는 사라짐

    인라인 함수의 목적
     - c++ 프로그램의 실행 속도 향상
     - 자주 호출되는 짧은 코드의 함수 호출에 대한 시간 소모를 줄임

    인라인 함수 제약 사항
     - recursion, 긴 함수, static 변수, 반복문, switch 문, goto문 등 가진 함수는 수용하지 않음.
 */