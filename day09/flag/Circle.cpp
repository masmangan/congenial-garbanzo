#include <iostream>

using namespace std;

#include "Point.h"
#include "Circle.h"

 Circle::Circle(Point vcenter, int vradius) {
    center = vcenter;
    radius = vradius;
 }

 // TODO: <circle cx="200" cy="140" r="70" fill="blue"></circle>
 void Circle::draw() const {
   cout << "<circle cx=";
 }

 // TODO: {circle x=200 y=140 radius=70 fill=blue}
 void Circle::show() const {
   cout << "{x=";
 }
