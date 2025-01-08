#include <SDL2/SDL.h> 
#include <SDL2/SDL_image.h>
#include "../board/board.h"
#include "pieces.h"
#include <stdlib.h>
#include <stdbool.h>
#include "../headers/headers.h"
#include "../headers/define.h"

int main(){   
        SDL_Init(SDL_INIT_VIDEO) ; 
        SDL_Window *window ; 
        SDL_Renderer *render ; 
        Piece pawn ; 
        pawn.avalable_moves = NULL ;
        pawn.is_seleced = false ;  
        window = SDL_CreateWindow("chess", 20 ,20 ,1600 ,1000 , SDL_WINDOW_SHOWN) ;
        render = SDL_CreateRenderer(window , -1 , 0 ) ;    

        
        Pose mouse_pose ;  
        mouse_pose.x = 20 ; 
        mouse_pose.y = 40; 
        pawn.pose.x = 120 ; 
        pawn.pose.y= 640 ; 
        
        bool is_game_running = true ; 
        while(is_game_running ){   
              SDL_Event event ; 
              SDL_SetRenderDrawColor(render , 50 , 0 , 0 , 255) ; 
              SDL_RenderClear(render) ; 
              create_chess_board(render , 20 , 40 ) ; 
              create_side_bar(render , 1000 , 40 ) ; 
              
              load_pawn(render , pawn) ; 
              set_avalable_moves(&pawn) ;
              load_available_moves(render , &pawn) ; 
              SDL_GetMouseState(&mouse_pose.x , &mouse_pose.y) ;
              set_pose(&mouse_pose) ;
              
              while ( SDL_PollEvent(&event)){  
   
                   if ( event.type == SDL_QUIT)is_game_running =false ;
                   if( event.type == SDL_MOUSEBUTTONDOWN){
                      if ( event.button.button == SDL_BUTTON_LEFT){
                           printf("mouse state (%d  , %d)\n " , mouse_pose.x , mouse_pose.y) ; 
                           check_if_piece_selected(&pawn , &mouse_pose) ; 
                           printf("pown state %b \n " , pawn.is_seleced ) ; 
                              }
                         } 
                     
                   }     
             free(pawn.avalable_moves) ; 
             SDL_RenderPresent(render) ; 
          }
             
        SDL_Quit() ; 
      }
