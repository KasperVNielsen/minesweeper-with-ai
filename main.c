#include<stdlib.h>
#include <stdio.h>
#include <string.h>

char board[30][16];

void drawBoard(char board[30][16]) {
    for (int r = 0; r < 30; r++) {
        for (int c = 0; c < 16; c++)
            printf("| %c ", board[r][c]); 
        printf("|\n");                     
    }
}

//99 mines
void mineLogic(){}

int main(){
    memset(board, '_', sizeof(board));
    drawBoard(board);
}