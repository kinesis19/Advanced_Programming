#include <iostream>
#include <cstdlib> // atoi()를 사용하기 위한 라이브러리
#include <string>

using namespace std;

int CalculateExpression(int num1, int num2, char operatorSign){
    int result;

    switch (operatorSign) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "0으로 나눌 수 없음." << endl;
            return 0;
        }
    case '%':
        if (num2 != 0) {
            return num1 % num2;
        } else {
            cout << "Error: 0으로 나눌 수 없음." << endl;
            return 0;
        }
    default:
        cout << "Error: 지원하지 않는 연산자임." << endl;
        return 0;
    }
}

int main()
{

    while(true) {
        string inputExpression;

        cout << "? ";
        getline(cin, inputExpression);

        if (inputExpression == "quit") {
            break;
        }

        int firstSpacePos = -1;
        for(int i = 0; i < inputExpression.length(); i++){
            if (inputExpression[i] == ' ') {
                firstSpacePos = i;
                break;
            }
        }

        if (firstSpacePos == -1) {
            cout << "Error: 입력 형식이 올바르지 않음 (공백 없음)." << endl;
            continue;
        }

        string num1Str = inputExpression.substr(0, firstSpacePos);
        int num1 = stoi(num1Str);

        if (firstSpacePos + 1 >= inputExpression.length()) {
            cout << "Error: 입력 형식이 올바르지 않음 (연산자 없음)." << endl;
            continue;
        }

        char operatorSign = inputExpression[firstSpacePos + 1];

        int secondSpacePos = -1;
        for (int i = firstSpacePos + 2; i < inputExpression.length(); i++) {
            if (inputExpression[i] == ' ') {
                secondSpacePos = i;
                break;
            }
        }

        string num2Str;
        if (secondSpacePos != -1) {
            num2Str = inputExpression.substr(secondSpacePos + 1);
        } else {
            num2Str = inputExpression.substr(firstSpacePos + 3);
        }

        if (inputExpression[firstSpacePos + 2] == ' ' || secondSpacePos != -1) {
            int num2 = stoi(num2Str);
            cout << num1 << " " << operatorSign << " " << num2 << " = " << CalculateExpression(num1, num2, operatorSign) << endl;
        } else {
            cout << "Error: 입력 형식이 올바르지 않음." << endl;
        }
    }

    return 0;
}


