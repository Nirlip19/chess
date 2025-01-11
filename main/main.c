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


Pose Squares[8][8] ; 
 
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

Piece b_Pawn1  ; 
Piece b_Pawn2  ; 
bool is_running = true; 

void LoadPiece(SDL_Renderer *,Piece, const char * ) ; 
void GetSquares() ; 
void CreateWindow();
void SetUpChessBoard();
void HandleInput();
void MainLoop(); 
void CleanUp();


int main(){
      white_Pawn1.pose.x = 120; 
      white_Pawn1.pose.y = 640 ; 
      white_Pawn2.pose.x = 220; 
      white_Pawn2.pose.y = 640 ; 
      white_Pawn3.pose.x = 320; 
      white_Pawn3.pose.y = 640 ; 
      white_Pawn4.pose.x = 420; 
      white_Pawn4.pose.y = 640 ; 
      white_Pawn5.pose.x = 520; 
      white_Pawn5.pose.y = 640 ; 
      white_Pawn6.pose.x = 620; 
      white_Pawn6.pose.y = 640 ;  
      white_Pawn7.pose.y = 640 ; 
      white_Pawn7.pose.x = 720; 
      white_Pawn8.pose.y = 640 ; 
      white_Pawn8.pose.x = 820;  
      white_Rook1.pose.x = 120 ; 
      white_Rook1.pose.y = 740 ;
      white_Rook2.pose.x = 820 ; 
      white_Rook2.pose.y = 740 ; 
      white_Night1.pose.x = 220 ; 
      white_Night1.pose.y = 740 ; 
      white_Night2.pose.x = 720 ; 
      white_Night2.pose.y = 740 ; 
      white_Bishop1.pose.x  = 320 ; 
      white_Bishop1.pose.y  = 740 ; 
      white_Bishop2.pose.x  = 620 ; 
      white_Bishop2.pose.y  = 740 ; 
      white_King.pose.x  = 520 ; 
      white_King.pose.y  = 740 ; 
      white_Queen.pose.x  = 420 ; 
      white_Queen.pose.y  = 740 ; 
      

      b_Pawn1.pose.x = 120 ; 
      b_Pawn1.pose.y = 140 ; 
      b_Pawn2.pose.x = 220 ; 
      b_Pawn2.pose.y = 140 ; 
            
      black_Pawn3.pose.x = 320; 
      black_Pawn3.pose.y = 140 ; 
      black_Pawn4.pose.x = 420; 
      black_Pawn4.pose.y = 140 ; 
      black_Pawn5.pose.x = 520; 
      black_Pawn5.pose.y = 140 ; 
      black_Pawn6.pose.x = 620; 
      black_Pawn6.pose.y = 140 ;  
      black_Pawn7.pose.y = 140 ; 
      black_Pawn7.pose.x = 720; 
      black_Pawn8.pose.y = 140 ; 
      black_Pawn8.pose.x = 820;  
      black_Rook1.pose.x = 120 ; 
      black_Rook1.pose.y = 40 ;
      black_Rook2.pose.x = 820 ; 
      black_Rook2.pose.y = 40 ; 
      black_Night1.pose.x = 220 ; 
      black_Night1.pose.y = 40 ; 
      black_Night2.pose.x = 720 ; 
      black_Night2.pose.y = 40 ; 
      black_Bishop1.pose.x  = 320 ; 
      black_Bishop1.pose.y  = 40 ; 
      black_Bishop2.pose.x  = 620 ; 
      black_Bishop2.pose.y  = 40 ; 
      black_King.pose.x  = 520 ; 
      black_King.pose.y  = 40 ; 
      black_Queen.pose.x  = 420 ; 
      black_Queen.pose.y  = 40 ; 
            
      CreateWindow() ;
      GetSquares() ; 
      MainLoop() ;        
      CleanUp() ;  
}

void GetSquares(){   
	int w = 0    ; 
       for(int i = Y_MIN  ; i <= Y_MAX ; i+=100){
                  int h = 0 ; 
                 for ( int j = X_MIN ; j <= X_MAX ;j+=100){
                        Squares[w][h].x = j ; 
                        Squares[w][h].y = i ; 
                        h++ ;  
                          
                      } 
                  
                 w++ ; 
            }


}

