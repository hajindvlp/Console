#include "Map.h"

void MapInit() {
}

int MapSelect() {

    int selected = 0;

    while(1) {
        if(MapUpdate(&selected))
            return 1;
        MapRender(selected);
    }
}

int MapUpdate(int* selected) {
    if(kp(VK_RIGHT) && (*selected)+1 < 5) { //left
        (*selected)++;
        MapRender((*selected));
    } else if(kp(VK_LEFT) && (*selected)-1 >= 0) {  // right 
        (*selected)--;
        MapRender((*selected));
    } else if(kp(VK_RETURN)) {
        startBattle(*selected);
    } else if(kp('I')) {
        return 1;
    } else if(GMX() >= 12 && GMX() <= 98 && GMY() >= 14 && GMY() <= 47 && kp(VK_LBUTTON)) {
        return 1;
    }
    return 0;
}

void MapRender(int selected) {

    PI(0, 0, 800, 450, MenuMapDC);
    /*
    int oldX, oldY, X, Y;

    X = GMX();
    Y = GMY();
    if(X!=oldX && Y!=oldY) {
        PI(0, 0, 800, 450, MapDC);
        PT(X+23, Y+28, 69, 56, SelectedBraketDC);
        oldX = X, oldY = Y;
    }
    */
}

void startBattle(int selected) {
    BattleMain(selected);
}