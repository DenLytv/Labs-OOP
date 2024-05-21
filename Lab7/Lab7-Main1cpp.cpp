//#include <iostream>
//#include <iomanip>
//#include <Windows.h>
//#define matrixSize 4
//
//int array[matrixSize][matrixSize];
//
//template <int rows, int cols>
//void printMatrix(int(&array)[rows][cols]);
//template <int rows, int cols>
//void createMatrix(int(&array)[rows][cols]);
//
//DWORD WINAPI minElement(LPVOID plParam);
//DWORD WINAPI countOdd(LPVOID plParam);
//HANDLE hThreads;
//
//INT main() {
//	createMatrix(array);
//	hThreads = CreateThread(NULL, 0, &countOdd, NULL, 0, NULL);
//	hThreads = CreateThread(NULL, 0, &minElement, NULL, 0, NULL);
//
//	WaitForSingleObject(hThreads, INFINITE);
//	CloseHandle(hThreads);
//
//	return 0;
//}
//
//template <int rows, int cols>
//void printMatrix(int(&array)[rows][cols]) {
//	int i, j;
//	std::cout << "\n";
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j < cols; j++) {
//			std::cout << std::setw(8) << std::right << array[i][j];
//		}
//		std::cout << "\n";
//	}
//	std::cout << "\n";
//}
//
//template <int rows, int cols>
//void createMatrix(int(&array)[rows][cols]) {
//	srand(time(NULL));
//	int i, j;
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j < cols; j++) {
//			array[i][j] = rand() % 9 - 4;
//		}
//	}
//}
//
//DWORD WINAPI minElement(LPVOID lpParam) {
//	WaitForSingleObject(hThreads, 15);
//	std::cout << "Matrix: " << std::endl;
//	printMatrix(array);
//	int min = array[0][0];
//	for (size_t i = 0; i < matrixSize; i++)
//	{
//		for (size_t j = 0; j < matrixSize; j++)
//		{
//			if (array[i][j] < min)
//				min = array[i][j];
//		}
//	}
//	std::cout << "The min element is : " << min << std::endl;
//	std::cout << std::endl;
//	return 0;
//}
//
//DWORD WINAPI countOdd(LPVOID plParam) {
//	int count = 0;
//	std::cout << "Matrix: " << std::endl;
//	printMatrix(array);
//	for (size_t i = 0; i < matrixSize; i++) {
//		for (size_t j = 0; j < matrixSize; j++) {
//			if (array[i][j] % 2 != 0)
//				count++;
//		}
//	}
//	std::cout << "The number of odd elements is: " << count << std::endl;
//	std::cout << std::endl;
//	return 0;
//}