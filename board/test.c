#include <SDL2/SDL.h>
#include "board.h"  

int main(){   

        SDL_Init(SDL_INIT_VIDEO) ; 
        SDL_Window *window = NULL ; 
        SDL_Renderer *render = NULL ; 

 
        window = SDL_CreateWindow("title", 50, 50 ,1600 , 1000, SDL_WINDOW_SHOWN) ;  
        render = SDL_CreateRenderer(window , -1 , 0 ) ; 

        bool is_game_running = true ; 
        int x , y ; 
        while( is_game_running){    

            SDL_Event event ; 
            SDL_SetRenderDrawColor(render , 50 , 0, 0, 255) ; 
            SDL_RenderClear(render) ; 
            create_chess_board(render , 20 , 40 ) ; 
            create_side_bar(render , 1000, 40) ; 
            while ( SDL_PollEvent(&event)){   
                   if ( event.type == SDL_QUIT) is_game_running = false ; 
                   if ( event.button.button == SDL_BUTTON_LEFT ){  
                        printf("you pressed the button \n") ; 
                   }
                   
                    
                   
            }
            SDL_RenderPresent(render) ; 

            
        }
        SDL_Quit() ; 
}