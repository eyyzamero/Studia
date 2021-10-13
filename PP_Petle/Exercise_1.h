#pragma once

#include <iostream>

inline void draw_first_shape()
{
	std::cout << "Zadanie 1" << std::endl << std::endl;
	
	for (auto i = 0; i < 5; i++) {
		for (auto j = 0; j < 8; j++) {
			if (i % 2 == 0) std::cout << "X";
			else std::cout << ".";
		}
		std::cout << std::endl;
	}
}