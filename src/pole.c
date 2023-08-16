#include <stdio.h>
#include <stdlib.h>
#define LENGHT 80
#define HEIGHT 30 
void create(int ** pole);
void print(int ** pole);
void freearr(int ** pole);
void add_zm(int ** pole, int x, int y, int napr);
int main()
{
    int ** pole = (int **)malloc(HEIGHT*sizeof(int*));
    create(pole);
    add_zm(pole, 30, 15, -1);
    print(pole);
    freearr(pole);
}
void create(int ** pole){
    for(int i = 0; i < HEIGHT; i++)
    {
        pole[i] = (int*)malloc(LENGHT*sizeof(int));
    }
    for(int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < LENGHT; j++)
        {
            pole[i][j] = 0;
        }
    }
}
void print(int ** pole){
    for(int i = 0; i < HEIGHT; i++)
    {
        for(int j = 0; j < LENGHT; j++){
            if(pole[i][j] == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void freearr(int ** pole){
    for(int i = 0; i < HEIGHT; i++){
        free(pole[i]);
    }
    free(pole);
}
void add_zm(int ** pole, int x, int y, int napr)
{
    for(int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < LENGHT; j++)
        {
            if (x == j && y == i){
                pole[i][j] = 1;
                if (napr == 1){
                    pole[i+1][j] = 1;
                    pole[i+2][j] = 1;
                }
                else if(napr == -1){
                    pole[i-1][j] = 1;
                    pole[i-2][j] = 1;
                }
                else if(napr == 2){
                    pole[i][j-1] = 1;
                    pole[i][j-2] = 1;
                }
                else if(napr == -2){
                    pole[i][j+1] = 1;
                    pole[i][j+2] = 1;
                }
            }
        }
    }
}