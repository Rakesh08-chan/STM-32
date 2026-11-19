#include <stdint.h>

int main()
{
	uint32_t cont;

	__asm volatile("MOV %0,#33"
			:"=r"(cont)
			 );
	while(1)
	{

	}
}
