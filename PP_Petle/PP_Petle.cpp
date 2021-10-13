// Import exercise headers
#include "Exercise_1.h"
#include "Exercise_2.h"
#include "Exercise_3.h"
#include "Exercise_4.h"
#include "Exercise_5.h"

auto main() -> int
{
	try
	{
		draw_first_shape();
		draw_second_shape();
		draw_third_shape();
		draw_fourth_shape();
		draw_fifth_shape();
	}
	catch (...)
	{
		return 0;
	}
	return 0;
}
