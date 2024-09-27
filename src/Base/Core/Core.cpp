#include "Core.hpp"
#include <SDL_image.h>

namespace SDL{
    void InitSDl(void){
        if(!SDL_Init(SDL_INIT_EVERYTHING)){
            std::cerr<<"Error:"<<"Can't initialize SDL.(SDL_Wrapper::Init())"<<std::endl;
        }
        IMG_Init(IMG_INIT_JPG|IMG_INIT_PNG|IMG_INIT_WEBP);
        if(TTF_Init()!=0){
            std::cerr<<"Error:"<<"Can't initialize TTF.(SDL_Wrapper::Init())"<<std::endl;
        }
    }

    void QuitSDL(void){
        SDL_Quit();
    }

};