/*
*Author:-Pukar Giri
*Created On:-17Th January 2019 at 13:01
*File Name:-Bot.h
*Project Name:-untitled1
*Licence:- MIT
*Email:-crazzy.lx75@gmail.com
*/

#ifndef UNTITLED1_BOT_H
#define UNTITLED1_BOT_H
#include <SDL2/SDL.h>



class Bot
    {
        int gravity=2;
        SDL_Renderer *renderer;
    public:
        int YPosition=200;
        Bot()=default;
        int velocity=0;
        explicit Bot(SDL_Renderer *renderer1);
        void update();
        void draw();
        void jump();
    };


#endif //UNTITLED1_BOT_H
