#include <iostream>

#include "ExerciseBase.h"

using namespace std;

namespace Exercises
{
	class EX1 final : ExerciseBase
	{
		public:
			void run() override
			{
				auto* ex = new EX1();
				ex -> execute();
				delete ex;
			}

		private:
			void execute() override
			{
				cout << "Zadanie 1";

				// First example
				cout << "\n\n[1.50, 0.75, 3.11, 0.37, 11.34]\n";
				cout << "Najmniejsza liczba: " << ReturnSmalestNumberOfFiveArguments(1.5f, 0.75f, 3.11f, 0.37f, 11.34f);

				// Second example
				cout << "\n\n[13.89, 99.4, 77.11, -14.37, 0]\n";
				cout << "Najmniejsza liczba: " << ReturnSmalestNumberOfFiveArguments(13.89f, 99.4f, 77.11f, -14.37f, 0);

				// Third example
				cout << "\n\n[-999.99, -123.75, -7.1, 999.3, -13131.9]\n";
				cout << "Najmniejsza liczba: " << ReturnSmalestNumberOfFiveArguments(-999.99f, -123.75f, -7.1f, 999.3f, -13131.9f);
				
				cout << "\n\n";
			}

			static float ReturnSmalestNumberOfFiveArguments(const float l1, const float l2, const float l3, const float l4, const float l5)
			{
				auto* numbers = new float[5];

				numbers[0] = l1;
				numbers[1] = l2;
				numbers[2] = l3;
				numbers[3] = l4;
				numbers[4] = l5;

				auto min = numbers[0];

				for (auto i = 0; i < 5; i++)
				{
					if (min > numbers[i])
						min = numbers[i];
				}

				delete[] numbers;

				return min;
			}
	};

	class EX2 final : ExerciseBase
	{
		public:
			void run() override
			{
				auto* ex = new EX2();
				ex -> execute();
				delete ex;
			}

		private:
			void execute() override
			{
				cout << "Zadanie 2";

				// First example
				cout << "\n\n[1.11, 2.22, 3.33, 4.44, 5.55] Ilosc elementow: 5";
				cout << "\nNajmniejsza liczba: " << GetSmallestNumberFromArray(new float[] { 1.11f, 2.22f, 3.33f, 4.44f, 5.55f }, 5);

				// Second example
				cout << "\n\n[-10.07, 0.11, -611.66] Ilosc elementow: 3";
				cout << "\nNajmniejsza liczba: " << GetSmallestNumberFromArray(new float[] { -10.07f, 0.11f, -611.66f }, 3);

				// Third example
				cout << "\n\n[11.44, 2222.09, -3333.34, 7501.99] Ilosc elementow: 4";
				cout << "\nNajmniejsza liczba: " << GetSmallestNumberFromArray(new float[] { 11.44f, 2222.09f, -3333.34f, 7501.99f }, 4);

				cout << "\n\n";
			}

			static float GetSmallestNumberFromArray(const float numbers[], const int sizeOfArray)
			{
				auto min = numbers[0];

				for (auto i = 0; i < sizeOfArray; i++)
				{
					if (min > numbers[i])
						min = numbers[i];
				}

				delete[] numbers;

				return min;
			}
	};
}

int main()
{	
	try
	{
		auto* ex = new Exercises::EX2();
		ex -> run();
	}
	catch (...)
	{
		return 0;
	}
	return 0;
}