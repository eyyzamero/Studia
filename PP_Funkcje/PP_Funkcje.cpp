#include "Exercise_1.h"
#include "Exercise_2.h"

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
	}
	catch (...)
	{
		return 0;
	}
	return 0;
}