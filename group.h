#ifndef GROUP
#define GROUP
#include "line.h"
#include "triangle.h"
#include "quadrilateral.h"
#include <vector>
#include <string>
 
class Group {
    private:
        std::vector<Line> lines;
        std::vector<Triangle> triangles;
        std::vector<Quadrilateral> quadrilaterals;
    public:
        Group();
        Group(const Group &other);
        void add(Line l);
        void add(Triangle t);
        void add(Quadrilateral q);
        void removeLine(Line l);
        void removeTriangle(Triangle t);
        void removeQuadrilateral(Quadrilateral q);
        bool equals(Group &other);
        double getSurface();
        void flip();
        void move(double x, double y);
        std::string toString();
};
#endif