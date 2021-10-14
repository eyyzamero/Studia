#pragma once

#include <iostream>

class exercise_1
{
	public : static void run()
	{
		std::cout << "Zadanie 1" << std::endl << std::endl;
		std::cout << "[1.50, 0.75, 3.11, 0.37, 11.34]" << std::endl;
		std::cout << "Najmniejsza liczba: " << return_smalest_number_of_five_arguments(1.5f, 0.75f, 3.11f, 0.37f, 11.34f) << std::endl << std::endl;
		std::cout << "[13.89, 99.4, 77.11, -14.37, 0]" << std::endl;
		std::cout << "Najmniejsza liczba: " << return_smalest_number_of_five_arguments(13.89f, 99.4f, 77.11f, -14.37f, 0) << std::endl << std::endl;
		std::cout << "[-999.99, -123.75, -7.1, 999.3, -13131.9]" << std::endl;
		std::cout << "Najmniejsza liczba: " << return_smalest_number_of_five_arguments(-999.99f, -123.75f, -7.1f, 999.3f, -13131.9f) << std::endl << std::endl;
	}

	private : static float return_smalest_number_of_five_arguments(const float l1, const float l2, const float l3, const float l4, const float l5)
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
};