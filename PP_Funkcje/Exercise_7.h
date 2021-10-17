#pragma once

#include <iostream>
#include <vector>

#include "ExerciseBase.h"

class Exercise7 final : ExerciseBase
{
public:
	void run() override
	{
		execute();
	}

private:
	void execute() override
	{
		std::cout << "Zadanie 7" << std::endl << std::endl;
		std::cout << "Wektor 1: [4, 3, 2, 1, 8, 6, 7, 5]" << std::endl;
		std::cout << "Wektor 2: [44, 33, 22, 11, 88, 96, 77, 55]" << std::endl;
		reverse_vector_list(std::vector<int>{ 4, 3, 2, 1, 8, 6, 7, 5 }, std::vector<int>{ 44, 33, 22, 11, 88, 96, 77, 55 });
		std::cout << std::endl;
		std::cout << "Wektor 1: [100, -100, 200, -200, 500, -500, 1000, -1000]" << std::endl;
		std::cout << "Wektor 2: [10, -10, 20, -20, 50, -50, 100, -100]" << std::endl;
		reverse_vector_list(std::vector<int>{ 100, -100, 200, -200, 500, -500, 1000, -1000 }, std::vector<int>{ 10, -10, 20, -20, 50, -50, 100, -100 });
		std::cout << std::endl;
	}

	static void reverse_vector_list(std::vector<int> vec1, std::vector<int> vec2)
	{
		vec1.insert(vec1.end(), vec2.begin(), vec2.end());
		const auto sorted_merged_vectors = vector_sort(vec1);

		print_vector_data(sorted_merged_vectors);
	}

	static std::vector<int> vector_sort(std::vector<int>& vec)
	{
		const auto vector_size = static_cast<int>(vec.size());

		for (auto i = 0; i < vector_size - 1; i++)
		{
			auto min = i;

			for (auto j = i + 1; j < vector_size; j++ )
				if (vec[j] < vec[min])
					min = j;

			std::swap(vec[i], vec[min]);
		}

		return vec;
	}

	static void print_vector_data(const std::vector<int>& vec)
	{
		std::cout << "Posortowany wektor koncowy: [";
		for (auto i = 0; i <= static_cast<int>(vec.size()) - 1; i++)
		{
			std::cout << vec[i] << (i == static_cast<int>(vec.size()) - 1 ? "" : ", ");
		}
		std::cout << "]" << std::endl;
	}
};