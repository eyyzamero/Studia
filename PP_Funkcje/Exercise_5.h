#pragma once

#include <iostream>
#include "ExerciseBase.h"

class Exercise5 final : ExerciseBase
{
public:
	void run() override
	{
		execute();
	}

private:
	void execute() override
	{
		std::cout << "Zadanie 5" << std::endl << std::endl;
		std::cout << "[4, 9, 12, 567, 15, 24, 65] Ilosc elementow: 7" << std::endl;
		get_modulo_m_array(new unsigned int[] { 4, 9, 12, 567, 15, 24, 65 }, 7, 7);
		std::cout << std::endl;
		std::cout << "[33, 34, 778, 3504, 11111] Ilosc elementow: 5" << std::endl;
		get_modulo_m_array(new unsigned int[] { 33, 34, 778, 3504, 11111 }, 5, 7);
		std::cout << std::endl;
		std::cout << "[1111, 1234, 1200, 0, 17171, 98712, 1337, 2] Ilosc elementow: 8" << std::endl;
		get_modulo_m_array(new unsigned int[] { 1111, 1234, 1200, 0, 17171, 98712, 1337, 2 }, 8, 11);
		std::cout << std::endl;
	}

	static void get_modulo_m_array(const unsigned int numbers[], const int sizeOfArray, const int modulo)
	{
		auto* newArray = new int[sizeOfArray - 1];

		for (auto i = 0; i <= sizeOfArray - 1; i++)
			newArray[i] = numbers[i] % modulo;
	
		print_array(newArray, sizeOfArray);
	}

	static void print_array(const int* arr, const int sizeOfArray)
	{
		std::cout << "Wynik: [";
		for (auto i = 0; i <= sizeOfArray - 1; i++)
		{
			std::cout << arr[i] << (i == sizeOfArray - 1 ? "" : ", ");
		}
		std::cout << "]" << std::endl;
	}
};