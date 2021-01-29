/*******************************************************************************************
*
*   The Moving - A game 
*
*   This game has been created using raylib 2.5 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2021 Chair050 (@Chair050)
*
********************************************************************************************/

#include "raylib.h"
#include<stdlib.h>//<--Per la funzione exit

int ChDraw(int Xpos, int Ypos, float Radius){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawCircle(Xpos,Ypos,Radius,GREEN); 
    EndDrawing();
}

void InizioDraw(){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Per Uscire premi il tasto X", 90, 30, 17, GREEN);
    DrawText("Per Ingrandire lo schermo premi il tasto F",50,50,10,GREEN);
    DrawText("Premi ENTER per iniziare",80,70,17,GREEN);
    EndDrawing();
}
    

int main(){
    const int AltSchermo = 1366;
    const int LargSchermo = 768;
    int Xpos = 20,Ypos = 20;
    const float Cradius = 15;
    InitWindow(AltSchermo,LargSchermo,"The Moving - A game");
    
    SetTargetFPS(60);
    HideCursor();
    
    while(!WindowShouldClose()){
        InizioDraw();
        if(IsKeyDown(KEY_ENTER)==true){
          menu:if(IsKeyDown(KEY_W)==true){
                if(Ypos>20){
                    Ypos-=5;
                }
                ChDraw(Xpos,Ypos,Cradius);
                goto menu;
            }
            else if(IsKeyDown(KEY_S)==true){
                Ypos+=5;
                ChDraw(Xpos,Ypos,Cradius);
                goto menu;
            }
            else if(IsKeyDown(KEY_A)==true){
                if(Ypos>20){
                    Xpos-=5;
                }
                ChDraw(Xpos,Ypos,Cradius);
                goto menu;
            }
            else if(IsKeyDown(KEY_D)==true){
                Xpos+=5;
                ChDraw(Xpos,Ypos,Cradius);
                goto menu;
            }
            else if(IsKeyDown(KEY_X)==true){
                exit(0);
            }
            else if(IsKeyDown(KEY_F)==true){
                ToggleFullscreen();
                goto menu;
            }
            else{
                ChDraw(Xpos,Ypos,Cradius);
                goto menu;
            }
        }
    }
    CloseWindow();
    
    return 0;
}