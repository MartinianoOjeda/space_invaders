#include "invaders.h"

int main() {
    
    invader inv; 
    int x = 5, y = 2, i;
    system("cls");
    for(i = 0; i < INVADER_ARMY; i ++) {
        inv = createInvader(x, y, inv);
        Sleep(2000);
        printInvaders(inv);
        x += 12;
        if(i == ((INVADER_ARMY/2)-1)) {
            y += 5;
            x = 5;
        }
    }
    

    printf("\n\n");
    system("pause");

    return 0;
}