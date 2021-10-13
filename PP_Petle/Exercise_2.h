#pragma once

#include <iostream>

inline void draw_second_shape()
{
	std::cout << std::endl << "Zadanie 2" << std::endl << std::endl;
	
	for (auto i = 0; i < 5; i++) {
		for (auto j = 0; j < 8; j++) {
			 j % 2 == 0 ? std::cout << "X" : std::cout << ".";
		}
		std::cout << std::endl;
	}
}