#include <SDL2/SDL.h>
#include "board.h"  
/*
int create(SDL_Window*window){

           
      SDL_Renderer * render   ;
      SDL_Texture * texture ; 
      SDL_Surface * image ; 
      SDL_Rect square ; 

      
      image = SDL_LoadBMP("../images/black_square.bmp") ;
      render = SDL_CreateRenderer( window ,-1, 0 ) ;
      texture = SDL_CreateTextureFromSurface( render , image) ; 
      square.x = 20 ; 
      square.y =20 ; 
      square.h = 100 ; 
      square.w = 100 ; 

      SDL_SetRenderDrawColor(render , 100 , 0 , 0 ,255) ; 
      SDL_RenderClear(render) ; 
      SDL_SetRenderDrawColor(render , 0 , 0 , 0 ,255 ) ; 
      SDL_RenderDrawRect(render , &square) ; 
      SDL_RenderCopy( render,texture ,NULL , &square ) ; 
      SDL_RenderPresent(render) ;  
      printf("works\n") ; 
      return 0 ; 

}
*/
int main(){   

        SDL_Init(SDL_INIT_VIDEO) ; 
        SDL_Window *window = NULL ; 
        SDL_Renderer *render = NULL ; 
        SDL_Texture * texture = NULL ; 
        SDL_Surface * image = NULL ; 
        SDL_Rect rect ; 
        window = SDL_CreateWindow("title", 50, 50 ,1500 , 1500, SDL_WINDOW_SHOWN) ;  
        render = SDL_CreateRenderer(window , -1 , 0 ) ; 
        image= SDL_LoadBMP("../images/black_square.bmp") ; 
        texture = SDL_CreateTextureFromSurface(render , image) ;
        bool is_game_running = true ; 
        int x , y ; 
        while( is_game_running){    

            SDL_Event event ; 
            CreateChessBoard(window , render ,&rect ) ; 
            while ( SDL_PollEvent(&event)){   
                   if ( event.type == SDL_QUIT) is_game_running = false ; 
                   
                    
                   
            }
            
        }
        SDL_Quit() ; 
}