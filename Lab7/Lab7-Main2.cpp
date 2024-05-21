#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <vector>
#include <chrono>
#define matrixSize 200

HANDLE event;
int array[matrixSize][matrixSize]; 

template <int rows, int cols>
void printMatrix(int(&array)[rows][cols]);
template <int rows, int cols>
void createMatrix(int(&array)[rows][cols]);

DWORD increaseOdds(LPVOID lpParam);
DWORD countEvenRows(LPVOID plParam);

int main() {
	auto start = std::chrono::high_resolution_clock::now();
	
	createMatrix(array);
	/*HANDLE hThreads;
	event = CreateEvent(NULL, TRUE, FALSE, NULL);
	hThreads = CreateThread(NULL, 0, &countEvenRows, NULL, 0, NULL);
	hThreads = CreateThread(NULL, 0, &increaseOdds, NULL, 0, NULL);

	WaitForSingleObject(hThreads, INFINITE);
	CloseHandle(hThreads);*/
	countEvenRows(NULL);
	increaseOdds(NULL);
	
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds> (end - start).count();
	
	std::cout << "Program elapsed time: " << duration << " ms" << std::endl;

	return 0;
}

template <int rows, int cols>
void printMatrix(int(&array)[rows][cols]) {
	int i, j;
	std::cout << "\n";
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			std::cout << std::setw(8) << std::right << array[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

template <int rows, int cols>
void createMatrix(int(&array)[rows][cols]) {
	srand(time(NULL));
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			array[i][j] = rand() % 9 - 4;
		}
	}
}

DWORD increaseOdds(LPVOID lpParam) {
	//WaitForSingleObject(event, 15);
	bool isOdd = false;
	std::vector<int> oddIndexes{};
	std::cout << "Matrix: " << std::endl;
	printMatrix(array);
	for (size_t i = 0; i < matrixSize; i++) {
		isOdd = false;
		for (size_t j = 0; j < matrixSize; j++) {
			if (array[i][j] % 2 != 0)
				isOdd = true;
			else {
				isOdd = false;
				break;
			}
		}
		if (isOdd)
			oddIndexes.push_back(i);
	}
	for (size_t i = 0; i < oddIndexes.size(); i++)
	{
		for (size_t j = 0; j < matrixSize; j++)
		{
			++array[i][j];
		}
	}
	std::cout << "Increased matrix: " << std::endl;
	printMatrix(array);
	return 0;
}

DWORD countEvenRows(LPVOID plParam) {
	int count = 0;
	bool isEven = false;
	std::cout << "Matrix: " << std::endl;
	printMatrix(array);
	for (size_t i = 0; i < matrixSize; i++) {
		isEven = false;
		for (size_t j = 0; j < matrixSize; j++) {
			if (array[i][j] % 2 == 0)
				isEven = true;
			else {
				isEven = false;
				break;
			}
		}
		if (isEven)
			++count;
	}
	std::cout << "The number even rows is: " << count << std::endl;
	std::cout << std::endl;
	return 0;
}