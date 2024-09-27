//SDL Header
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

//C++ STD Hreader
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <functional>
#include <algorithm>

namespace SDL{
    void InitSDL(void);
    void QuitSDl(void);
    class Color;
    class Font;
    class Image;
    class KeyBoard;
    class Mixer;
    class Renderer;
    class Surface;
    class TTF;
    class Video;
    class Window;
    class Point;
};