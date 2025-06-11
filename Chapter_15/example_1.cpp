#include <iostream>
#include <functional>

using namespace std;

template<class T>
int MinValue(const int npA[], int nNum, T fun)
{
    // 1. 첫 번째 원소를 'fun'으로 계산한 값을 초기 최소값으로 설정
    int nMin = fun(npA[0]); 

    // 2. 배열의 모든 원소를 순회
    for(int i=0; i<nNum; i++)
    {
        // 3. 현재 원소를 'fun'으로 계산한 값이 기존 최소값보다 작으면
        if(fun(npA[i]) < nMin)
        {
            // 4. 최소값을 갱신
            nMin = fun(npA[i]);
        }
    }
    return nMin; // 5. 최종적으로 찾아낸 최소값을 반환
}

int main() {
    int npArray[5] = {7, -5, 9, -2, 3};

    cout << MinValue(npArray, 5, [](int n) {return n * n;}) << endl;
    cout << MinValue(npArray, 5, [](int n) {return n * (n-5); }) << endl;
}