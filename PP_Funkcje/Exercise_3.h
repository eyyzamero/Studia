#pragma once

#include <iostream>
#include "ExerciseBase.h"

class Exercise3 final : ExerciseBase
{
	public:
		void run() override
		{
			execute();
		}

	private:
		void execute() override
		{
			std::cout << "Zadanie 3" << std::endl << std::endl;
			std::cout << "[1.50, 0.75, 3.11, 0.37, 11.34] Ilosc elementow: 5" << std::endl;
			reverse_array(new float[] { 1.50f, 0.75f, 3.11f, 0.37f, 11.34f }, 5);
			std::cout << std::endl;
			std::cout << "[7.70, 13.75, -11.11, 999.37, 1337.34] Ilosc elementow: 5" << std::endl;
			reverse_array(new float[] { 7.70f, 13.75f, -11.11f, 999.37f, 1337.34f }, 5);
			std::cout << std::endl << std::endl;
		}

		static void reverse_array(const float number[], const int sizeOfArray)
		{
			auto counter = 0;
			auto* newArray = new float[sizeOfArray - 1];
			
			for (auto i = sizeOfArray - 1 ; i >= 0; i--)
			{
				newArray[counter] = number[i];
				counter++;
			}

			print_array(newArray, sizeOfArray);
		}

		static void print_array(const float* arr, const int sizeOfArray)
		{
			std::cout << "Odwrocona tablica: [";
			for (auto i = 0; i <= sizeOfArray - 1; i++)
			{
				std::cout << arr[i] << (i == sizeOfArray - 1 ? "" : ", ");
			}
			std::cout << "]" << std::endl;
		}
};