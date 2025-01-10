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
 
Piece Black_Pawn1 ; 
Piece Black_Pawn2 ; 
Piece Black_Pawn3 ; 
Piece Black_Pawn4 ; 
Piece Black_Pawn5 ; 
Piece Black_Pawn6 ; 
Piece Black_Pawn7 ; 
Piece Black_Pawn8 ; 

Piece white_Pawn1 ; 
Piece white_Pawn2 ; 
Piece white_Pawn3 ; 
Piece white_Pawn4 ;
Piece white_Pawn5 ;
Piece white_Pawn6 ;
Piece white_Pawn7 ;
Piece white_Pawn8 ;

bool is_running = true; 

void LoadPiece(Piece) ; 
void GetSquares() ; 
void CreateWindow();
void SetUpChessBoard();
void HandleInput();
void MainLoop(); 
void CleanUp();


int main(){
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
       //printf("mouse state (%d %d)\n" , MouseState.x , MouseState.y) ;  
       SDL_SetRenderDrawColor(render,50 , 0 , 0 , 255) ; 
       SDL_RenderClear(render) ; 
       HandleInput() ; 
       SetUpChessBoard() ; 
       SDL_RenderPresent(render) ; 

    }      
 
}
void CleanUp(){
     IMG_Quit() ; 
     SDL_Quit() ; 

}






