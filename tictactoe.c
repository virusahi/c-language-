#include <stdio.h>

char board[3][3];

// Initialize the board with empty spaces
void initBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// Display the board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Check if a player has won
char checkWinner() {
    for (int i = 0; i < 3; i++) {
        // Check rows and columns
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];
    return ' ';
}

// Main function
int main() {
    int row, col, moves = 0;
    char player = 'X', winner = ' ';

    initBoard();
    printf("🎮 Tic-Tac-Toe (2 Players)\n");

    while (moves < 9 && winner == ' ') {
        displayBoard();
        printf("Player %c, enter row and column (0-2): ", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row][col] = player;
        moves++;
        winner = checkWinner();

        // Switch player
        if (player == 'X') player = 'O';
        else player = 'X';
    }

    displayBoard();
    if (winner != ' ')
        printf("🏆 Player %c wins!\n", winner);
    else
        printf("🤝 It's a tie!\n");

    return 0;
}
