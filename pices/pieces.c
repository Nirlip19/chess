#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h> 
#include "pieces.h"
#include <stdlib.h>
#include <stdbool.h>




void set_piece(Piece *piece ){   
       int max_x =  920 ; 
       int max_y =  40 ; 
       int min_x = 120 ; 
       int min_y = 740 ;
       /*square 1 */
       if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 40 ; 
             }
       /*square 2*/
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 40 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 40 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 40 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 40 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 40 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 40 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 40 && piece->pose.y < 140){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 40 ; 
             }
                   
                   
       if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 140 ; 
             }
       /*square 2*/
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 140 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 140 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 140 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 140 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 140 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 140 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 140 && piece->pose.y < 240){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 140 ; 
             }

       /*row 3*/
       if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 240 ; 
             }
       /*square 3*/
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 240 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 240 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 240 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 240 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 240 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 240 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 240 && piece->pose.y < 340){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 240 ; 
             }   
      /*row 4 */ 
             if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 340 ; 
             }
       /*square 2*/
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 340 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 340 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 340 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 340 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 340 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 340 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 340 && piece->pose.y < 440){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 340 ; 
             }
      /*row 5 */  
       if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 440 ; 
             }
       /*square 2*/
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 440 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 440 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 440 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 440 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 440 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 440 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 440 && piece->pose.y < 540){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 440 ; 
             }      
      /*row 6*/
             if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 540 ; 
             }
       
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 540 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 540 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 540 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 540 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 540 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 540 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 540 && piece->pose.y < 640){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 540 ; 
             }
      /*raw 7*/
       if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 640 ; 
             }
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 640 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 640 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 640 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 640 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 640 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 640 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 640 && piece->pose.y < 740){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 640 ; 
             }       
      /*row 8 */
             if ( (piece->pose.x > 120 && piece->pose.x < 220 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 120 ;
                  piece->pose.y = 740 ; 
             }
       if ( (piece->pose.x > 220 && piece->pose.x < 320 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 220 ;
                  piece->pose.y = 740 ; 
             }

       if ( (piece->pose.x > 320 && piece->pose.x < 420 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 320 ;
                  piece->pose.y = 740 ; 
             }
       if ( (piece->pose.x > 420 && piece->pose.x < 520 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 420 ;
                  piece->pose.y = 740 ; 
             }
       if ( (piece->pose.x > 520 && piece->pose.x < 620 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 520 ;
                  piece->pose.y = 740 ; 
             }
      if ( (piece->pose.x > 620 && piece->pose.x < 720 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 620 ;
                  piece->pose.y = 740 ; 
             }
      if ( (piece->pose.x > 720 && piece->pose.x < 820 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 720 ;
                  piece->pose.y = 740 ; 
             }
      if ( (piece->pose.x > 820 && piece->pose.x < 920 ) && 
             piece->pose.y > 740 && piece->pose.y < 840){   
                  piece->pose.x = 820 ;
                  piece->pose.y = 840 ; 
             }
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