#include "space_invaders.h"

//INVADERS
#define WING 219
#define RAER 223
#define FRONT 220
#define MIDDLE_FRONT 219
#define INVADER_COLOR 30

typedef struct i_part {
    int x, y, previous_X, previous_y, life, bullets;
    char appearance;
}invader_part;

typedef struct i_body{
    int x, y, previous_X, previous_y;
    invader_part wing_l, wing_r, rear_l, rear_m, rear_r,
                 front_l, front_m, front_r;
}invader;

//PROTOTIPADO INVADERS
invader partsInvaderLocation(invader);
invader invaderCeation(invader);
invader invaderCeation(invader);
void printInvader(invader);

invader partsInvaderLocation(invader i) {
    i.wing_l.x = 0;
    i.wing_l.y = 1;
    i.wing_r.x = 4;
    i.wing_r.y = 1;
    i.rear_l.x = 1;
    i.rear_l.y = 1;
    i.rear_m.x = 2;
    i.rear_m.y = 1;
    i.rear_r.x = 3;
    i.rear_r.y = 1;
    i.front_l.x = 1;
    i.front_l.y = 0;
    i.front_m.x = 2;
    i.front_m.y = 0;
    i.front_r.x = 3;
    i.front_r.y = 0;
    
    return i;
}

invader invadersAppearanceOfParts(invader i) {
    i.wing_l.appearance = WING;
    i.wing_r.appearance = WING;
    i.rear_l.appearance = RAER;
    i.rear_m.appearance = RAER;
    i.rear_r.appearance = RAER;
    i.front_l.appearance = FRONT;
    i.front_m.appearance = MIDDLE_FRONT;
    i.front_r.appearance = FRONT;

    return i;
}

invader invaderCeation(invader i) {
    i.x = 5;
    i.y = 5;
    i = partsInvaderLocation(i);
    i = invadersAppearanceOfParts(i);
    
    return i;
}

/*i.wing_l.x = 0;
    i.wing_l.y = 1;
    i.wing_r.x = 4;
    i.wing_r.y = 1;
    i.rear_l.x = 1;
    i.rear_l.y = 1;
    i.rear_m.x = 2;
    i.rear_m.y = 1;
    i.rear_r.x = 3;
    i.rear_r.y = 1;
    i.front_l.x = 1;
    i.front_l.y = 0;
    i.front_m.x = 2;
    i.front_m.y = 0;
    i.front_r.x = 3;
    i.front_r.y = 0;*/

void printInvader(invader i) {
    i = invaderCeation(i);
    
    print(i.front_l.x + i.x, i.front_l.y + i.y,
          INVADER_COLOR,i.front_l.appearance);
    print(i.front_m.x + i.x, i.front_m.y + i.y,
          INVADER_COLOR,i.front_m.appearance);
    print(i.front_r.x + i.x, i.front_r.y + i.y,
          INVADER_COLOR,i.front_r.appearance);
    
    print(i.wing_l.x + i.x, i.wing_l.y + i.y,
          INVADER_COLOR,i.wing_l.appearance);
    print(i.rear_l.x + i.x, i.rear_l.y + i.y,
          INVADER_COLOR,i.rear_l.appearance);
    print(i.rear_m.x + i.x, i.rear_m.y + i.y,
          INVADER_COLOR,i.rear_m.appearance);
    print(i.rear_r.x + i.x, i.rear_r.y + i.y,
          INVADER_COLOR,i.rear_r.appearance);
    print(i.wing_r.x + i.x, i.wing_r.y + i.y,
          INVADER_COLOR,i.wing_r.appearance);
}