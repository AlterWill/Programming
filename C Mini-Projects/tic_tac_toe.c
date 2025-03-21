#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tic_tac_toe_box(char array[3][3]){
    printf(" %c | %c | %c\n",array[0][0],array[0][1],array[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n",array[1][0],array[1][1],array[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n",array[2][0],array[2][1],array[2][2]);
}

void display_tic_tac_toe_box(){
    printf(" 1 | 2 | 3 \n");
    printf("---+---+---\n");
    printf(" 4 | 5 | 6 \n");
    printf("---+---+---\n");
    printf(" 7 | 8 | 9 \n");
}

int random_move() {
    return (rand() % 9)+1; // Generate a number between 0 and 8
}

void player_move(char array[3][3]){
    int d;
    while (1){
        printf("Enter your choice:");
        scanf("%d",&d);
        if (d<=3 && d>=1){
            if (array[0][d-1]==' '){
                array[0][d-1]='X';
                break;
            }else{
                printf("The box is full\n");
            }
        }else if (d<=6 && d>=4){
            if (array[1][d-4]==' '){
                array[1][d-4]='X';
                break;
            }else{
                printf("The box is full\n");
            }
        }else if (d<=9 && d>=7){
            if (array[2][d-7]==' '){
                array[2][d-7]='X';
                break;
            }else{
                printf("The box is full\n");
            }
        }else{
            printf("Wrong output");
        }
    }
}

void computer_move(char array[3][3]){
    int d;
    while(1){
        d=random_move();
        if (d<=3 && d>=1){
            if (array[0][d-1]==' '){
                array[0][d-1]='O';
                break;
            }
        }else if (d<=6 && d>=4){
            if (array[1][d-4]==' '){
                array[1][d-4]='O';
                break;
            }
        }else if (d<=9 && d>=7){
            if (array[2][d-7]==' '){
                array[2][d-7]='O';
                break;
            }
        }
    }
    printf("The computer played on %d\n",d);
    tic_tac_toe_box(array);
}

void who_wins(char array[3][3]){
    if (array[0][0]==array[0][1] && array[0][2]==array[0][1] && (array[0][0]=='X' || array[0][0]=='O')){
        if (array[0][0]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
    if (array[1][0]==array[1][1] && array[1][2]==array[1][1] && (array[1][0]=='X' || array[1][0]=='O')){
        if (array[1][0]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
    if (array[2][0]==array[2][1] && array[2][2]==array[2][1] && (array[2][0]=='X' || array[2][0]=='O')){
        if (array[2][0]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
    if (array[0][0]==array[1][0] && array[1][0]==array[2][0] && (array[0][0]=='X' || array[0][0]=='O')){
        if (array[0][0]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
    if (array[0][1]==array[1][1] && array[1][1]==array[2][1] && (array[0][1]=='X' || array[0][1]=='O')){
        if (array[0][1]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
    if (array[0][2]==array[1][2] && array[1][2]==array[2][2] && (array[0][2]=='X' || array[0][2]=='O')){
        if (array[0][2]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
    if (array[0][0]==array[1][1] && array[1][1]==array[2][2] && (array[0][0]=='X' || array[0][0]=='O')){
        if (array[0][0]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
    if (array[0][2]==array[1][1] && array[1][1]==array[2][0] && (array[0][2]=='X' || array[0][2]=='O')){
        if (array[0][2]=='X'){
            printf("Player wins\n");
        }else{
            printf("Computer wins\n");
        }
    }
}

int win_condition(char array[3][3]){
    if (array[0][0]==array[0][1] && array[0][2]==array[0][1] && (array[0][0]=='X' || array[0][0]=='O')){
        return 1;
    }
    if (array[1][0]==array[1][1] && array[1][2]==array[1][1] && (array[1][0]=='X' || array[1][0]=='O')){
        return 1;
    }
    if (array[2][0]==array[2][1] && array[2][2]==array[2][1] && (array[2][0]=='X' || array[2][0]=='O')){
        return 1;
    }
    if (array[0][0]==array[1][0] && array[1][0]==array[2][0] && (array[0][0]=='X' || array[0][0]=='O')){
        return 1;
    }
    if (array[0][1]==array[1][1] && array[1][1]==array[2][1] && (array[0][1]=='X' || array[0][1]=='O')){
        return 1;
    }
    if (array[0][2]==array[1][2] && array[1][2]==array[2][2] && (array[0][2]=='X' || array[0][2]=='O')){
        return 1;
    }
    if (array[0][0]==array[1][1] && array[1][1]==array[2][2] && (array[0][0]=='X' || array[0][0]=='O')){
        return 1;
    }
    if (array[0][2]==array[1][1] && array[1][1]==array[2][0] && (array[0][2]=='X' || array[0][2]=='O')){
        return 1;
    }
    return 0;
}

void main(){
    int a=0,moves=0;
    char array[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    srand(time(NULL));
    printf("========================================\n");
    printf("      Welcome to Tic-Tac-Toe!\n");
    printf("========================================\n\n");
    
    printf("Rules:\n");
    printf("1. The game is played on a 3x3 grid.\n");
    printf("2. You are 'X' and the computer (or another player) is 'O'.\n");
    printf("3. Players take turns placing their marks in empty boxes.\n");
    printf("4. The first player to get 3 marks in a row, column, or diagonal wins.\n");
    printf("5. If all 9 boxes are filled and no player has won, it's a draw.\n\n");
    printf("Board Positions:\n");
    while (a==0 && moves<9){
        display_tic_tac_toe_box();
        player_move(array);
        moves++;
        a=win_condition(array);
        if (a==1 || moves==9){
            who_wins(array);
            break;
        }
        computer_move(array);
        moves++;
        a=win_condition(array);
        if (a==1 || moves==9){
            who_wins(array);
            break;
        }
    }
    printf("The final board\n");
    tic_tac_toe_box(array);
}