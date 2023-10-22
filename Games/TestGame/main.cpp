#include <iostream>

#include "raylib.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    InitWindow( 1280, 720, "Dan's Test Game" );

    while( !WindowShouldClose() )
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        
        EndDrawing();
    }

    CloseWindow();
}
l
