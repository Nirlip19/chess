#include <SDL2/SDL.h> 
#include <SDL2/SDL_image.h>
#include "../board/board.h"
#include "pieces.h"
#include <stdlib.h>
#include <stdbool.h>


int main(){   
        SDL_Init(SDL_INIT_VIDEO) ; 
        SDL_Window *window ; 
        SDL_Renderer *render ; 
        Piece pawn ; 
        pawn.avalable_moves = NULL ; 
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
             
              //load_available_moves(render , &pawn ) ; 
              Uint32 buttons ;
              while ( SDL_PollEvent(&event)){  
                   if ( event.type == SDL_QUIT)is_game_running =false ;
                   if( event.button.button == SDL_BUTTON_LEFT){  
                   
                     
                     SDL_GetMouseState(&mouse_pose.x , &mouse_pose.y ) ; 
                     //get_mouse_squer(&mouse_pose) ; 
                     printf("you clicked on %d , %d \n" ,mouse_pose.x, mouse_pose.y ) ; 
                     update_pawn_pose(mouse_pose,&pawn.pose) ; 
                     set_piece(&pawn) ;
                     set_avalable_moves(&pawn) ; 
                     load_available_moves(render , &pawn) ; 
                     /*
                     printf("corrent pose %d %d \n" ,pawn.pose.x ,pawn.pose.y) ; 
                     printf("pawns avalable moves %d ,%d and %d ,%d\n", 
                                    pawn.avalable_moves[0].x , pawn.avalable_moves[0].y ,
                                    pawn.avalable_moves[1].x , pawn.avalable_moves[1].y) ; 
                     */
                     
                     free(pawn.avalable_moves) ;
                   }     
                             
              }
              
             SDL_RenderPresent(render) ; 
        }
        
        
        SDL_Quit() ; 
}