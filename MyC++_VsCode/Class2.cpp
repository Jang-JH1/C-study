// 멤버 함수 중복 정의

#include<iostream>
#include<string>
using namespace std;

class PrintData
{
public:
    void print(int a) { cout << a << endl; }
    void pirnt(double a) { cout << a << endl; }
    void print(string a = "No Data") { cout << a << endl; } // string이 없을 경우 No Data를 출력하겠다. 선언(초기값)
};

int main()
{
    PrintData pd;

    pd.pirnt(100);
    pd.print(0.24);
    pd.print("Hello");
    pd.print();
}
