#include "invaders.h"

int main() {
    
    invader inv; 
    invader_army army;
    int x = 5, y = 2, a = 0, i;

    system("cls");
    hideCursor();

    for(i = 0; i < INVADER_ARMY; i ++) {
        inv = createInvader(x, y, inv);
        
        army[a] = inv;
        a += 1;
        
        printInvaders(inv);
        x += 12;
        if(i == ((INVADER_ARMY/2)-1)) {
            y += 5;
            x = 5;
        }
    }
    x = 5, y = 2;
    inv = createInvader(x, y, inv);
    deletePreviousPositionInvaders(inv);
    

    printf("\n\n");
    system("pause");

    return 0;
}