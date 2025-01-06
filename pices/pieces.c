#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h> 
#include "pieces.h"
#include <stdlib.h>
#include <stdbool.h>




void set_piece(Piece *piece ){   
    
    Pose up_right , up_left , down_right , down_left ; 
    up_right.x = 920 ; 
    up_right.y = 40 ; 
    
    up_left.x = 120 ; 
    up_left.y = 40 ; 
    
    down_left.x = 120 ;
    down_left.y = 840 ; 

    down_right.x = 920 ; 
    down_right.y = 840 ; 
    //for x 

}

void load_pawn(SDL_Renderer * render , Pose pose ) {   
        SDL_Surface * image ; 
        SDL_Texture * texture  ; 
        SDL_Rect rect ; 

        rect.w = 100 ; 
        rect.h = 100 ; 
        rect.x = pose.x ; 
        rect.y = pose.y  ; 

        image = IMG_Load("black-pawn.png") ; 
        texture = SDL_CreateTextureFromSurface(render , image) ; 
        SDL_RenderCopy(render , texture , NULL , &rect) ; 
        SDL_FreeSurface(image) ; 
        SDL_DestroyTexture(texture) ; 
}

void update_pawn_pose( Pose  mouse_pose , Pose *pawn_pose  ){  
       int max_x =  920 ; 
       int max_y =  40 ; 
       int min_x = 120 ; 
       int min_y = 740 ; 
       bool in_board = ((mouse_pose.x > min_x &&  mouse_pose.x < max_x) && 
                       ( mouse_pose.y <  min_y && mouse_pose.y > max_y)) ; 
       if ( in_board){ 
              
             pawn_pose->x = mouse_pose.x - 50; 
             pawn_pose->y = mouse_pose.y - 50; 
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