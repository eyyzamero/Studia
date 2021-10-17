#pragma once

#include <iostream>
#include "ExerciseBase.h"

class Exercise4 final : ExerciseBase
{
	public:
		void run() override
		{
			execute();
		}

	private:
		void execute() override
		{
			std::cout << "Zadanie 4" << std::endl << std::endl;
			std::cout << "[1, 2, 3, 4, 5] Ilosc elementow: 5" << std::endl;
			get_even_numbers(new int[] { 1, 2, 3, 4, 5 }, 5);
			std::cout << std::endl;
			std::cout << "[1111, 1234, -1200, 0, 17171, 98712, -1337, -2] Ilosc elementow: 8" << std::endl;
			get_even_numbers(new int[] { 1111, 1234, -1200, 0, 17171, 98712, -1337, -2 }, 8);
			std::cout << std::endl;
		}

		static void get_even_numbers(const int numbers[], const int sizeOfArray)
		{
			auto counter = 0;
			auto* newArray = new int[sizeOfArray - 1];
			
			for (auto i = 0; i <= sizeOfArray - 1; i++)
			{
				if (numbers[i] % 2 == 0)
				{
					newArray[counter] = numbers[i];
					counter++;
				}
			}

			print_array(newArray, counter);
		}

		static void print_array(const int* arr, const int sizeOfArray)
		{
			std::cout << "Liczby parzyste: [";
			for (auto i = 0; i <= sizeOfArray - 1; i++)
			{
				std::cout << arr[i] << (i == sizeOfArray - 1 ? "" : ", ");
			}
			std::cout << "]" << std::endl;
		}
};