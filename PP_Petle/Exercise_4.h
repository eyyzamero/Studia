#pragma once

#include <iostream>

inline void draw_fourth_shape()
{
	std::cout << std::endl << "Zadanie 4" << std::endl << std::endl;

	auto ilosc_kropek = 1;

	for (auto i = 0; i < 7; i++) {
		if (i > 0 && i < 4) ilosc_kropek++;
		else ilosc_kropek--;

		for (auto j = 0; j < ilosc_kropek; j++) std::cout << ".";
		for (auto k = 2 * ilosc_kropek; k < 7; k++) std::cout << "X";
		for (auto l = 0; l < ilosc_kropek; l++) std::cout << ".";

		std::cout << std::endl;
	}
}