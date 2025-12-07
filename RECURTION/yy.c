#include <stdio.h>
#include <stdlib.h> // Required for exit()

// Global array to represent the board. Initialized with numbers 1-9.
char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

// Function to draw the board
void dboard(void) {
    // Clear the console for a cleaner display (works well on Linux/macOS)
    // For Windows, use system("cls"); if necessary, but it's less portable.
    // printf("\033[H\033[J"); // ANSI escape code to clear screen
    
    printf("\n\t  Tic-Tac-Toe\n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n");
    
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[0], board[1], board[2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[3], board[4], board[5]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[6], board[7], board[8]);
    printf("     |     |     \n");
}

// Function to check for a win or draw
// Returns: 1 for game over with a winner, 0 for game in progress, -1 for a draw
int checkwin() {
    // --- 1. Check Winning Combinations (Rows, Columns, and Diagonals) ---
    
    // Check Rows (0, 1, 2), (3, 4, 5), (6, 7, 8)
    for (int i = 0; i < 9; i += 3) {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2])
            return 1; // Winner
    }

    // Check Columns (0, 3, 6), (1, 4, 7), (2, 5, 8)
    for (int i = 0; i < 3; i++) {
        if (board[i] == board[i + 3] && board[i + 3] == board[i + 6])
            return 1; // Winner
    }
    
    // Check Diagonals
    if (board[0] == board[4] && board[4] == board[8]) // Top-left to bottom-right
        return 1;
    if (board[2] == board[4] && board[4] == board[6]) // Top-right to bottom-left
        return 1;

    // --- 2. Check for Draw ---
    // Count how many spots are still marked with numbers (not 'X' or 'O')
    int count = 0;
    for (int i = 0; i < 9; i++) {
        if (board[i] == 'X' || board[i] == 'O')
            count++;
    }
    
    if (count == 9)
        return -1; // Draw
        
    // --- 3. Game Still In Progress ---
    return 0;
}

int main() {
    int choice;
    int game_state; // 1: Win, 0: Running, -1: Draw
    char mark; // 'X' or 'O'
    int player = 1;

    do {
        // 1. Draw the board and set the current player's mark
        dboard();
        
        // Determine player and mark: (player % 2) will be 1 or 0, adding 1 makes it 2 or 1
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        // 2. Get Input
        printf("Player %d (%c), enter a number (1-9): ", player, mark);
        
        // Check if input is a valid integer
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer to prevent infinite loop
            while (getchar() != '\n');
            continue; 
        }

        // 3. Validate and Update Move
        // Subtract 1 because array indices are 0-8, but user input is 1-9
        int index = choice - 1; 

        // Check if the choice is valid (1-9) AND the spot is available (still a number)
        if (index >= 0 && index <= 8 && board[index] >= '1' && board[index] <= '9') {
            board[index] = mark; // Place the player's mark
        } else {
            printf("Invalid move. Position %d is already taken or does not exist.\n", choice);
            player--; // Decrement player number to give the same player another turn
        }

        // 4. Check Game Status
        game_state = checkwin();
        
        // 5. Switch to the next player
        player++;

    } while (game_state == 0); // Loop until game_state is 1 (Win) or -1 (Draw)

    // --- Game Over ---
    dboard(); // Display final board
    
    if (game_state == 1)
        printf("==> Player %d (%c) wins! Congratulations!\n", --player, mark);
    else
        printf("==> Game is a draw.\n");

    return 0;
}