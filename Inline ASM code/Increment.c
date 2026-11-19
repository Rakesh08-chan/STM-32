#include <stdint.h>

int main()
{
	uint32_t a = 25;
	__asm volatile ("add %0,%1,#1"
			:"+r"(a)
			 );
	while(1)
	{

	}
}
