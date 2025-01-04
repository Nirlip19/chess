#include <SDL2/SDL.h>
#include "board.h" 


int CreateChessBoard(SDL_Window *window , SDL_Renderer * render , SDL_Rect *rect) {


      rect->h =100 ; 
      rect->w = 100 ; 
      rect->x = 20  ; 
      rect->y = 20 ;
      SDL_SetRenderDrawColor(render , 100 , 0 , 0 ,255) ; 
      SDL_RenderClear(render) ; 
      SDL_SetRenderDrawColor(render , 255 , 255 , 255 ,255 ) ; 
      SDL_RenderDrawRect(render , rect ) ;
      SDL_RenderFillRect( render , rect ) ;  
       //SDL_RenderCopy( render,texture ,NULL , rect ) ; 
for( int i = 0 ; i <= 400 ; i+= 100 ){
      rect->x += 100 ; 
      rect->y = 20 ; 
      SDL_SetRenderDrawColor(render , 0,0,0, 255) ; 
      SDL_RenderDrawRect(render , rect) ; 
      SDL_RenderFillRect(render , rect) ; 
      rect->x += 100; 
      rect->y = 20 ; 
      SDL_SetRenderDrawColor(render , 255,255,255, 255) ; 
      SDL_RenderDrawRect(render , rect) ; 
      SDL_RenderFillRect(render , rect) ;
}
      SDL_RenderPresent(render) ;
      /*--------------
      rect->h =100 ; 
      rect->w = 100 ; 
      rect->x = 220  ; 
      rect->y = 20 ;
      SDL_SetRenderDrawColor(render , 100 , 0 , 0 ,255) ; 
      SDL_RenderClear(render) ; 
      SDL_SetRenderDrawColor(render , 255 , 255 , 255 ,255 ) ; 
      SDL_RenderDrawRect(render , rect ) ;
      SDL_RenderFillRect( render , rect ) ;  
      
      //SDL_RenderCopy( render,texture ,NULL , rect ) ; 
      rect->x = 320 ; 
      rect->y = 20 ; 
      SDL_SetRenderDrawColor(render , 0,0,0, 255) ; 
      SDL_RenderDrawRect(render , rect) ; 
      SDL_RenderFillRect(render , rect) ; 
      SDL_RenderPresent(render) ;
      --------------
      rect->h =100 ; 
      rect->w = 100 ; 
      rect->x = 420 ; 
      rect->y = 20 ;
      SDL_SetRenderDrawColor(render , 100 , 0 , 0 ,255) ; 
      SDL_RenderClear(render) ; 
      SDL_SetRenderDrawColor(render , 255 , 255 , 255 ,255 ) ; 
      SDL_RenderDrawRect(render , rect ) ;
      SDL_RenderFillRect( render , rect ) ;  
      
      //SDL_RenderCopy( render,texture ,NULL , rect ) ; 
      rect->x = 520 ; 
      rect->y = 20 ; 
      SDL_SetRenderDrawColor(render , 0,0,0, 255) ; 
      SDL_RenderDrawRect(render , rect) ; 
      SDL_RenderFillRect(render , rect) ; 
      SDL_RenderPresent(render) ;
      /*--------------
      rect->h =100 ; 
      rect->w = 100 ; 
      rect->x = 620  ; 
      rect->y = 20 ;
      SDL_SetRenderDrawColor(render , 100 , 0 , 0 ,255) ; 
      SDL_RenderClear(render) ; 
      SDL_SetRenderDrawColor(render , 255 , 255 , 255 ,255 ) ; 
      SDL_RenderDrawRect(render , rect ) ;
      SDL_RenderFillRect( render , rect ) ;  
      
      //SDL_RenderCopy( render,texture ,NULL , rect ) ; 
      rect->x = 720 ; 
      rect->y = 20 ; 
      SDL_SetRenderDrawColor(render , 0,0,0, 255) ; 
      SDL_RenderDrawRect(render , rect) ; 
      SDL_RenderFillRect(render , rect) ; 
      SDL_RenderPresent(render) ;
      /*--------------*/
      return 0 ; 
      
}
