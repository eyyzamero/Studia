#pragma once

#include "ExerciseBase.h"

class Exercise2 : ExerciseBase
{
	public :
		void run() override
		{
			execute();
		}

	private:
		void execute() override
		{
			std::cout << "Zadanie 2" << std::endl << std::endl;
			std::cout << "[1, 2, 3, 4, 5] Ilosc elementow: 5" << std::endl;
			std::cout << "Najmniejsza liczba: " << get_smallest_number_of_array(new float[] { 1, 2, 3, 4, 5 }, 5) << std::endl << std::endl;
			std::cout << "[-10, 0, -611] Ilosc elementow: 3" << std::endl;
			std::cout << "Najmniejsza liczba: " << get_smallest_number_of_array(new float[] { -10, 0, -611 }, 3) << std::endl << std::endl;
			std::cout << "[11, 2222, -3333, 7501] Ilosc elementow: 4" << std::endl;
			std::cout << "Najmniejsza liczba: " << get_smallest_number_of_array(new float[] { 11, 2222, -3333, 7501 }, 4) << std::endl << std::endl;
		}

		static float get_smallest_number_of_array(const float numbers[], const int sizeOfArray)
		{
			auto min = numbers[0];

			for (auto i = 0; i < sizeOfArray; i++)
			{
				if (min > numbers[i])
					min = numbers[i];
			}

			return min;
		}
};