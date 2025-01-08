#include <SDL2/SDL_image.h> 
#include <SDL2/SDL.h>
#ifndef POSE_H 
#define POSE_H 
typedef struct { 
     
         int x ; 
         int y ; 
 } Pose ; 

typedef struct {  
      Pose pose ; 
      Pose * avalable_moves ; 
} Piece ; 

#endif
void set_pose( Pose * ) ; 