#include "Identifiers.h"

State Mode;
Uis Main_Menu;
Numbers Grid;
Calculations Output;
Result Box;


int main()
{
    Grid.designating_box();
    // Initiate Window.
    InitWindow(screenWidth, screenHeight, "Test_1");
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        Mode.selection();
        if(Mode.state == 0)
        {
            Main_Menu.uis();
            Grid.draws();
            Grid.registering_number();
            Box.designating_output_box();
            Box.draw();
            Output.determinant();
        }
        EndDrawing();
    }
}