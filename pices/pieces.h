#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h> 


typedef struct { 
     
         int x ; 
         int y ; 
 } Pose; 

typedef struct {  
      Pose pose ; 
      Pose * avalable_moves ; 
} Piece ; 


typedef struct {   
       Pose x_init , y_init ; 

}Pawn  ;

void set_piece( Piece * ) ;
void set_avalable_moves(Piece *) ; 
void update_avalable_moves(Pose *) ; 
void update_pawn_pose(Pose  , Pose * ) ; 
void load_pawn(SDL_Renderer * render , Pose ); 