#include "space_invaders.h"

//INVADERS
#define APPEARENCE 219
#define INVADER_COLOR 31
#define INVADER_COLOR_SPECIAL 29
#define INVADER_PARTS 22
#define INVADER_ARMY 16

typedef int x_directon[INVADER_PARTS];

typedef struct i_body{
    int x, y, previous_X, previous_y, life, bullets, color;
    char appearance;
    x_directon x_direction_part_invader;
}invader;

typedef invader invader_army[INVADER_ARMY];

//PROTOTIPADO INVADERS
invader createInvader(int , int, invader);
void printInvaders(invader);

invader createInvader(int x, int y, invader inv) {
      int d[INVADER_PARTS] = {4,5,2,3,4,5,6,7,0,1,2,3,4,5,6,7,8,9,0,1,8,9};

      int i, n;
      for(i = 0; i < INVADER_PARTS; i ++) {
            inv.x_direction_part_invader[i] = d[i] + x;
      }

      inv.x = x;
      inv.y = y;
      inv.appearance = APPEARENCE;
      

      //existe una 20% de probabilidad de que se genere un invader especial
      n = randomNumber();
      if (n == 5 || n == 6) {
            inv.bullets = 10;
            inv.life = 10;
            inv.color = INVADER_COLOR_SPECIAL;
      }
      else {
            inv.bullets = 5;
            inv.life = 5;
            inv.color = INVADER_COLOR;
      }

      return inv;
}

void printInvaders(invader inv) {
      int i;
      int x = 0;
      int y = inv.y;

      for(i = 0; i < INVADER_PARTS; i++) {
            if(inv.x_direction_part_invader[i] < x) {
                  y += 1;
            }
            x = inv.x_direction_part_invader[i];
            print(x, y, inv.color, inv.appearance);
      }
}