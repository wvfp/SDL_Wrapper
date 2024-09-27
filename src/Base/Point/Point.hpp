#include <Core.hpp>

namespace SDL{
    //类:点
    class Point{
    public:
        //以SDL_Point构造点
        Point(SDL_Point);
        //以点的x,y轴坐标构造点
        Point(int x=0,int y=0);
        operator SDL_Point() const {
            return {_x,_y};
        }
        int x(void)const{
            return _x;
        }
        int y(void)const{
            return _y;
        }
    private:
        int _x,_y;
    };
        
};