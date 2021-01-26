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

void InizioDraw(){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Per Uscire premi il tasto X", 90, 30, 17, GREEN);
    DrawText("Per Ingrandire lo schermo premi il tasto F",50,50,10,GREEN);
    //Ricordarsi di mettere EndDrawing(); alla fine
}

int main(){
    const int AltSchermo = 800;
    const int LargSchermo = 300;
    InitWindow(AltSchermo,LargSchermo,"The Moving - A game");
    SetTargetFPS(60);
    
    while(!WindowShouldClose()){
    menu:InizioDraw();
        if(IsKeyDown(KEY_W)==true){
            InizioDraw();
            DrawText("Stai premendo il tasto W ", 190, 200, 20, GREEN);
            EndDrawing();
            goto menu;
        }
        else if(IsKeyDown(KEY_S)==true){
            InizioDraw();
            DrawText("Stai premendo il tasto S ", 190, 200, 20, GREEN);
            EndDrawing();
            goto menu;
        }
        else if(IsKeyDown(KEY_A)==true){
            InizioDraw();
            DrawText("Stai premendo il tasto A ", 190, 200, 20, GREEN);
            EndDrawing();
            goto menu;
        }
        else if(IsKeyDown(KEY_D)==true){
            InizioDraw();
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
            InizioDraw();
            DrawText("Non Stai premendo nessun tasto ", 190, 200, 20, GREEN);
            EndDrawing();
            goto menu;
        }
    }
    CloseWindow();
    
    return 0;
}