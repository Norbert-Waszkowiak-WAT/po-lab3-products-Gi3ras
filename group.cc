#include "group.h"
#include <sstream>
#include <iomanip>
 
Group::Group() {}
 
Group::Group(const Group &other)
    : lines(other.lines), triangles(other.triangles), quadrilaterals(other.quadrilaterals) {}
 
void Group::add(Line l) {
    lines.push_back(l);
}
 
void Group::add(Triangle t) {
    triangles.push_back(t);
}
 
void Group::add(Quadrilateral q) {
    quadrilaterals.push_back(q);
}
 
void Group::removeLine(Line l) {
    for (auto it = lines.begin(); it != lines.end(); ++it) {
        if (it->equals(l)) {
            lines.erase(it);
            break;
        }
    }
}
 
void Group::removeTriangle(Triangle t) {
    for (auto it = triangles.begin(); it != triangles.end(); ++it) {
        if (it->equals(t)) {
            triangles.erase(it);
            break;
        }
    }
}
 
void Group::removeQuadrilateral(Quadrilateral q) {
    for (auto it = quadrilaterals.begin(); it != quadrilaterals.end(); ++it) {
        if (it->equals(q)) {
            quadrilaterals.erase(it);
            break;
        }
    }
}
 
bool Group::equals(Group &other) {
    if (lines.size() != other.lines.size() ||
        triangles.size() != other.triangles.size() ||
        quadrilaterals.size() != other.quadrilaterals.size()) {
        return false;
    }
   
    for (size_t i = 0; i < lines.size(); ++i) {
        if (!lines[i].equals(other.lines[i])) {
            return false;
        }
    }
   
    for (size_t i = 0; i < triangles.size(); ++i) {
        if (!triangles[i].equals(other.triangles[i])) {
            return false;
        }
    }
   
    for (size_t i = 0; i < quadrilaterals.size(); ++i) {
        if (!quadrilaterals[i].equals(other.quadrilaterals[i])) {
            return false;
        }
    }
   
    return true;
}
 
double Group::getSurface() {
    double surface = 0.0;
   
    for (auto &t : triangles) {
        surface += t.getSurface();
    }
   
    for (auto &q : quadrilaterals) {
        surface += q.getSurface();
    }
   
    return surface;
}
 
void Group::flip() {
    for (auto &l : lines) {
        l.flip();
    }
   
    for (auto &t : triangles) {
        t.flip();
    }
   
    for (auto &q : quadrilaterals) {
        q.flip();
    }
}
 
void Group::move(double x, double y) {
    for (auto &l : lines) {
        l.move(x, y);
    }
   
    for (auto &t : triangles) {
        t.move(x, y);
    }
   
    for (auto &q : quadrilaterals) {
        q.move(x, y);
    }
}
 
std::string Group::toString() {
    std::ostringstream oss;
    oss << "Group(";
   
    for (auto &l : lines) {
        oss << l.toString() << ", ";
    }
   
    for (auto &t : triangles) {
        oss << t.toString() << ", ";
    }
   
    for (auto &q : quadrilaterals) {
        oss << q.toString() << ", ";
    }
   
    oss << ")";
    return oss.str();
}