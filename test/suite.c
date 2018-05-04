
#include "suite.h"

void test_getPseudorandomIntegerForWheel(void){
    srand(1234);

    assert(2 == getPseudorandomIntegerForWheel());
    assert(3 == getPseudorandomIntegerForWheel());
    assert(3 == getPseudorandomIntegerForWheel());
    assert(3 == getPseudorandomIntegerForWheel());

    assert(0 == getPseudorandomIntegerForWheel());
    assert(1 == getPseudorandomIntegerForWheel());
    assert(3 == getPseudorandomIntegerForWheel());
    assert(2 == getPseudorandomIntegerForWheel());
}

void test_getWheelSymbolByInteger(void){
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(0));
    assert(SYMBOL_JACKPOT == getPrintableWheelSymbolByInteger(1));

}

void test_getWheelSymbolByInteger_InvalidInput(void){
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(-1));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(2));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(3));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(4));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(5));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(9999));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(INT_MAX));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(INT_MIN));
}

void test_getMessageForVisibleSymbols(void){
    char *actualMessage = "";
    actualMessage = getMessageForVisibleSymbols(SYMBOL_JACKPOT, SYMBOL_JACKPOT, SYMBOL_JACKPOT);
    assert(0 == strcmp("Jackpot!", actualMessage));

    actualMessage = getMessageForVisibleSymbols(SYMBOL_MISS, SYMBOL_JACKPOT, SYMBOL_JACKPOT);
    assert(0 == strcmp("bust", actualMessage));

    actualMessage = getMessageForVisibleSymbols(SYMBOL_JACKPOT, SYMBOL_MISS, SYMBOL_JACKPOT);
    assert(0 == strcmp("bust", actualMessage));

    actualMessage = getMessageForVisibleSymbols(SYMBOL_JACKPOT, SYMBOL_JACKPOT, SYMBOL_MISS);
    assert(0 == strcmp("bust", actualMessage));

}

void runTestSuite(void){
    printf("running unit test suite...");
    test_getPseudorandomIntegerForWheel();
    test_getWheelSymbolByInteger();
    test_getWheelSymbolByInteger_InvalidInput();
    test_getMessageForVisibleSymbols();
    printf(" done\n");
}
