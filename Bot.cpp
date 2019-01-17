/*
*Author:-Pukar Giri
*Created On:-17Th January 2019 at 13:01
*File Name:-Bot.cpp
*Project Name:-untitled1
*Licence:- MIT
*Email:-crazzy.lx75@gmail.com
*/
#include<iostream>
#include "Bot.h"
Bot::Bot(SDL_Renderer * renderer1):
        renderer{renderer1}
    {
//        renderer=renderer1;
    }
void Bot::update()
    {
        velocity=velocity-gravity;
        YPosition=YPosition+velocity;
        if (YPosition<50)
        {
            YPosition=50;
        }
    }
void Bot::draw()
    {
    SDL_Rect rect1={30,600-YPosition,50,50};
    SDL_SetRenderDrawColor(renderer,255,0,0,255);
    SDL_RenderFillRect(renderer, &rect1);
    }
void Bot::jump()
    {
    velocity=20;
    std::cout<<"should jumped"<<std::endl;

    }