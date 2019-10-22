#ifndef MAP_H
#define MAP_H

#include <stdio.h>
#include "Gang.h"
#include "Battle.h"
#include "Utility.h"
#include "Upgrade.h"

HDC MapDC;

typedef struct {
    char name;
    int MapX;
    int MapY;
    Gang enemy;
} Country;

typedef struct {
    int countriesNum;
    Country countries[10];
} Map;

Map map;

HDC MapDC, SelectedBraketDC;
HBITMAP MapMap, SelectedBraketMap;

void MapInit();
int MapSelect();
int MapUpdate();
void MapRender(int selected);
void startBattle(int selected);

#endif