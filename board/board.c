#include <SDL2/SDL.h>
#include "board.h" 


int create_chess_board( SDL_Renderer * render ,int x, int y ) {
      SDL_Rect rect ; 
      rect.y = y ; 
 

for ( int j = 1 ;  j <= 8 ; j++ ){ 
      rect.h =100; 
      rect.w = 100 ; 
      rect.x = x   ; 
       
    for( int i = 1 ; i <= 400 ; i+= 100 ){
       rect.x += 100 ; 
       if( j % 2 == 0 ){
         SDL_SetRenderDrawColor(render , 40,40,40, 255) ; 
         SDL_RenderDrawRect(render , &rect) ; 
         SDL_RenderFillRect(render , &rect) ; 
         rect.x += 100; 
         SDL_SetRenderDrawColor(render , 200,200,200, 255) ; 
         SDL_RenderDrawRect(render , &rect) ; 
         SDL_RenderFillRect(render , &rect) ;
       }else{  
          SDL_SetRenderDrawColor(render , 200,200,200, 255) ; 
          SDL_RenderDrawRect(render , &rect) ; 
          SDL_RenderFillRect(render , &rect) ; 
          rect.x += 100; 
          SDL_SetRenderDrawColor(render , 40,40,40, 255) ; 
          SDL_RenderDrawRect(render , &rect) ; 
          SDL_RenderFillRect(render , &rect) ;
       }
    }
    rect.y += 100 ;
}
      //free(&rect) ; 
      //SDL_FreeSurface(sur)
      return 0 ; 
      
}

int create_side_bar(SDL_Renderer *render  , int x , int y ){   
        
        SDL_Rect  rect ; 
        rect.h = 1000 ; 
        rect.h = 600 ; 
        rect.x = x ;// 920 
        rect.y = y ;// 40 
        SDL_SetRenderDrawColor(render , 60 , 60 ,60 ,255) ; 
        SDL_RenderDrawRect(render , &rect) ; 
        SDL_RenderFillRect(render, &rect) ; 

        //free(&rect) ; 
        return 0 ; 
}