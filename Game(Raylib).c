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

int main(){
    const int AltSchermo = 800;
    const int LargSchermo = 300;
    InitWindow(AltSchermo,LargSchermo,"The Moving - A game");
    SetTargetFPS(60);
    
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Per Uscire premi il tasto X", 60, 50, 17, GREEN);
        DrawText("Per Ingrandire lo schermo premi il tasto F",50,50,10,GREEN);
        EndDrawing();
      
        menu:if(IsKeyDown(KEY_W)==true){
            BeginDrawing();
            ClearBackground(BLACK);
            
            DrawText("Stai premendo il tasto W ", 190, 200, 20, GREEN);
            
            EndDrawing();
            goto menu;
        }
        else if(IsKeyDown(KEY_S)==true){
            BeginDrawing();
            ClearBackground(BLACK);
            
            DrawText("Stai premendo il tasto S ", 190, 200, 20, GREEN);
            
            EndDrawing();
            goto menu;
        }
        else if(IsKeyDown(KEY_A)==true){
            BeginDrawing();
            ClearBackground(BLACK);
            
            DrawText("Stai premendo il tasto A ", 190, 200, 20, GREEN);
            
            EndDrawing();
            goto menu;
        }
        else if(IsKeyDown(KEY_D)==true){
            BeginDrawing();
            ClearBackground(BLACK);
            
            DrawText("Stai premendo il tasto D", 190, 200, 20, GREEN);
            
            EndDrawing();
            goto menu;
        }
        else if(IsKeyDown(KEY_X)==true){
            exit(0);
        }
        else if(IsKeyDown(KEY_F)==true){
            ToggleFullscreen();
        }
        else{
            BeginDrawing();
            
            DrawText("Non Stai premendo nessun tasto ", 190, 200, 20, GREEN);
            
            EndDrawing();
            goto menu;
        } 
    }
    CloseWindow();
    
    return 0;
}