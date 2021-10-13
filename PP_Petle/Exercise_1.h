#pragma once

#include <iostream>

inline void draw_first_shape()
{
	for (auto i = 0; i < 5; i++) {
		for (auto j = 0; j < 8; j++) {
			if (i % 2 == 0) std::cout << "X";
			else std::cout << ".";
		}
		std::cout << std::endl;
	}
}