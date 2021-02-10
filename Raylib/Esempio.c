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
#include <stdlib.h>     // Required for abs()

int ChDraw(int Xpos, int Ypos, Rectangle rec){
    BeginDrawing();
    ClearBackground(BLACK);
    boxB.x=
    DrawText(TextFormat("Xpos: %d \nYpos: %d",Xpos,Ypos),Xpos+10,Ypos+10,10,GREEN);   
    DrawRectangle(20,120,40,455,RED);
}

int main(void)
{
    // Initialization
    //---------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [shapes] example - collision area");

    // Box A: Moving box
    Rectangle boxA = { 10, GetScreenHeight()/2 - 50, 200, 100 };
    int boxASpeedX = 4;

    // Box B: Mouse moved box
    Rectangle boxB = { GetScreenWidth()/2 - 30, GetScreenHeight()/2 - 30, 60, 60 };

    Rectangle boxCollision = { 0 }; // Collision rectangle

    int screenUpperLimit = 40;      // Top menu limits

    bool pause = false;             // Movement pause
    bool collision = false;         // Collision detection

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

    while (!WindowShouldClose())    
    {
        
        boxB.x = GetMouseX() - boxB.width/2;
        boxB.y = GetMouseY() - boxB.height/2;

        // Check boxes collision
        collision = CheckCollisionRecs(boxA, boxB);

        // Get collision rectangle (only on collision)
        if (collision) boxCollision = GetCollisionRec(boxA, boxB);

        
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawRectangle(0, 0, screenWidth, screenUpperLimit, collision? RED : BLACK);
                
            DrawRectangleRec(boxA, GOLD);
            DrawRectangleRec(boxB, BLUE);

            if (collision)
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