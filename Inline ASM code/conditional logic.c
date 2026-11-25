#include <stdint.h>
int main(void)
{
	uint32_t a = 55;
	uint32_t b = 34;
	volatile uint32_t result;

	__asm volatile ("CMP %1,%2  \n"
			"ITE GT  \n"
			"MOVGT %0,#1  \n"
			"MOVLE %0,#0  \n"
			:"=&r"(result)
			 :"r" (a),
			  "r" (b)
			  :"cc"
			 );
	for(;;);
}
