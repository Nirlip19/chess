#include <SDL2/SDL.h> 
#include <SDL2/SDL_image.h>
#include "pown.h"

void load_pawn(SDL_Renderer*render,int x , int y ) {  
       
       //IMG_Init(IMG_INIT_PNG) ; 
       SDL_Rect rect ;
       SDL_Texture *ourPNG ; 
       rect.h = 100 ; 
       rect.w = 100 ; 
       rect.x = x ; 
       rect.y = y ; 
       SDL_Surface *pown_image;  
       pown_image = IMG_Load("black-pawn.png") ; 
       ourPNG = SDL_CreateTextureFromSurface(render  , pown_image) ; 
       SDL_SetRenderDrawColor(render , 255,255,255, 255) ; 
       SDL_RenderDrawRect(render , &rect) ; 
       SDL_RenderCopy(render, ourPNG ,NULL, &rect) ; 
       SDL_FreeSurface(pown_image) ; 
       SDL_DestroyTexture(ourPNG) ; 
       //free(&rect) ; 

} 