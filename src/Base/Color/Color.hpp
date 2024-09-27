#include <Core.hpp>

namespace SDL{
    //颜色类 
    class Color{
    public:
        //颜色的构造函数 默认为白色
        Color(unsigned char r=0xff,unsigned char g=0xff,unsigned char b=0xff,unsigned char a=0xff);
        //以SDL_Color 构造Color
        Color(SDL_Color);
        //重新设置颜色
        void reSet(unsigned char r=0xff,unsigned char g=0xff,unsigned char b=0xff,unsigned char a=0xff);
        // 获取颜色通道 r (红 red) 的值
        unsigned char r(void)
        {
            return _r;
        };
        // 获取颜色通道 g (绿 green) 的值
        unsigned char g(void)
        {
            return _g;
        };
        // 获取颜色通道 b (蓝 blue) 的值
        unsigned char b(void)
        {
            return _b;
        };
        // 获取颜色通道 a (透明 Alpha) 的值
        unsigned char a(void)
        {
            return _a;
        };
        // 类型转换为SDL_Color
        operator SDL_Color() const
        {
            return SDL_Color({_r, _g, _b, _a});
    };

    private:
        unsigned char _r,_g,_b,_a;
    };
    Color red(255,0,0);
    Color green(0,255,0);
    Color blue(0,0,255);
    
};





