#include <stdint.h>

int main()
{
	uint32_t a = 49;
	uint32_t b = 50;

	__asm volatile ("cmp %0, %1"
			:
			:"r"(a),
			 "r"(b)
			 :"cc"
			  );
	while(1)
	{

	}
}
