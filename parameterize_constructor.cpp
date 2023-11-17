#include <iostream>
#include <math.h>
using namespace std;

class Points
{
private:
    int x, y, dis = 0;
    friend 

public:
    Points(int x, int y);

    Points distancePoints(Points o1, Points o2);
};

Points Points :: distancePoints(Points o1, Points o2)
{
    distance = sqrt(((o2.x * o2.x) - (o1.x * o1.x) + (o2.y * o2.y) - (o1.y * o1.y)));
    cout << "The distance between the points is: " << distance << endl;
}

Points::Points(int x, int y)
{
    x = x;
    y = y;
}

int main()
{
    Points p1(2, 3), p2(4, 5);
    Points p3(p1, p2);
    
    return 0;
}
