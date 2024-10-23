# include<stdio.h>
# include<stdlib.h>
# include<time.h>
# include "Function_Declaration.h"
#define SIZE 4

int board[SIZE][SIZE];
int score = 0;

int main(void)
{
    char command;
    init_game();
    print_grid();
    while (1)
    {
        scanf(" %c", &command);
        switch (command)
        {
        case 'w':
            move_up();
            break;
        case 'a':
            move_left();
            break;
        case 's':
            move_down();
            break;
        case 'd':
            move_right();
            break;
        }
        add_new_number();
        print_grid();
        if (check_game_over())
        {
            printf("Game Over! Your score is %d\n", score);
            break;
        }
    }
    return 0;
}