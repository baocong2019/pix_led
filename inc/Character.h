#ifndef CHARACTER_H
#define CHARACTER_H

#include "../inc/Config.h"
#include "../inc/Function.h"
#include "Cnfont.h"


void showCharacter(int char_x, int char_y, int c, int charfont);
void characterTest();
void setSlipStrLen(char *str, int len);
void showStringSlip(int char_x, int char_y, char *str, int len);
void strsliptest();

#endif // CHARACTER_H