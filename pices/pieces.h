#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h> 
#include "../headers/headers.h"
#include "../headers/define.h"
#ifndef PIECES 
#define PIECES 



void deactivate_selected_piece(Piece * , Pose * ) ;   
void check_if_piece_selected(Piece * , Pose * ) ;  
void set_avalable_moves(Piece *) ; 
void update_avalable_moves(Pose *) ; 
void update_pawn_pose(Pose  , Pose * ) ; 
void load_pawn(SDL_Renderer *  , Piece); 
void load_available_moves(SDL_Renderer *  , Piece* ) ; 

#endif