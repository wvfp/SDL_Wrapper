#include <Core.hpp>
#include <Point.hpp>
#include <memory>

namespace SDL{
    constexpr unsigned int DEFAULT_WINDOW_HEIGHET = 480; 
    constexpr unsigned int DEFAULT_WINDOW_WIDTH   = 640;
    constexpr unsigned int DEFAULT_WINDOW_POS_X = 500; 
    constexpr unsigned int DEFAULT_WINDOW_POS_Y   = 500; 
    extern Point DEFAULT_WINDOW_POS; 
    //窗口类
    class Window{
    public:
        //根据位置和长宽来构造Windwo
        Window(Point& pos = DEFAULT_WINDOW_POS ,unsigned int width=DEFAULT_WINDOW_WIDTH,unsigned int height=DEFAULT_WINDOW_HEIGHET);
        //根据位置和长宽来构造Windwo
        Window(Uint32 x = DEFAULT_WINDOW_POS_X,Uint32 y = DEFAULT_WINDOW_POS_Y ,unsigned int width=DEFAULT_WINDOW_WIDTH,unsigned int height=DEFAULT_WINDOW_HEIGHET);
    private:
        Uint32 Window_Width;
        Uint32 Window_Height;
        Point Window_Pos;
        std::shared_ptr<SDL_Window> _window;
    };
};