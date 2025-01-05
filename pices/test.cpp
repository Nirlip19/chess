#include <SDL2/SDL.h>
#include "../board/board.h"
#include "pown/pown.h"
#include <iostream>
#include <SDL2/SDL_image.h>

int main(){   

        SDL_Init(SDL_INIT_VIDEO) ; 
        IMG_Init(IMG_INIT_PNG) ;
        SDL_Window *window = NULL ; 
        SDL_Renderer *render = NULL ;
          
        window = SDL_CreateWindow("title", 50, 50 ,1600 , 800, SDL_WINDOW_SHOWN) ;  
        render = SDL_CreateRenderer(window , -1 , 0 ) ; 
        bool is_game_running = true ; 
       
        int x  = 1500, y  = 300 ; 
        while( is_game_running){    
            SDL_SetRenderDrawColor(render , 50 , 0, 0, 255) ; 
            SDL_RenderClear(render) ;
            SDL_Event event ;  
            Uint32 buttons ; 
            CreateChessBoard(render , 20 ,40 ) ;
            create_side_bar(render , 1000 , 40 ) ; 
            load_pawn(render , x,  y ) ; 
       
            while ( SDL_PollEvent(&event)){   
                   if ( event.type == SDL_QUIT) is_game_running = false ; 
                   if ( event.button.button == SDL_BUTTON_LEFT){ 
                         
                         buttons = SDL_GetMouseState(&x ,&y );                   
                   }
                    
                   
            }
            SDL_RenderPresent(render) ; 
        }
        IMG_Quit() ; 
        SDL_Quit() ; 
}