#include "../headers/headers.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#define X_MIN 120  
#define Y_MIN 40 
#define Y_MAX 840 
#define X_MAX 820   

/*
void GetSquares( Square Squares[8][8]){   
	int w = 0    ; 
       for(int i = Y_MIN  ; i <= Y_MAX ; i+=100){
                  int h = 0 ; 
                 for ( int j = X_MIN ; j <= X_MAX ;j+=100){
                        Squares[w][h].pose.x = j ; 
                        Squares[w][h].pose.y = i ; 
                        h++ ;  
                          
                      } 
                  
                 w++ ; 
            }


}
   
void IsPieceOnSquare(Piece piece , Square *Squares[]) {
	int w = 0    ; 
       for(int i = Y_MIN  ; i <= Y_MAX ; i+=100){
                  int h = 0 ; 
                 for ( int j = X_MIN ; j <= X_MAX ;j+=100){
                       if( Squares[w][h].pose.x == piece.pose.x && Squares[w][h].pose.y == piece.pose.y)
                               Squares[w][h].PieceDawn = true ; 
                        h++ ;  
                          
                      } 
                  
                 w++ ; 
     } 
       
}*/ 
void LoadAvailableMoves(SDL_Renderer * render,Piece  piece ) {

      if ( piece.is_seleced){
           SDL_Texture  *texture ; 
           SDL_Surface  *img ; 
           SDL_Rect rect ; 
           rect.x = piece.pose.x  + 50  ; 
           rect.y = piece.pose.y - 50 ; 
           rect.w = 25 ; 
           rect.h = 25 ; 
           img = IMG_Load("moves.png") ; 
           texture = SDL_CreateTextureFromSurface(render , img ) ;
           SDL_RenderCopy(render , texture , NULL , &rect ) ; 
           SDL_FreeSurface(img) ; 
           SDL_DestroyTexture(texture) ; 
          } 


} 
void  IsPieceSelected( Piece *  piece , Pose MousePose ){
       
        if ( MousePose.x == piece->pose.x && MousePose.y == piece->pose.y){ 
                 if ( piece->is_seleced == true) piece->is_seleced = false ; 
                 else if ( piece->is_seleced == false ) piece->is_seleced = true  ; 
                    
             }

       } 

