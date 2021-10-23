#include <iostream>
#include <vector>
#include <string>

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

	class EX3 final : ExerciseBase
	{
		public:
			void run() override
			{
				auto* ex = new EX3();
				ex -> execute();
				delete ex;
			}
		
		private:
			void execute() override
			{
				cout << "Zadanie 3";

				// First example
				cout << "\n\n[1.50, 0.75, 3.11, 0.37, 11.34] Ilosc elementow: 5";
				auto* firstExampleArray = new float[] { 1.50f, 0.75f, 3.11f, 0.37f, 11.34f };
				cout << "\nOdwrocona tablica: [";
				PrintAnArray(ReverseAnArray(firstExampleArray, 5), 5);
				cout << "]";

				// Second example
				cout << "\n\n[7.70, 13.75, -11.11, 999.37, 1337.34] Ilosc elementow: 5";
				auto* secondExampleArray = new float[] { 7.70f, 13.75f, -11.11f, 999.37f, 1337.34f };
				cout << "\nOdwrocona tablica: [";
				PrintAnArray(ReverseAnArray(secondExampleArray, 5), 5);
				cout << "]";

				cout << "\n\n";

				delete[] firstExampleArray;
				delete[] secondExampleArray;
			}

			static float* ReverseAnArray(const float* numbers, const int sizeOfArray)
			{
				auto counter = 0;
				auto* newArray = new float[sizeOfArray - 1];

				for (auto i = sizeOfArray - 1; i >= 0; i--)
				{
					newArray[counter] = numbers[i];
					counter++;
				}
				
				return newArray;
			}

			static void PrintAnArray(const float* arr, const int sizeOfArray)
			{
				for (auto i = 0; i <= sizeOfArray - 1; i++)
					cout << arr[i] << (i == sizeOfArray - 1 ? "" : ", ");
			}
	};

	class EX4 final : ExerciseBase
	{
		public:
			void run() override
			{
				auto* ex = new EX4();
				ex -> execute();
				delete ex;
			}
		
		private:
			void execute() override
			{
				cout << "Zadanie 4";

				// First example
				cout << "\n\n[1, 2, 3, 4, 5] Ilosc elementow: 5";
				auto* firstExampleArray = new int[] { 1, 2, 3, 4, 5 };
				cout << "\nParzyste liczby: [";
				PrintResults(GetEvenNumbersFromArray(firstExampleArray, 5));
				cout << "]";

				// Second example
				cout << "\n\n[1111, 1234, -1200, 0, 17171, 98712, -1337, -2] Ilosc elementow: 8";
				auto* secondExampleArray = new int[] { 1111, 1234, -1200, 0, 17171, 98712, -1337, -2 };
				cout << "\nParzyste liczby: [";
				PrintResults(GetEvenNumbersFromArray(secondExampleArray, 8));
				cout << "]";

				cout << "\n\n";

				delete[] firstExampleArray;
				delete[] secondExampleArray;
			}

			static vector<int>* GetEvenNumbersFromArray(const int* numbers, const int sizeOfArray)
			{
				auto* results = new vector<int>;

				for (auto i = 0; i <= sizeOfArray - 1; i++)
					if (numbers[i] % 2 == 0)
						results -> insert(results -> end(), numbers[i]);
					
				return results;
			}

			static void PrintResults(vector<int>* results)
			{
				for (auto i = 0; i <= static_cast<int>(results -> size()) - 1; i++)
					cout << results -> at(i) << (i == static_cast<int>(results -> size()) - 1 ? "" : ", ");
				
				delete results;
			}
	};

	class EX5 final : ExerciseBase
	{
		public:
			void run() override
			{
				auto* ex = new EX5();
				ex -> execute();
				delete ex;
			}

		private:
			void execute() override
			{
				cout << "Zadanie 5";

				// First example
				cout << "\n\n[4, 9, 12, 567, 15, 24, 65] \nIlosc elementow: 7 \nModulo: 7 \n[";
				auto* firstExampleArray = new int[] { 4, 9, 12, 567, 15, 24, 65 };
				ModuloEachItemInArray(firstExampleArray, 7, 7);

				// Second example
				std::cout << "]\n\n[33, 34, 778, 3504, 11111] \nIlosc elementow: 5 \nModulo: 7\n[";
				auto* secondExampleArray = new int[] { 33, 34, 778, 3504, 11111 };
				ModuloEachItemInArray(secondExampleArray, 5, 7);

				// Third exmple
				std::cout << "]\n\n[1111, 1234, 1200, 0, 17171, 98712, 1337, 2] \nIlosc elementow: 8 \nModulo: 11";
				auto* thirdExampleArray = new int[] { 33, 34, 778, 3504, 11111 };
				ModuloEachItemInArray(thirdExampleArray, 8, 11);

				cout << "]\n\n";
			}

			static void ModuloEachItemInArray(int* numbers, const int sizeOfArray, const int modulo)
			{
				for (auto i = 0; i < sizeOfArray; i++)
				{
					numbers[i] = numbers[i] % modulo;
					cout << numbers[i] << (i == sizeOfArray - 1 ? "" : ", ");
				}
			}
	};
}

int main()
{	
	try
	{
		auto* ex = new Exercises::EX5();
		ex -> run();
		delete ex;
	}
	catch (...)
	{
		return 0;
	}
	return 0;
}