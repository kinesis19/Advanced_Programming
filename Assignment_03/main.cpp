#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    int numPoints, xMin, xMax, yMin, yMax;

    cout << "Input the number of points: ";
    cin >> numPoints;

    cout << "Input the range for x coordinates (min max): ";
    cin >> xMin >> xMax;

    cout << "Input the range for y coordinates (min max): ";
    cin >> yMin >> yMax;

    Calculator calculator; // 객체 생성함
    calculator.initializePoints(numPoints, xMin, xMax, yMin, yMax); // 초기화함

    KPoint minPoint1, minPoint2, maxPoint1, maxPoint2;
    double minDistance, maxDistance;

    calculator.findMinMaxDistances(minPoint1, minPoint2, maxPoint1, maxPoint2, minDistance, maxDistance);

    // 결과 출력함
    cout << "Minimum distance: " << minDistance << ", Points: (" << minPoint1.x << ", " << minPoint1.y << ") and (" << minPoint2.x << ", " << minPoint2.y << ")" << endl;
    cout << "Maximum distance: " << maxDistance << ", Points: (" << maxPoint1.x << ", " << maxPoint1.y << ") and (" << maxPoint2.x << ", " << maxPoint2.y << ")" << endl;

    return 0;
}
