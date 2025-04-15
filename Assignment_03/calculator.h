#ifndef CULATOR_H
#define CULATOR_H

struct KPoint {
    int x, y;
};

class Calculator {
private:
    int numPoints;
    KPoint* points;

public:
    Calculator();
    ~Calculator();

    void initializePoints(int count, int xMin, int xMax, int yMin, int yMax);
    double calculateDistance(const KPoint& p1, const KPoint& p2) const;
    void findMinMaxDistances(KPoint& minPoint1, KPoint& minPoint2, KPoint& maxPoint1, KPoint& maxPoint2, double& minDistance, double& maxDistance) const;
};

#endif
