#include <camkes.h>
#include <stdio.h>
int run(void) {
	int a = 0;
  	asm volatile (
  		"int3;"
	);
  	printf("Going to touch some memory at %p\n", &a);
  	a = 5;
  	printf("Touched some memory\n");
	return 0;
}
