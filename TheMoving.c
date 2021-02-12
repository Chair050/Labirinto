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
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "The Moving");

    //Boxes That makes the labyrinth
    Rectangle boxA = { 100, 50, 200, 100 };
    Rectangle boxB = { 100, 200, 400, 110 };
    Rectangle boxC = { 200, 300, 210, 250 };
    Rectangle VictoryBox = {500, 400, 10, 10};

    // Box B: Mouse moved box
    Rectangle Box = {10, 10, 60, 60 };
    /*Roba Utile
    Rectangle NameRectangle = {Xpos ,Ypos ,Width,Height};
    DrawText(TextFormat("SCORE: %i", score), 280, 130, 40, MAROON);-->Per stampare come se fosse in un printf
    
    */
    bool collision = false;         // Collision detection
    bool victory = false;           //Victory Detection

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
   

    while (!WindowShouldClose())    
    {   
        if(!collision && !victory){
            if(IsKeyDown(KEY_W)){
                Box.y-=5;
            }
            else if(IsKeyDown(KEY_A)){
                Box.x-=5;
            }
            else if(IsKeyDown(KEY_D)){
                Box.x+=5;
            }
            else if(IsKeyDown(KEY_S)){
                Box.y+=5;
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
            victory = CheckCollisionRecs(VictoryBox,Box);
        }
        
        
        BeginDrawing();

            ClearBackground(RAYWHITE);

                
            DrawRectangleRec(boxA, GOLD);
            DrawRectangleRec(boxB, GREEN);
            DrawRectangleRec(boxC,BLACK);
            DrawRectangleRec(VictoryBox, BLUE);
            DrawRectangleRec(Box, BLUE);
            
            
            if(victory){
                DrawText("VICTORY!",300,220, 100, RED);
                if(IsKeyDown('X')){
                    EndDrawing();
                    CloseWindow();
                }
            }
            
            collision:if (collision)
            {
                DrawText("GAME OVER!",300,220, 40, BLACK);
                //DrawText("Press X")
                if(IsKeyDown('X')){
                    EndDrawing();
                    CloseWindow();
                }
                
            }
            

        EndDrawing();
    }
    CloseWindow();       
    

    return 0;
}