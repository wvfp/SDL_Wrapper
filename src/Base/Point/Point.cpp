#include "Point.hpp"

namespace SDL{
    Point::Point(int x,int y):_x(x),_y(y){
    }
    Point::Point(SDL_Point p):_x(p.x),_y(p.y){
    }
};