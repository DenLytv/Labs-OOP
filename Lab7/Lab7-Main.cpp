#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <windef.h>
#include <vector>
#include <chrono>
#define matrixSize 200


//int main()
//{
//    STARTUPINFO si = { 0 };
//    PROCESS_INFORMATION pi = { 0 };
//    BOOL psuccess = CreateProcess(TEXT("C:\\Windows\\system32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
//    if (psuccess) {
//        std::cout << "Process started." << std::endl;
//        std::cout << "Process ID: " << pi.dwProcessId << std::endl;
//    }
//    else {
//        std::cout << "Error to start the process: " << GetLastError() << std::endl;
//    }
//
//    DWORD dwExitCode = 0;
//    dwExitCode = WaitForSingleObject(pi.hProcess, (8000));
//    TerminateProcess(pi.hProcess, dwExitCode);
//    CloseHandle(pi.hProcess);
//    CloseHandle(pi.hThread);
//
//    return 0;
//}

//HANDLE event;
//int array[matrixSize][matrixSize]; 
//
//template <int rows, int cols>
//void printMatrix(int(&array)[rows][cols]);
//template <int rows, int cols>
//void createMatrix(int(&array)[rows][cols]);
//
////DWORD WINAPI minElement(LPVOID lpParam);
//DWORD minElement(LPVOID plParam);
//DWORD WINAPI countOdd(LPVOID plParam);
//DWORD WINAPI increaseOdds(LPVOID lpParam);
//DWORD WINAPI countEvenRows(LPVOID plParam);
//void increaseOdds1();
//void countEvenRows1();
//
//INT main() {
//	auto start = std::chrono::high_resolution_clock::now();
//	
//	HANDLE hThreads;
//	createMatrix(array);
//	//event = CreateEvent(NULL, TRUE, FALSE, NULL);
//	///*hThreads = CreateThread(NULL, 0, &countOdd, NULL, 0, NULL);
//	hThreads = CreateThread(NULL, 0, &minElement, NULL, 0, NULL);
//	//hThreads = CreateThread(NULL, 0, &countEvenRows, NULL, 0, NULL);
//	//hThreads = CreateThread(NULL, 0, &increaseOdds, NULL, 0, NULL);
//	/*countEvenRows1();
//	increaseOdds1();*/
//
//	WaitForSingleObject(hThreads, INFINITE);
//	CloseHandle(hThreads);
//	
//	auto end = std::chrono::high_resolution_clock::now();
//	auto duration = std::chrono::duration_cast<std::chrono::milliseconds> (end - start).count();
//	
//	std::cout << "Program elapsed time: " << duration << " ms" << std::endl;
//
//	return 0;
//
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
//DWORD /*WINAPI*/ minElement(LPVOID lpParam) {
//	createMatrix(array);
//	WaitForSingleObject(event, 50);
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
//
//DWORD WINAPI increaseOdds(LPVOID lpParam) {
//	WaitForSingleObject(event, 50);
//	bool isOdd = false;
//	std::vector<int> oddIndexes{};
//	std::cout << "Matrix: " << std::endl;
//	printMatrix(array);
//	for (size_t i = 0; i < matrixSize; i++) {
//		isOdd = false;
//		for (size_t j = 0; j < matrixSize; j++) {
//			if (array[i][j] % 2 != 0)
//				isOdd = true;
//			else {
//				isOdd = false;
//				break;
//			}
//		}
//		if (isOdd)
//			oddIndexes.push_back(i);
//	}
//	for (size_t i = 0; i < oddIndexes.size(); i++)
//	{
//		for (size_t j = 0; j < matrixSize; j++)
//		{
//			++array[i][j];
//		}
//	}
//	std::cout << "Increased matrix: " << std::endl;
//	printMatrix(array);
//	return 0;
//}
//
//DWORD WINAPI countEvenRows(LPVOID plParam) {
//	int count = 0;
//	bool isEven = false;
//	std::cout << "Matrix: " << std::endl;
//	printMatrix(array);
//	for (size_t i = 0; i < matrixSize; i++) {
//		isEven = false;
//		for (size_t j = 0; j < matrixSize; j++) {
//			if (array[i][j] % 2 == 0)
//				isEven = true;
//			else {
//				isEven = false;
//				break;
//			}
//		}
//		if (isEven)
//			++count;
//	}
//	std::cout << "The number even rows is: " << count << std::endl;
//	std::cout << std::endl;
//	return 0;
//}
//
//void increaseOdds1() {
//	WaitForSingleObject(event, 50);
//	bool isOdd = false;
//	std::vector<int> oddIndexes{};
//	std::cout << "Matrix: " << std::endl;
//	printMatrix(array);
//	for (size_t i = 0; i < matrixSize; i++) {
//		isOdd = false;
//		for (size_t j = 0; j < matrixSize; j++) {
//			if (array[i][j] % 2 != 0)
//				isOdd = true;
//			else {
//				isOdd = false;
//				break;
//			}
//		}
//		if (isOdd)
//			oddIndexes.push_back(i);
//	}
//	for (size_t i = 0; i < oddIndexes.size(); i++)
//	{
//		for (size_t j = 0; j < matrixSize; j++)
//		{
//			++array[i][j];
//		}
//	}
//	std::cout << "Increased matrix: " << std::endl;
//	printMatrix(array);
//}
//
//void countEvenRows1() {
//	int count = 0;
//	bool isEven = false;
//	std::cout << "Matrix: " << std::endl;
//	printMatrix(array);
//	for (size_t i = 0; i < matrixSize; i++) {
//		isEven = false;
//		for (size_t j = 0; j < matrixSize; j++) {
//			if (array[i][j] % 2 == 0)
//				isEven = true;
//			else {
//				isEven = false;
//				break;
//			}
//		}
//		if (isEven)
//			++count;
//	}
//	std::cout << "The number even rows is: " << count << std::endl;
//	std::cout << std::endl;
//}