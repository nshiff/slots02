
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

void runTestSuite(void){
    printf("running unit test suite...");
    test_getPseudorandomIntegerForWheel();
    printf(" done\n");
}
