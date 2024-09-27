#include "Color.hpp"

namespace SDL{
    //颜色的构造函数 默认为白色
    Color::Color(unsigned char r , unsigned char g , unsigned char b ,unsigned char a):
    _r(r),_g(g),_b(b),_a(a){}
    // 以SDL_Color 构造Color
    Color::Color(SDL_Color color):_r(color.r),_g(color.g),_b(color.b),_a(color.a){

    }
    // 重新设置颜色
    void Color::reSet(unsigned char r , unsigned char g , unsigned char b ,unsigned char a){
        _r = r;
        _g = g;
        _b = b;
        _a = a;
    }

    // 类型转换为SDL_Color
};