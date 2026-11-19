#include <stdint.h>

int main()
{
	uint32_t value = 45;
	volatile uint32_t dest;

	__asm volatile (
			"LDR r1,[%0] \n\t"
			"STR r1,[%1]"
			:
			:"r"(&value),
			 "r"(&dest)
			  );

	while(1)
	{

	}
}
