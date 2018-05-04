
#include "test/suite.h"

void initPsuedorandomness(void){
    time_t t;
	srand((unsigned) time(&t));
}

int main(int argc, char *argv[]){
	runTestSuite();
    initPsuedorandomness();

	char a = getPrintableWheelSymbolByInteger(getPseudorandomIntegerForWheel());
	char b = getPrintableWheelSymbolByInteger(getPseudorandomIntegerForWheel());
	char c = getPrintableWheelSymbolByInteger(getPseudorandomIntegerForWheel());

	printf("%c %c %c\n", a, b, c);
	printf("%s\n", getMessageForVisibleSymbols(a, b, c));

    return(0);
}