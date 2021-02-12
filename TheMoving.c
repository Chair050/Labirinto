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
#include<stdio.h>

int main(void)
{
    const int screenWidth = 1000;
    const int screenHeight = 650;

    InitWindow(screenWidth, screenHeight, "The Moving");

    //Boxes That makes the labyrinth
    Rectangle boxA = { 65, 50, 30, 570 };
    Rectangle boxB = { 950, 50, 30, 570 };
    Rectangle boxC = { 65, 590, 915, 30 };
    Rectangle boxD = { 160, 50, 790, 30 };
    Rectangle boxE = { 160, 50, 30, 480 };
    Rectangle boxF = { 160, 500, 740, 30 };
    Rectangle boxG = { 870, 130, 30, 400 };
    
    Rectangle boxH = { 65, 50, 30, 570 };
    
    
    Rectangle boxI = { 65, 50, 30, 570 };
    Rectangle boxL = { 65, 50, 30, 570 };
    Rectangle boxM = { 65, 50, 30, 570 };

    Rectangle VictoryBox = {500, 400, 10, 10};

    // Box B: Mouse moved box
    Rectangle Box = {10, 10, 40, 40 };
    /*Roba Utile
    Rectangle NameRectangle = {Xpos ,Ypos ,Width,Height};
    DrawText(TextFormat("SCORE: %i", score), 280, 130, 40, MAROON);-->Per stampare come se fosse in un printf
    
    */
    bool collision = false;         // Collision detection
    bool victory = false;           //Victory Detection
    bool pause = false;             //Pause Detector
    
    int x=0,y=0;                        //For Movement
    
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
   

    while (!WindowShouldClose())    
    {   
        if(!collision && !victory && !pause){
            Box.x+=x;
            Box.y+=y;
            if(IsKeyReleased(KEY_W)){
                y=-3;
                x=0;
            }
            else if(IsKeyReleased(KEY_A)){
                x=-3;
                y=0;
            }
            else if(IsKeyPressed(KEY_D)){
                x=+3;
                y=0;
            }
            else if(IsKeyPressed(KEY_S)){
                y=+3;
                x=0;
            }
            else if(IsKeyPressed(KEY_P)){
                pause = !pause;
            }
        }
        
        // Check boxes collision
        if(!collision){
            collision = CheckCollisionRecs(boxA,Box);
            if(collision){
               goto collision;
            }
            collision = CheckCollisionRecs(boxB,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxC,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxD,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxE,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxF,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxG,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxH,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxI,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxL,Box);
            if(collision){
                goto collision;
            }
            collision = CheckCollisionRecs(boxM,Box);
            if(collision){
                goto collision;
            }
            victory = CheckCollisionRecs(VictoryBox,Box);
        }
        
        
        BeginDrawing();

            ClearBackground(RAYWHITE);

                
            DrawRectangleRec(boxA, GOLD);
            DrawRectangleRec(boxB, GOLD);
            DrawRectangleRec(boxC, GOLD);
            DrawRectangleRec(boxD, GOLD);
            DrawRectangleRec(boxE, GOLD);
            DrawRectangleRec(boxF, GOLD);
            DrawRectangleRec(boxG, GOLD);
            DrawRectangleRec(boxH, GREEN);
            /*
            
            
            DrawRectangleRec(VictoryBox, BLUE);
            */
            DrawRectangleRec(Box, BLUE);
            
            
            if(victory){
                DrawText("VICTORY!",400,280, 60, SKYBLUE);
                DrawText("Press X to Exit or Press M to play again",320,340, 20, SKYBLUE);
                if(IsKeyDown('X')){
                    EndDrawing();
                    CloseWindow();
                }
                
                else if(IsKeyDown('M')){
                    EndDrawing();
                    victory = !victory;
                    Box.x=10;
                    Box.y=10;
                }
            }
            
            collision:if (collision)
            {   
                
                DrawText("GAME OVER!",400,280, 40, RED);
                DrawText("Press X to Exit or Press M to play again",320,320, 20, RED);
                if(IsKeyDown('X')){
                    EndDrawing();
                    CloseWindow();
                }
                
                else if(IsKeyDown('M')){
                    EndDrawing();
                    collision = !collision;
                    Box.x=10;
                    Box.y=10;
                    y=0;
                    x=0;
                }
                
            }
            if(pause){
                DrawText("Game Paused",400,280, 40, GRAY);
                DrawText("Press X to return to the game",360,320, 20, GRAY);
                if(IsKeyDown('X')){
                    EndDrawing();
                    pause = !pause;
                }
            }

        EndDrawing();
    }
    CloseWindow();       
    

    return 0;
}