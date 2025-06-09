#include <iostream>
using namespace std;
// C언어 방식으로 컴파일된 get() 함수를 사용하겠다고 C++ 컴파일러에게 알려줌.
extern "C" int get();

int get()
{
    int c;
    printf("Enter a Number>> ");
    scanf("%d", &c);
    return c;
}

int main()
{
    // get() 함수를 두 번 호출해서 숫자 두 개를 입력받습니다.
    cout << "첫 번째 숫자를 입력합니다." << endl;
    int a = get();

    cout << "두 번째 숫자를 입력합니다." << endl;
    int b = get();

    int result = a * b;
    cout << "입력받은 두 수의 곱은 " << result << " 입니다." << endl;

    return 0;
}