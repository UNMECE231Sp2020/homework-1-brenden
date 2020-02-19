#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex (*hdlr1[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*hdlr2[2])(Complex) = {phase, magnitude};

	int i;
	for(i=0; i<4; i++){
		hdlr1[i](a, b);
	}

	int j;
	for(j=0; j<2; j++){
		hdlr2[j](a);
		hdlr2[j](b);
	}

	return 0;
}
