#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h> 
#include "pieces.h"
#include <stdlib.h>
#include <stdbool.h>
#include "../headers/define.h"
#include "../headers/headers.h"

void check_if_piece_selected(Piece *piece , Pose *mouse ){ 
  
      if ( mouse->x == piece->pose.x && mouse->y == piece->pose.y){
          if ( piece->is_seleced == true) piece->is_seleced = false ; 
          else piece->is_seleced =true  ;

     }
} 

void load_pawn(SDL_Renderer * render , Piece pawn  ) {   
        SDL_Surface * image  ; 
        SDL_Texture * texture ; 
        SDL_Rect rect ; 
         
        rect.w = 100 ; 
        rect.h = 100 ; 
        rect.x = pawn.pose.x ; 
        rect.y = pawn.pose.y  ; 
             
        image = IMG_Load("black-pawn.png") ; 
        texture = SDL_CreateTextureFromSurface(render , image) ; 
        SDL_RenderCopy(render , texture , NULL , &rect) ; 

        SDL_FreeSurface(image) ; 
        SDL_DestroyTexture(texture) ; 
 
}

void load_available_moves(SDL_Renderer* render , Piece* piece){ 
      if ( piece->is_seleced == true ){ 
            SDL_Surface * image ; 
            SDL_Texture * texture ; 
            SDL_Rect rect ; 
            rect.w = 50 ; 
            rect.h = 50 ; 
            
            image = IMG_Load("moves.png") ; 
            texture = SDL_CreateTextureFromSurface(render , image ) ; 
            
            for( int i = 0 ;  i <2 ; i++){  
                 rect.x = piece->avalable_moves[i].x + 25; 
                 rect.y = piece->avalable_moves[i].y + 25; 
                 SDL_RenderDrawRect(render , &rect ) ;  
                 SDL_RenderCopy(render , texture , NULL , &rect ) ;   
                   }
      
            SDL_FreeSurface(image) ; 
            SDL_DestroyTexture(texture) ; 
      }
   
 }
void update_pawn_pose( Pose  mouse_pose , Pose *pawn_pose  ){  
       int max_x =  920 ; 
       int max_y =  40 ; 
       int min_x = 120 ; 
       int min_y = 740 ; 
       bool in_board = ((mouse_pose.x >= min_x &&  mouse_pose.x <= max_x) && 
                       ( mouse_pose.y <=  min_y && mouse_pose.y >= max_y)) ; 
       if ( in_board){ 
              
             pawn_pose->x = mouse_pose.x; 
             pawn_pose->y = mouse_pose.y; 
             printf("in board %b \n" , in_board) ; 
       }else {
             printf("out of chess board %b \n" , in_board ) ;
             printf("mouse state (%d %d) \n", mouse_pose.x ,mouse_pose.y) ; 
             } 

} 

void update_avalable_moves(Pose * avalable_moves ) { 

            
 }

void set_avalable_moves(Piece * pawn ) {  
       Pose pawn_init_pose = pawn->pose ; 
       Pose *moves  = (Pose*)malloc(sizeof(Pose)*4) ; 
       (*moves).y = pawn_init_pose.y -100 ;
       (*moves).x = pawn_init_pose.x ; 
       (*(moves+1)).y = pawn_init_pose.y - 200 ;
       (*(moves+1)).x = pawn_init_pose.x ;
       pawn->avalable_moves = moves ; 
} 
