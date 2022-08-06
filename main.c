#include "invaders.h"

int main() {
    
    invader i; 
    system("cls");

    i = createInvader(5, 5, i);
    printInvaders(i);

    printf("\n\n");
    system("pause");

    return 0;
}