void UpdatePiecePose( Piece* piece , Pose MousePose ){
         
                piece->pose.x = MousePose.x ; 
                piece->pose.y = MousePose.y ; 
        

}
void CreateWindow(SDL_Window * window , SDL_Renderer *render ){

        IMG_Init(IMG_INIT_PNG) ; 
        SDL_Init(SDL_INIT_VIDEO) ; 
        window = SDL_CreateWindow("chess" , 20 ,20 , 1600 , 1000 , SDL_WINDOW_SHOWN) ; 
        render = SDL_CreateRenderer(window , -1, 0 ) ;    
}
void SetUpChessBoard(SDL_Renderer * render ){
     SDL_Rect rect ; 
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
void HandleInput(bool * is_running){
       SDL_Event event ; 
       while ( SDL_PollEvent(&event)){
               if(event.type == SDL_QUIT)*is_running = false ;
               if(event.type == SDL_MOUSEBUTTONDOWN){
                         if( event.button.button == SDL_BUTTON_LEFT){
                               // IsPieceSelected( &white_Pawn1 , MouseState) ;
                               // printf("white pawn1 selected : %b\n" , white_Pawn1.is_selected ) ;  
                           }
                   } 
       }

}

void CleanUp(){
     IMG_Quit() ; 
     SDL_Quit() ; 

}


void set_pose( Pose * pose  ) {   

 
       if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 40 && pose->y <140){   
                  pose->x = 120 ;
                  pose->y = 40 ; 
             }

       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 40 && pose->y < 140){   
                  pose->x = 220 ;
                  pose->y = 40 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 40 && pose->y < 140){   
                  pose->x = 320 ;
                  pose->y = 40 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 40 && pose->y < 140){   
                  pose->x = 420 ;
                  pose->y = 40 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 40 && pose->y < 140){   
                  pose->x = 520 ;
                  pose->y = 40 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 40 && pose->y < 140){   
                  pose->x = 620 ;
                  pose->y = 40 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 40 && pose->y < 140){   
                  pose->x = 720 ;
                  pose->y = 40 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 40 && pose->y < 140){   
                  pose->x = 820 ;
                  pose->y = 40 ; 
             }
                   
                   
       if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 120 ;
                  pose->y = 140 ; 
             }
       
       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 220 ;
                  pose->y = 140 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 320 ;
                  pose->y = 140 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 420 ;
                  pose->y = 140 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 520 ;
                  pose->y = 140 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 620 ;
                  pose->y = 140 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 720 ;
                  pose->y = 140 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 140 && pose->y < 240){   
                  pose->x = 820 ;
                  pose->y = 140 ; 
             }

       
       if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 120 ;
                  pose->y = 240 ; 
             }
       
       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 220 ;
                  pose->y = 240 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 320 ;
                  pose->y = 240 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 420 ;
                  pose->y = 240 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 520 ;
                  pose->y = 240 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 620 ;
                  pose->y = 240 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 720 ;
                  pose->y = 240 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 240 && pose->y < 340){   
                  pose->x = 820 ;
                  pose->y = 240 ; 
             }   
       
             if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 120 ;
                  pose->y = 340 ; 
             }
      
       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 220 ;
                  pose->y = 340 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 320 ;
                  pose->y = 340 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 420 ;
                  pose->y = 340 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 520 ;
                  pose->y = 340 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 620 ;
                  pose->y = 340 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 720 ;
                  pose->y = 340 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 340 && pose->y < 440){   
                  pose->x = 820 ;
                  pose->y = 340 ; 
             }
  
       if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 120 ;
                  pose->y = 440 ; 
             }

       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 220 ;
                  pose->y = 440 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 320 ;
                  pose->y = 440 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 420 ;
                  pose->y = 440 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 520 ;
                  pose->y = 440 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 620 ;
                  pose->y = 440 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 720 ;
                  pose->y = 440 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 440 && pose->y < 540){   
                  pose->x = 820 ;
                  pose->y = 440 ; 
             }      

             if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 120 ;
                  pose->y = 540 ; 
             }
       
       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 220 ;
                  pose->y = 540 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 320 ;
                  pose->y = 540 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 420 ;
                  pose->y = 540 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 520 ;
                  pose->y = 540 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 620 ;
                  pose->y = 540 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 720 ;
                  pose->y = 540 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 540 && pose->y < 640){   
                  pose->x = 820 ;
                  pose->y = 540 ; 
             }
             if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 120 ;
                  pose->y = 640 ; 
             }
       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 220 ;
                  pose->y = 640 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 320 ;
                  pose->y = 640 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 420 ;
                  pose->y = 640 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 520 ;
                  pose->y = 640 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 620 ;
                  pose->y = 640 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 720 ;
                  pose->y = 640 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 640 && pose->y < 740){   
                  pose->x = 820 ;
                  pose->y = 640 ; 
             }       
      
             if ( (pose->x > 120 && pose->x < 220 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 120 ;
                  pose->y = 740 ; 
             }
       if ( (pose->x > 220 && pose->x < 320 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 220 ;
                  pose->y = 740 ; 
             }

       if ( (pose->x > 320 && pose->x < 420 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 320 ;
                  pose->y = 740 ; 
             }
       if ( (pose->x > 420 && pose->x < 520 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 420 ;
                  pose->y = 740 ; 
             }
       if ( (pose->x > 520 && pose->x < 620 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 520 ;
                  pose->y = 740 ; 
             }
      if ( (pose->x > 620 && pose->x < 720 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 620 ;
                  pose->y = 740 ; 
             }
      if ( (pose->x > 720 && pose->x < 820 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 720 ;
                  pose->y = 740 ; 
             }
      if ( (pose->x > 820 && pose->x < 920 ) && 
             pose->y > 740 && pose->y < 840){   
                  pose->x = 820 ;
                  pose->y = 840 ; 
             }

   
}

