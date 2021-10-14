#pragma once

#include <iostream>

inline float return_smalest_number_of_five_arguments(const float l1, const float l2, const float l3, const float l4, const float l5)
{
	auto* numbers = new float[5];

	numbers[0] = l1;
	numbers[1] = l2;
	numbers[2] = l3;
	numbers[3] = l4;
	numbers[4] = l5;

	auto min = numbers[0];

	for (auto i = 0; i < 5; i++)
	{
		if (min > numbers[i])
			min = numbers[i];
	}

	return min;
}