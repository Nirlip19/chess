#include <SDL2/SDL.h> 
#include <SDL2/SDL_image.h> 
#include "../headers/headers.h"   
#define X_MIN 120  
#define Y_MIN 40 
#define Y_MAX 840 
#define X_MAX 820   





SDL_Window *window ; 
SDL_Renderer *render ; 
SDL_Rect rect ; 
Pose MouseState ;

 
bool is_running = true; 

Square Squares[8][8] ; 
int main(){

		Piece white_Pawn1 ; 
		Piece white_Pawn2 ; 
		Piece white_Pawn3 ; 
		Piece white_Pawn4 ;
		Piece white_Pawn5 ;
		Piece white_Pawn6 ;
		Piece white_Pawn7 ;
		Piece white_Pawn8 ;
		Piece white_Rook1 ; 
		Piece white_Rook2 ;
		Piece white_Night1 ;  
		Piece white_Night2 ; 
		Piece white_Bishop1;
		Piece white_Bishop2;
		Piece white_King;
		Piece white_Queen;



		Piece black_Pawn1 ; 
		Piece black_Pawn2 ; 
		Piece black_Pawn3 ; 
		Piece black_Pawn4 ; 
		Piece black_Pawn5 ; 
		Piece black_Pawn6 ; 
		Piece black_Pawn7 ; 
		Piece black_Pawn8 ; 
		Piece black_Rook1 ; 
		Piece black_Rook2 ;
		Piece black_Night1 ;  
		Piece black_Night2 ; 
		Piece black_Bishop1;
		Piece black_Bishop2;
		Piece black_King;
		Piece black_Queen;
	        white_Pawn1 = {{120 , 640},NULL , false } ;  
	        white_Pawn2 = {{220 , 640},NULL  ,false  } ;    
	        white_Pawn3 = {{320 , 640},NULL  ,false  } ;   
	        white_Pawn4 = {{420 , 640},NULL  ,false  } ;   
	        white_Pawn5 = {{520 , 640},NULL  ,false  } ;   
	        white_Pawn6 = {{620 , 640},NULL  ,false  } ;   

	        white_Pawn7 = {{720 , 640},NULL  ,false  } ;   
	        white_Pawn8 = {{820 , 640},NULL  ,false  } ;   
	        white_Rook1 = {{120 , 740},NULL  ,false  } ;   
	        white_Rook2 = {{820 , 740},NULL  ,false  } ;   
	        white_Night1 = {{220 , 740},NULL  ,false  } ;   
	        white_Night2 = {{720 , 740},NULL  ,false  } ;   
	        white_Bishop1 = {{320 , 740},NULL  ,false  } ;   
	        white_Bishop2 = {{620 , 740},NULL  ,false  } ;   
	        white_King = {{520 , 740},NULL  ,false  } ;   
	        white_Queen = {{420 , 740},NULL  ,false  } ;   
      

	        black_Pawn1 = {{120 , 140},NULL  ,false  } ;   
	        black_Pawn2 = {{220 , 140},NULL  ,false  } ;   
	        black_Pawn3 = {{320 , 140},NULL  ,false  } ;   
	        black_Pawn4 = {{420 , 140},NULL  ,false  } ;   
	        black_Pawn5 = {{520 , 140},NULL  ,false  } ;   
	        black_Pawn6 = {{620 , 140},NULL  ,false  } ;   
	        black_Pawn7 = {{720 , 140},NULL  ,false  } ;   
	        black_Pawn8 = {{820 , 140},NULL  ,false  } ;   
	        black_Rook1 = {{120 , 40},NULL  ,false  } ;   
	        black_Rook2 = {{820 , 40},NULL  ,false  } ;   
	        black_Night1 = {{220 , 40},NULL  ,false  } ;   
	        black_Night2 = {{720 , 40},NULL  ,false  } ;   
	        black_Bishop1 = {{320 , 40},NULL  ,false  } ;   
	        black_Bishop2 = {{620 , 40},NULL  ,false  } ;   
	        black_King = {{520 , 40},NULL  ,false  } ;   
	        black_Queen = {{420 , 40},NULL  ,false  } ;   
                SDL_Init(SDL_INIT_VIDEO)  ; 
                IMG_Init(IMG_INIT_PNG) ;  
                window = SDL_CreateWindow("title" , 20 ,20 , 1600, 1000 , SDL_WINDOW_SHOWN) ;           
                render = SDL_CreateRenderer(window , -1 , 0 ) ;  
	  while(is_running){
	       SDL_GetMouseState(&MouseState.x, &MouseState.y) ;
	       set_pose(&MouseState) ; 
	       SDL_SetRenderDrawColor(render,50 , 0 , 0 , 255) ; 
	       SDL_RenderClear(render) ; 
	       SetUpChessBoard(render ) ;
	       SDL_Event event ; 
               while ( SDL_PollEvent(&event)){

		       if(event.type == SDL_QUIT)is_running = false ;
		       if(event.type == SDL_MOUSEBUTTONDOWN){
				 if( event.button.button == SDL_BUTTON_LEFT){
                                     IsPieceSelected( &white_Pawn1 , MouseState) ;
                                     IsPieceSelected( &white_Pawn2 , MouseState) ;
                                     IsPieceSelected( &white_Pawn3 , MouseState) ;
                                     IsPieceSelected( &white_Pawn4 , MouseState) ;
                                     IsPieceSelected( &white_Pawn5 , MouseState) ;
                                     IsPieceSelected( &white_Pawn6 , MouseState) ;
                                     IsPieceSelected( &white_Pawn7 , MouseState) ;
                                     IsPieceSelected( &white_Pawn8 , MouseState) ;
                             }
                        } 
                }



	       LoadPiece(render ,white_Pawn1 ,"white-pawn.png") ;    
               LoadAvailableMoves(render,white_Pawn1 )  ; 
	       LoadPiece(render ,white_Pawn2 ,"white-pawn.png") ;
               LoadAvailableMoves(render,white_Pawn2 )  ; 
	       LoadPiece(render ,white_Pawn3 ,"white-pawn.png") ;   
               LoadAvailableMoves(render,white_Pawn3 )  ; 
	       LoadPiece(render ,white_Pawn4 ,"white-pawn.png") ;   
               LoadAvailableMoves(render,white_Pawn4 )  ; 
	       LoadPiece(render ,white_Pawn5 ,"white-pawn.png") ;   
               LoadAvailableMoves(render,white_Pawn5 )  ; 
               LoadPiece(render ,white_Pawn6 ,"white-pawn.png") ;   
               LoadAvailableMoves(render,white_Pawn6 )  ; 
	       LoadPiece(render ,white_Pawn7 ,"white-pawn.png") ;   
               LoadAvailableMoves(render,white_Pawn7 )  ; 
	       LoadPiece(render ,white_Pawn8 ,"white-pawn.png") ;  
               LoadAvailableMoves(render,white_Pawn8 )  ; 
	       LoadPiece(render ,white_Rook1,"white-rook.png") ;   
	       LoadPiece(render ,white_Rook2 ,"white-rook.png") ;   
	       LoadPiece(render ,white_Night1 ,"white-knight.png") ;   
	       LoadPiece(render ,white_Night2 ,"white-knight.png") ;   
	       LoadPiece(render ,white_Bishop1 ,"white-bishop.png") ;   
	       LoadPiece(render ,white_Bishop2 ,"white-bishop.png") ;   
	       LoadPiece(render ,white_King ,"white-king.png") ;   
	       LoadPiece(render ,white_Queen ,"white-queen.png") ;   


	       LoadPiece(render ,black_Pawn1 ,"black-pawn.png") ;   
	       LoadPiece(render ,black_Pawn2 ,"black-pawn.png") ;   
	       LoadPiece(render ,black_Pawn3 ,"black-pawn.png") ;   
	       LoadPiece(render ,black_Pawn4 ,"black-pawn.png") ;   
	       LoadPiece(render ,black_Pawn5 ,"black-pawn.png") ;   
	       LoadPiece(render ,black_Pawn6 ,"black-pawn.png") ;   
	       LoadPiece(render ,black_Pawn7 ,"black-pawn.png") ;   
	       LoadPiece(render ,black_Pawn8 ,"black-pawn.png") ;  
	       LoadPiece(render ,black_Rook1,"black-rook.png") ;   
	       LoadPiece(render ,black_Rook2 ,"black-rook.png") ;   
	       LoadPiece(render ,black_Night1 ,"black-knight.png") ;   
	       LoadPiece(render ,black_Night2 ,"black-knight.png") ;   
	       LoadPiece(render ,black_Bishop1 ,"black-bishop.png") ;   
	       LoadPiece(render ,black_Bishop2 ,"black-bishop.png") ;   
	       LoadPiece(render ,black_King ,"black-king.png") ;   
	       LoadPiece(render ,black_Queen ,"black-queen.png") ;   
           
	       SDL_RenderPresent(render) ; 

    }      
      CleanUp() ;  
}


