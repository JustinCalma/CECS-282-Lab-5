// Justin Calma
// CECS 282 Lab 5

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include "Matrix.h"
using namespace std;

int main () {
	
	// Instantiation and setup of matrix1
	cout << "Enter the values for matrix1" << endl;
	Matrix matrix1(3, 4);
	matrix1.inputMatrix();
	matrix1.print();
	
	// Instantiation and setup of matrix2
	cout << "Enter the values for matrix2" << endl;
	Matrix matrix2(3, 4);
	matrix2.inputMatrix();
	matrix2.print();

	// Instantiation and setup of matrix3
	cout << "Enter the values for matrix3" << endl;
	Matrix matrix3(4, 2);
	matrix3.inputMatrix();
	matrix3.print();

	// Adding matrix2 to matrix1 and printing the result
	cout << "Result of matrix1 + matrix2" << endl;
	Matrix addResult(3, 4);
	matrix1.add(matrix2, addResult);
	addResult.print();

	// Subtracting matrix2 from matrix1 and printing the result
	cout << " Result of matrix1 - matrix2" << endl;
	Matrix subResult(3, 4);
	matrix1.subtract(matrix2, subResult);
	subResult.print();

	// Multiplying matrix1 and matrix3 and printing the result
	cout << "Result of matrix1 * matrix3" << endl;
	Matrix mulResult(3, 2);
	matrix1.multiply(matrix3, mulResult);
	mulResult.print();
	return 0;

}
