#include "calculator.h"
#include <random>
#include <cmath>

// 생성자
Calculator::Calculator() : numPoints(0), points(nullptr) {}

// 소멸자
Calculator::~Calculator() {
    delete[] points;
}

// 점 초기화
void Calculator::initializePoints(int count, int xMin, int xMax, int yMin, int yMax) {
    numPoints = count;
    points = new KPoint[count];

    // 과제3에서 제공해 주신 tip 요소를 활용했음
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distX(xMin, xMax);
    std::uniform_int_distribution<> distY(yMin, yMax);

    for (int i = 0; i < numPoints; ++i) {
        points[i].x = distX(gen);
        points[i].y = distY(gen);
    }
}

// 거리 계산 메서드? 메소드? 메서드라고 부르는 게 맞는 듯
double Calculator::calculateDistance(const KPoint& p1, const KPoint& p2) const {
    return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}

// 거리 최소, 최대 구하는 메서드 (단순 비교나 정렬은 쉬움, early return 적용해 봄)
void Calculator::findMinMaxDistances(KPoint& minPoint1, KPoint& minPoint2, KPoint& maxPoint1, KPoint& maxPoint2, double& minDistance, double& maxDistance) const {
    minDistance = std::numeric_limits<double>::max();
    maxDistance = 0.0;

    // early return 적용
    if (numPoints < 2) return;

    for (int i = 0; i < numPoints; ++i) {
        for (int j = i + 1; j < numPoints; ++j) {
            double dist = calculateDistance(points[i], points[j]);

            if (dist < minDistance) {
                minDistance = dist;
                minPoint1 = points[i];
                minPoint2 = points[j];
            }

            if (dist > maxDistance) {
                maxDistance = dist;
                maxPoint1 = points[i];
                maxPoint2 = points[j];
            }
        }
    }
}
