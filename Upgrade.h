#ifndef UPGRADE_H
#define UPGRADE_H

#include <stdio.h>
#include <conio.h>

#include "Player.h"
#include "Battle.h"

int UpgradeSelect();
int UpgradeUpdate(int *selected);
void UpgradeRender(int selected);

int x, y;

#endif