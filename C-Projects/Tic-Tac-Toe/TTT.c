// Include necessary header files
#include <stdio.h>      // For input/output operations
#include <stdlib.h>     // For random number generation
#include <ctype.h>      // For character type checking
#include <time.h>       // For time-based random seed

// Global variables for the game board and player symbols
char board[3][3];                  // 3x3 game board array
const char PLAYER = 'X';           // Symbol for human player
const char COMPUTER = 'O';         // Symbol for computer player

// Function declarations
void resetBoard();                 // Initialize/reset the game board
void printBoard();                 // Display current game board state
int checkFreeSpaces();            // Count remaining empty spaces
void playerMove();                // Handle human player's move
void computerMove(void);          // Handle computer's move
char checkWinner(void);           // Check if there's a winner
void printWinner(char winner);    // Display game result

int main(void)
{
    char winner = ' ';            // Track game winner (X, O, or space for tie)

    resetBoard();                 // Initialize empty game board

    // Main game loop - continue while no winner and spaces remain
    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        // Display current board state
        printBoard();

        // Handle player's turn
        playerMove();
        winner = checkWinner();

        // Check if game is over after player's move
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }

        // Handle computer's turn
        computerMove();
        winner = checkWinner();

        // Check if game is over after computer's move
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }

    // Display final board state and announce winner
    printBoard();
    printWinner(winner);

    return 0;
}

void resetBoard()
{
    // Initialize all board positions to empty spaces
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    // Display the game board with current state
    printf("\n");                 // Add spacing for better readability
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);    // First row
    printf("\n---|---|---\n");    // Separator
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);    // Second row
    printf("\n---|---|---\n");    // Separator
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);    // Third row
    printf("\n\n");               // Add spacing for better readability
}

int checkFreeSpaces()
{
    int freeSpaces = 9;          // Start with maximum possible spaces

    // Count occupied spaces and subtract from total
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove()
{
    int x;                      // Row coordinate
    int y;                      // Column coordinate

    do
    {
        // Get player input for move coordinates
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;                    // Convert to 0-based index

        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;                    // Convert to 0-based index

        // Validate move and place symbol if valid
        if (x < 0 || x > 2 || y < 0 || y > 2)
        {
            printf("Invalid coordinates! Please enter numbers between 1 and 3.\n");
        }
        else if (board[x][y] != ' ')
        {
            printf("That space is already taken!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (1);               // Continue until valid move is made
}

void computerMove()
{
    srand(time(NULL));         // Initialize random seed with current time
    int x;                     // Row coordinate
    int y;                     // Column coordinate

    // Make move if spaces are available
    if (checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;    // Generate random row (0-2)
            y = rand() % 3;    // Generate random column (0-2)
        } while (board[x][y] != ' ');  // Repeat if space is occupied

        board[x][y] = COMPUTER;
        printf("Computer placed 'O' in position [%d,%d]\n", x + 1, y + 1);
    }
    else
    {
        printWinner(' ');      // Game is a tie
    }
}

char checkWinner()
{
    // Check rows for winner
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }

    // Check columns for winner
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
    }

    // Check diagonal from top-left to bottom-right
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }

    // Check diagonal from top-right to bottom-left
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }

    return ' ';               // No winner yet
}

void printWinner(char winner)
{
    // Announce game result
    if (winner == PLAYER)
    {
        printf("Congratulations! You win!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("Computer wins! Better luck next time!\n");
    }
    else
    {
        printf("It's a tie! Good game!\n");
    }
}