#include <iostream>
#ifndef MATRIX_H
#define MATRIX_H
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
using namespace std;

// Matrix class definition
class Matrix {
	
	// Declare private variables
	private:
		int rowSize;
		int colSize;
		int** ptr;
	
	// Declare public methods
	public:
		Matrix (int rowSize, int colSize);
		~Matrix ();
		void inputMatrix (); // input the matrix from the user row by row
		void add (const Matrix& second, Matrix& result) const;
		void subtract (const Matrix& second, Matrix& result) const;
		void multiply (const Matrix& third, Matrix& result) const;
		void print () const;

};
#endif
