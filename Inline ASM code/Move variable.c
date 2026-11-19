
#include <stdint.h>

int main()
{
	uint32_t value= 34;
	uint32_t copy;
	__asm volatile("MOV %0,%1"
			:"=r"(copy)
			 : "r"(value)
			   );
	while(1)
	{

	}
}
