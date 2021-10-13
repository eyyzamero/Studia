// Import exercise headers
#include "Exercise_1.h"
#include "Exercise_2.h"

auto main() -> int
{
	try
	{
		draw_first_shape();
		draw_second_shape();
	}
	catch (...)
	{
		return 0;
	}
	return 0;
}