void CreateWindow(){

        IMG_Init(IMG_INIT_PNG) ; 
        SDL_Init(SDL_INIT_VIDEO) ; 
        window = SDL_CreateWindow("chess" , 20 ,20 , 1600 , 1000 , SDL_WINDOW_SHOWN) ; 
        render = SDL_CreateRenderer(window , -1, 0 ) ;    
}
void SetUpChessBoard(){
     SDL_Texture * texture ;     
     SDL_Surface *board ; 
     rect.w = 800 ; 
     rect.h = 800 ; 
     rect.x = 120 ; 
     rect.y = 40  ; 
     board = IMG_Load("rect-8x8.png") ;   
     texture = SDL_CreateTextureFromSurface(render , board) ; 
     SDL_RenderDrawRect(render , &rect) ; 
     SDL_RenderCopy(render , texture , NULL , &rect) ;  
     SDL_FreeSurface(board) ; 
     SDL_DestroyTexture(texture) ;
}


void LoadPiece(SDL_Renderer * render,Piece piece , const char *file_name){
 
         SDL_Rect rect ; 
         SDL_Surface *img ; 
         SDL_Texture *texture ; 

         rect.w = 100 ; 
         rect.h = 100 ; 
         rect.x = piece.pose.x ; 
         rect.y = piece.pose.y ; 
         img = IMG_Load(file_name) ; 
         texture = SDL_CreateTextureFromSurface(render , img) ; 
         SDL_RenderDrawRect(render , &rect) ; 
         SDL_RenderCopy(render , texture , NULL , &rect) ; 
         SDL_FreeSurface(img) ; 
         SDL_DestroyTexture(texture) ; 
                

 }
void HandleInput(){
       SDL_Event event ; 
       while ( SDL_PollEvent(&event)){
               if(event.type == SDL_QUIT)is_running = false ; 
       }

}
void MainLoop(){
     while(is_running){
       SDL_GetMouseState(&MouseState.x, &MouseState.y) ;
       set_pose(&MouseState) ; 
       printf("mouse state (%d %d)\n" , MouseState.x , MouseState.y) ;  
       SDL_SetRenderDrawColor(render,50 , 0 , 0 , 255) ; 
       SDL_RenderClear(render) ; 
       HandleInput() ; 
       SetUpChessBoard() ;
       LoadPiece(render ,white_Pawn1 ,"white-pawn.png") ;   
       LoadPiece(render ,white_Pawn2 ,"white-pawn.png") ;   
       LoadPiece(render ,white_Pawn3 ,"white-pawn.png") ;   
       LoadPiece(render ,white_Pawn4 ,"white-pawn.png") ;   
       LoadPiece(render ,white_Pawn5 ,"white-pawn.png") ;   
       LoadPiece(render ,white_Pawn6 ,"white-pawn.png") ;   
       LoadPiece(render ,white_Pawn7 ,"white-pawn.png") ;   
       LoadPiece(render ,white_Pawn8 ,"white-pawn.png") ;  
       LoadPiece(render ,white_Rook1,"white-rook.png") ;   
       LoadPiece(render ,white_Rook2 ,"white-rook.png") ;   
       LoadPiece(render ,white_Night1 ,"white-knight.png") ;   
       LoadPiece(render ,white_Night2 ,"white-knight.png") ;   
       LoadPiece(render ,white_Bishop1 ,"white-bishop.png") ;   
       LoadPiece(render ,white_Bishop2 ,"white-bishop.png") ;   
       LoadPiece(render ,white_King ,"white-king.png") ;   
       LoadPiece(render ,white_Queen ,"white-queen.png") ;   


       LoadPiece(render ,b_Pawn1 ,"black-pawn.png") ;   
       LoadPiece(render ,b_Pawn2 ,"black-pawn.png") ;   
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
 
}
void CleanUp(){
     IMG_Quit() ; 
     SDL_Quit() ; 

}






