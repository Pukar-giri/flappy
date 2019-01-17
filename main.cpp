#include <iostream>
#include<SDL2/SDL.h>
#include "Bot.h"
bool running= true;
using namespace std;
void handle_event(SDL_Window *window,Bot &flappy)
    {
        SDL_Event event;
        while(SDL_PollEvent(&event))
        {
          switch(event.type)
          {
              case SDL_KEYDOWN :
                  switch(event.key.keysym.sym)
                  {
                      case SDLK_SPACE:
                          flappy.jump();
                          cout<<"\nshould have jumped\n";
                  }
                  break;
              case SDL_QUIT:
                  running= false;
                  SDL_Quit();
          }
        }
    }



int main()
    {

        std::cout << SDL_INIT_EVERYTHING << std::endl;
        SDL_Init(SDL_INIT_EVERYTHING);
        SDL_Window *win=SDL_CreateWindow("flappy bird",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,400,600,SDL_WINDOW_SHOWN);
        SDL_Renderer *Ren=SDL_CreateRenderer(win,0,1);
        Bot flappy(Ren);
        SDL_Rect rect2={20,20,200,200};
        while (running)
        {
            handle_event(win,flappy);
            SDL_SetRenderDrawColor(Ren,255,255,255,1);
            SDL_RenderClear(Ren);
            SDL_SetRenderDrawColor(Ren,255,0,0,255);
            flappy.update();
            flappy.draw();
            SDL_RenderPresent(Ren);
            SDL_Delay(25);
        }




        return 0;
    }