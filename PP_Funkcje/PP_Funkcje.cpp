#include "Exercise_1.h"
#include "Exercise_2.h"
#include "Exercise_3.h"
#include "Exercise_4.h"
#include "Exercise_5.h"
#include "Exercise_6.h"

int main()
{
	try
	{
		// Zadanie 1
		auto* ex1 = new Exercise1();
		ex1 -> run();
	
		// Zadanie 2
		auto* ex2 = new Exercise2();
		ex2 -> run();

		// Zadanie 3
		auto* ex3 = new Exercise3();
		ex3 -> run();

		// Zadanie 4
		auto* ex4 = new Exercise4();
		ex4 -> run();

		// Zadanie 5
		auto* ex5 = new Exercise5();
		ex5 -> run();

		// Zadanie 6
		auto* ex6 = new Exercise6();
		ex6 -> run();
	}
	catch (...)
	{
		return 0;
	}
	return 0;
}
