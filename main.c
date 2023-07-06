#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

/*
int board[25] = {
    :,:,:,:,:,
    :,O,-,X,:,
    :,X,-,-,:,
    :,-,-,-,:,
    :,:,:,:,:,
}
*/

static const int NOUGHTS = 0; // O
static const int CROSSES = 1; // X
static const int BORDER = 2;  // :
static const int EMPTY = 3;   // -

static const int HUMANWIN = 0;
static const int COMPWIN = 1;
static const int DRAW = 2;

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
    char pceChars[] = "OX|-";
    printf("\n\nBoard:\n\n");
    for (i = 0; i < 9; ++i)
    {
        if (i != 0 && i % 3 == 0)
        {
            printf("\n\n");
        }
        printf("%4c", pceChars[board[ConvertTo25[i]]]);
    }
    printf("\n");
}

int HasEmpty(const int *board)
{
    int i = 0;

    for (i = 0; i < 9; ++i)
    {
        if (board[ConvertTo25[i]] == EMPTY)
            return 1;
    }
    return 0;
}

void MakeMove(int *board, const int sq, const side)
{
    board[sq] = side;
}

void RunGame()
{

    int GameOver = 0;
    int Side = NOUGHTS;
    int LastMoveMade = 0;
    int board[25];

    InitialiseBoard(&board[0]);
    PrintBoard(&board[0]);

    while (!GameOver)
    {
        if (Side == NOUGHTS)
        {
            // get move from human, make move on board, change side
        }
        else
        {
            // get move from computer, make move on board, change side
            PrintBoard(&board[0]);
        }

        // if three in a row exists Game is over

        // if no more moves, game is a draw
    }
}

int main()
{

    srand(time(NULL));
    RunGame();

    return 0;
}