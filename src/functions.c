#include "main.h"

int main(){
    int mom = 0;
    printf("%d\n", Xrand(0));
    printf("%d\n", Yrand(0));
    movm(&mom);
    printf("%d\n", mom);
}

int Xrand(int headX){
    srand(time(NULL));
    headX = (rand() % (X - 1 + 1)) + 1;
    return headX;
}

int Yrand(int headY){
    srand(time(NULL));
    headY = (rand() % (Y - 1 + 1)) + 1;
    return headY;
}
void  movm(int *mom){
    srand(time(NULL));
    *mom = (rand() % (5 - 1 + 1)) + 1;
}

int Xeat(){
    int eatX = 0;
    srand(time(NULL));
    eatX = (rand() % (X - 1 + 1)) + 1;
    return eatX;
}

int Yeat(){
    int eatY = 0;
    srand(time(NULL));
    eatY = (rand() % (X - 1 + 1)) + 1;
    return eatY;
}