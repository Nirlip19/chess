#include <SDL2/SDL_image.h> 
#include <SDL2/SDL.h>
#include <stdbool.h>

#ifndef POSE_H 
#define POSE_H 

typedef struct {

     

} beard ; 

typedef struct { 
     
         int x ; 
         int y ; 
 } Pose ; 

typedef struct {  
      Pose pose ; 
      Pose * avalable_moves ; 
      bool is_seleced   ; 
} Piece ; 


void set_pose( Pose *  ) ; 
#endif
