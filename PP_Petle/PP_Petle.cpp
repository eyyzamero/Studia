// Import exercise headers
#include "Exercise_1.h"
#include "Exercise_2.h"
#include "Exercise_3.h"

auto main() -> int
{
	try
	{
		draw_first_shape();
		draw_second_shape();
		draw_third_shape();
	}
	catch (...)
	{
		return 0;
	}
	return 0;
}
