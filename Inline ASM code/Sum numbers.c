#include <stdint.h>
int main(void)
{
	uint32_t N= 10;
	volatile uint32_t sum;
	uint32_t i;

	__asm volatile (
			"MOV %0,#0  \n\t"
			"MOV %1,#1  \n\t"

			"1: \n\t"
			"CMP %1,%2  \n\t"
			"BHI 2f     \n\t"

			"ADD %0,%0,%1  \n\t"
			"ADD %1,%1,#1  \n\t"
			"B 1b   \n\t"

			"2:   \n\t"

			:"=r"(sum),"=r"(i)
			 :"r"(N)
			  :"cc"
			);
	for(;;);
}
