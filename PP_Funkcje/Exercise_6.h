#pragma once

#include <iostream>
#include <vector>

#include "ExerciseBase.h"

class Exercise6 final : ExerciseBase
{
public:
	void run() override
	{
		execute();
	}

private:
	void execute() override
	{
		std::cout << "Zadanie 6" << std::endl << std::endl;
		std::cout << "Poczatkowy wektor: [1, 2, 3, 4, 5, 6, 7, 8]" << std::endl;
		reverse_vector_list(std::vector<int>{ 1, 2, 3, 4, 5, 6, 7, 8 });
		std::cout << std::endl;
		std::cout << "Poczatkowy wektor: [100, -100, 200, -200, 500, -500, 1000, -1000]" << std::endl;
		reverse_vector_list(std::vector<int>{ 100, -100, 200, -200, 500, -500, 1000, -1000 });
		std::cout << std::endl;
	}

	static void reverse_vector_list(std::vector<int> numbers)
	{
		std::vector<int> newVector;
		newVector.reserve(numbers.size());
		
		for (auto i = static_cast<int>(numbers.size()) - 1; i >= 0; i--)
			newVector.insert(newVector.end(), numbers[i]);
		
		print_vector_data(newVector);
	}

	static void print_vector_data(const std::vector<int>& vec)
	{
		std::cout << "Odwrocony wektor: [";
		for (auto i = 0; i <= static_cast<int>(vec.size()) - 1; i++)
		{
			std::cout << vec[i] << (i == static_cast<int>(vec.size()) - 1 ? "" : ", ");
		}
		std::cout << "]" << std::endl;
	}
};