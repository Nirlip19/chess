#include <SDL2/SDL_image.h> 
#include <SDL2/SDL.h>
#include <stdbool.h>

#ifndef POSE_H 
#define POSE_H 



typedef struct { 
     
         int x ; 
         int y ; 
 } Pose ; 

typedef struct {

    Pose pose ; 
    bool PieceDawn = false ;  

} Square ; 


typedef struct    {  
      Pose pose ; 
      Pose *available_moves ;
      bool is_selected = false ;  
} Piece ; 

void IsPieceOnSquare(Piece) ; 
void LoadAvailableMoves(SDL_Renderer * ,Piece ) ; 
void CreateWindow(SDL_Window * , SDL_Renderer * );
void IsPieceSelected( Piece* , Pose mouse ) ; 
void UpdatePiecePose( Piece * , Pose) ; 
void LoadPiece(SDL_Renderer *,Piece, const char * ) ; 
void GetSquares(Square square[8][8] ) ; 
void SetUpChessBoard(SDL_Renderer * );
void UpdatePiecePose( Piece*  , Pose  ) ; 
void HandleInput(bool * );
void CleanUp();


void set_pose( Pose *  ) ; 
#endif
