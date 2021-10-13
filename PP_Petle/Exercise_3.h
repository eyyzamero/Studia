#pragma once

#include <iostream>

inline void draw_third_shape()
{
	std::cout << std::endl << "Zadanie 3" << std::endl << std::endl;

	for (auto i = 0; i < 6; i++) {
		for (auto k = 0; k < 6; k++) {
			if (k >= i) continue;
			std::cout << ".";
		}
		for (auto j = 6; j > 0; j--) {
			if (j <= i) continue;
			std::cout << "X";
		}
		std::cout << std::endl;
	}
}