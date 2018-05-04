#ifndef SLOTMACHINE
#define SLOTMACHINE

#include "stdslots.h"

#define SYMBOL_MISS 'x'
#define SYMBOL_JACKPOT '7'
#define SYMBOL_BELL 'b'
#define SYMBOL_CHERRY 'c'

int getPseudorandomIntegerForWheel(void);
char getPrintableWheelSymbolByInteger(int);
char* getMessageForVisibleSymbols(char, char, char);

#endif