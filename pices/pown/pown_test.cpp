#include <SDL2/SDL.h> 
#include <SDL2/SDL_image.h>
#include "pown.h"

int main(){   

         
         SDL_Init(SDL_INIT_VIDEO) ; 
         IMG_Init(IMG_INIT_PNG) ; 
         SDL_Window * window ; 
         SDL_Renderer *render ; 
         window = SDL_CreateWindow("title", 20,20 ,600 ,600, SDL_WINDOW_SHOWN) ;
         render = SDL_CreateRenderer(window , -1 , 0 ) ; 
         int x  = 400 ,  y = 400  ;
         bool is_game_running = true ; 
         while (is_game_running){  
               SDL_SetRenderDrawColor(render , 50 , 0 , 0 ,255) ; 
               SDL_RenderClear(render) ; 
               Uint32 buttons ; 
               SDL_Event event ;
               PownPose(render , x , y ) ; 
               while( SDL_PollEvent(&event)){    
                   if (event.type == SDL_QUIT) is_game_running =false ; 
                   if (event.button.button == SDL_BUTTON_LEFT){  
                     buttons = SDL_GetMouseState( &x , &y) ;
                   }
               }
               SDL_RenderPresent(render); 
         }
         IMG_Quit()  ;
         SDL_Quit() ; 

}