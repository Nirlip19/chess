#include <SDL2/SDL_image.h> 
#include <SDL2/SDL.h>

typedef struct { 
     
         int x ; 
         int y ; 
 } Pose; 

typedef struct {  
      Pose pose ; 
      Pose * avalable_moves ; 
} Piece ; 

typedef struct {
      
      Pose pose ; 
      
} Square ; 

