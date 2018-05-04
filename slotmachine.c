#include "slotmachine.h"

int getPseudorandomIntegerForWheel(){
    return rand() % 2;
}

char getPrintableWheelSymbolByInteger(int valueAsInt){
    int numSymbols = 2;
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

char* getMessageForVisibleSymbols(char a, char b, char c){
    bool isABust = SYMBOL_MISS == a;
    bool isBBust = SYMBOL_MISS == b;
    bool isCBust = SYMBOL_MISS == c;

    if(isABust || isBBust || isCBust){
        return "bust";
    }
    return "Jackpot!";
}
