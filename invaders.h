#include "space_invaders.h"

//INVADERS
#define APPEARENCE 219
#define INVADER_COLOR 31
#define INVADER_PARTS 22
#define INVADER_ARMY 8

typedef int x_directon[INVADER_PARTS];

typedef struct i_body{
    int x, y, previous_X, previous_y, life, bullets;
    char appearance;
    x_directon x_direction_part_invader;
}invader;

typedef invader invader_army[INVADER_ARMY];

//PROTOTIPADO INVADERS
invader createInvader(int , int, invader);
invader createInvaderArmy(int , int, invader);
invader printInvaders(invader);

invader createInvader(int x, int y, invader inv) {
      int d[INVADER_PARTS] = {4,5,2,3,4,5,6,7,0,1,2,3,4,5,6,7,8,9,0,1,8,9};

      int i;
      for(i = 0; i < INVADER_PARTS; i ++) {
            inv.x_direction_part_invader[i] = d[i] + x;
      }

      inv.x = x;
      inv.y = y;
      inv.appearance = APPEARENCE;
      inv.bullets = 5;
      inv.life = 5;

      return inv;
}

invader createInvaderArmy(int x, int y, invader inv) {
      invader_army ia;
      int i, j;
      for(i = 0; i < INVADER_ARMY; i ++) {
            inv.x = x;
            ia[i] = inv;
      }

}

invader printInvaders(invader inv) {

      int i;
      int iy = 0;
      int n = 0;

      for(i = 0; i < 22; i ++) {
            if(inv.x_direction_part_invader[i] < n) {
                  iy += 1;
            }
            print(inv.x_direction_part_invader[i], iy + inv.x, INVADER_COLOR, APPEARENCE);
            
            n = inv.x_direction_part_invader[i];
      }

      return inv;
}