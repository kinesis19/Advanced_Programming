#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // std::remove_if 를 사용하지 않으므로, 수동으로 구현합니다.

// Circle 클래스 정의 (이미지 내용과 동일)
class Circle {
private:
    std::string _stName;
    int _nRadius;

public:
    // 생성자
    Circle(int radius, std::string name) {
        _nRadius = radius;
        _stName = name;
    }

    // 원의 넓이를 반환하는 함수
    double Area() {
        return 3.14 * _nRadius * _nRadius;
    }

    // 원의 이름을 반환하는 함수
    std::string Name() {
        return _stName;
    }

    // 반지름을 반환하는 함수 (삭제 로직에서 필요할 수 있음)
    int getRadius() const {
        return _nRadius;
    }
};

// Circle 객체를 관리하는 클래스
class CircleManager {
public:
    std::vector<Circle> circles; // Circle 객체를 저장할 vector

    // Circle 객체 추가 함수
    void addCircle(int radius, std::string name) {
        circles.push_back(Circle(radius, name));
        std::cout << "'" << name << "' 원이 추가되었습니다." << std::endl;
    }

    // 이름으로 Circle 객체 삭제 함수 (erase 사용 안 함)
    void removeCircle(std::string name) {
        std::vector<Circle> tempVector; // 삭제되지 않을 원들을 임시로 담을 vector
        bool removed = false;

        // 기존 vector를 순회하면서 삭제할 이름이 아닌 Circle 객체만 tempVector에 추가
        for (size_t i = 0; i < circles.size(); ++i) {
            if (circles[i].Name() != name) {
                tempVector.push_back(circles[i]);
            } else {
                removed = true; // 하나라도 삭제 대상이 있었음을 표시
            }
        }

        if (removed) {
            circles = tempVector; // 원래 vector를 tempVector로 교체
            std::cout << "'" << name << "' 이름을 가진 모든 원이 삭제되었습니다." << std::endl;
        } else {
            std::cout << "'" << name << "' 이름을 가진 원을 찾을 수 없습니다." << std::endl;
        }
    }

    // 모든 Circle 객체 정보 출력 함수
    void printCircles() {
        if (circles.empty()) {
            std::cout << "저장된 원이 없습니다." << std::endl;
            return;
        }
        std::cout << "\n--- 현재 원 목록 ---" << std::endl;
        for (size_t i = 0; i < circles.size(); ++i) {
            std::cout << "이름: " << circles[i].Name()
                << ", 반지름: " << circles[i].getRadius()
                << ", 넓이: " << circles[i].Area() << std::endl;
        }
        std::cout << "--------------------" << std::endl;
    }
};

int main() {
    CircleManager manager;
    int choice;
    std::string name;
    int radius;

    while (true) {
        std::cout << "\n===== 원 관리 프로그램 =====" << std::endl;
        std::cout << "1. 원 추가" << std::endl;
        std::cout << "2. 원 삭제" << std::endl;
        std::cout << "3. 모든 원 보기" << std::endl;
        std::cout << "4. 종료" << std::endl;
        std::cout << "선택: ";
        std::cin >> choice;

        if (std::cin.fail()) { // 입력이 숫자가 아닐 경우 예외 처리
            std::cin.clear(); // 오류 플래그 초기화
            std::cin.ignore(10000, '\n'); // 입력 버퍼 비우기
            std::cout << "잘못된 입력입니다. 숫자를 입력해주세요." << std::endl;
            continue;
        }
        std::cin.ignore(10000, '\n'); // 엔터키 제거

        switch (choice) {
        case 1:
            std::cout << "추가할 원의 이름을 입력하세요: ";
            std::getline(std::cin, name);
            std::cout << "추가할 원의 반지름을 입력하세요: ";
            std::cin >> radius;
            if (std::cin.fail() || radius <= 0) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "잘못된 반지름 값입니다. 양의 정수를 입력해주세요." << std::endl;
            } else {
                std::cin.ignore(10000, '\n'); // 엔터키 제거
                manager.addCircle(radius, name);
            }
            break;
        case 2:
            std::cout << "삭제할 원의 이름을 입력하세요: ";
            std::getline(std::cin, name);
            manager.removeCircle(name);
            break;
        case 3:
            manager.printCircles();
            break;
        case 4:
            std::cout << "프로그램을 종료합니다." << std::endl;
            return 0;
        default:
            std::cout << "잘못된 선택입니다. 다시 시도해주세요." << std::endl;
        }
    }

    return 0;
}
