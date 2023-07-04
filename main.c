#include "stdio.h"

/*
int board[25] = {
    :,:,:,:,:,
    :,O,-,X,:,
    :,X,-,-,:,
    :,-,-,-,:,
    :,:,:,:,:,
}
*/

static const int NOUGHTS = 1; // O
static const int CROSSES = 2; // X
static const int BORDER = 3;  // :
static const int EMPTY = 0;   // -

// convert 25 spaces (board with borders) to 3x3 board
static const int ConvertTo25[9] = {
    6, 7, 8,
    11, 12, 13,
    16, 17, 18};

void InitialiseBoard(int *board)
{

    for (int i = 0; i < 25; ++i)
    {
        board[i] = BORDER;
    }

    for (int i = 0; i < 9; ++i)
    {
        board[ConvertTo25[i]] = EMPTY;
    }
}

void PrintBoard(const int *board)
{
    int i = 0;
    printf("\nBoard:\n");
    for (i = 0; i < 25; ++i)
    {
        if (i != 0 && i % 5 == 0)
        {
            printf("\n");
        }
        printf("%4d", board[i]);
    }
    printf("\n");
}

int main()
{

    int board[25];
    InitialiseBoard(&board[0]);
    board[ConvertTo25[0]] = CROSSES; // just an example
    PrintBoard(&board[0]);

    return 0;
}