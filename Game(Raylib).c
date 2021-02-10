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
/*TO-DO:
    -Pausa
    -Labirinto
    -Sistemare menù iniziale
*/
int ChDraw(int Xpos, int Ypos){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawRectangle(Xpos,Ypos,40,40,GREEN); 
    DrawText(TextFormat("Xpos: %d \nYpos: %d",Xpos,Ypos),Xpos+10,Ypos+10,10,GREEN);   
    DrawRectangle(20,120,40,455,RED);
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
    
    const int AltSchermo = 800;
    const int LargSchermo = 600;
    int Xpos = 20,Ypos = 20;
    /*bool pause = false;
    bool collision = false;         // Collision detection
    Rectangle Player = { Xpos,Ypos,40,40 };
    Rectangle Ostacoli = {90,30,650,40};*/
    InitWindow(AltSchermo,LargSchermo,"The Moving - A game");
    SetTargetFPS(60);
    
    while(!WindowShouldClose()){
        InizioDraw();
    menu:if(IsKeyDown(KEY_W)==true){
            if(Ypos>20){
                    Ypos-=5;
               }
                ChDraw(Xpos,Ypos);
                //DrawRectangleRec(Ostacoli, BLUE);
                EndDrawing();
                goto menu;
            }
        else if(IsKeyDown(KEY_S)==true){
                if(Ypos>=575){
                    
                    ChDraw(Xpos,Ypos);
                }
                else{ 
                    Ypos+=5;
                    ChDraw(Xpos,Ypos);
                }
                goto menu;
            }
        else if(IsKeyDown(KEY_A)==true){
                if(Xpos>20){
                    Xpos-=5;
                }
                ChDraw(Xpos,Ypos);
                goto menu;
            }
        else if(IsKeyDown(KEY_D)==true){
                if(Xpos>=775){
                    ChDraw(Xpos,Ypos); 
                }
                else{
                    Xpos+=5;
                    ChDraw(Xpos,Ypos);
                }
                goto menu;
            }
        else if(IsKeyDown(KEY_X)==true){
                CloseWindow();
            }
        else if(IsKeyDown(KEY_F)==true){
                MaximizeWindow();
                goto menu;
            }
        else{
                ChDraw(Xpos,Ypos);
                goto menu;
            }
    }
    CloseWindow();
    
    return 0;
    }
    
    
   /*menu:BeginDrawing();
        ClearBackground(BLACK);
        DrawText(TextFormat("Box position Y: %03i", Xpos),150,70,17,GREEN); 
        EndDrawing();
        // Pause Box A movement
        if (IsKeyPressed(KEY_P)) pause = !pause;
        if(!pause){*/
