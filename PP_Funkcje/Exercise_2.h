#pragma once

#include "ExerciseBase.h"

class Exercise2 final : ExerciseBase
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
			std::cout << "[1.22, 2.22, 3.33, 4.44, 5.55] Ilosc elementow: 5" << std::endl;
			std::cout << "Najmniejsza liczba: " << get_smallest_number_of_array(new float[] { 1.11f, 2.22f, 3.33f, 4.44f, 5.55f }, 5) << std::endl << std::endl;
			std::cout << "[-10.07, 0.11, -611.66] Ilosc elementow: 3" << std::endl;
			std::cout << "Najmniejsza liczba: " << get_smallest_number_of_array(new float[] { -10.07f, 0.11f, -611.66f }, 3) << std::endl << std::endl;
			std::cout << "[11.44, 2222.09, -3333.34, 7501.99] Ilosc elementow: 4" << std::endl;
			std::cout << "Najmniejsza liczba: " << get_smallest_number_of_array(new float[] { 11.44f, 2222.09f, -3333.34f, 7501.99f }, 4) << std::endl << std::endl;
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