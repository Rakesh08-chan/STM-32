#include <stdint.h>
int main(void)
{
	uint32_t a;
	__asm volatile (
			"MRS R0,CONTROL \n\t"
			:"=r"(a)
			);
	for(;;);
}
