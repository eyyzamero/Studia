#pragma once

#include <iostream>

inline void draw_fifth_shape()
{
	std::cout << std::endl << "Zadanie 5" << std::endl << std::endl;

	for (auto i = 0; i < 8; i++) {
		for (auto j = 0; j < 8; j++)
			if (i % 2 != 0) j % 2 != 0 ? std::cout << "X" : std::cout << ".";
			else j % 2 == 0 ? std::cout << "X" : std::cout << ".";
		std::cout << std::endl;
	}
}