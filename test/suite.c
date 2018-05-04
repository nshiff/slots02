
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
    assert(SYMBOL_BELL == getPrintableWheelSymbolByInteger(2));
    assert(SYMBOL_CHERRY == getPrintableWheelSymbolByInteger(3));
}

void test_getWheelSymbolByInteger_InvalidInput(void){
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(-1));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(4));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(5));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(9999));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(INT_MAX));
    assert(SYMBOL_MISS == getPrintableWheelSymbolByInteger(INT_MIN));

}

void runTestSuite(void){
    printf("running unit test suite...");
    test_getPseudorandomIntegerForWheel();
    test_getWheelSymbolByInteger();
    test_getWheelSymbolByInteger_InvalidInput();
    printf(" done\n");
}
