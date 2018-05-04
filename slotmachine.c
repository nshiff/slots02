#include "slotmachine.h"

int getPseudorandomIntegerForWheel(){
    return rand() % 4;
}

char getPrintableWheelSymbolByInteger(int valueAsInt){
    int numSymbols = 4;
    char wheelSymbols[] = {
        SYMBOL_MISS,
        SYMBOL_JACKPOT,
        SYMBOL_BELL,
        SYMBOL_CHERRY,
    };
    if(valueAsInt > -1 && valueAsInt < numSymbols){
        return wheelSymbols[valueAsInt];
    }
    return SYMBOL_MISS;
}
