#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include "Matrix.h"
using namespace std;

// Matrix constructor
Matrix::Matrix(int row, int col) {
	
	// Set the rows and columns of the matrix
	rowSize = row;
	colSize = col;
	
	// Create the matrix pointer with the amount of rows
	ptr = new int *[rowSize];
	
	// For each row, create a column
	for (int i = 0; i < rowSize; i++) {
		ptr[i] = new int[colSize];
	}
	
}

// Deconstructor for the matrix 
Matrix::~Matrix(){
	
	// For each row, delete the column pointer
	for (int i = 0; i < rowSize; i++) {
		delete[] ptr[i];
	}
	
	// Delete the pointer once it is empty
	delete[] ptr;
	
}

// Get the elements of the matrix row by row from the user
void Matrix::inputMatrix() {
	
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			
			// Output a message to the user asking for input
			cout << "Enter an element for row: " << i + 1 << " and column: " << j + 1 << " -- ";
			
			// Insert the input into the matrix in its corresponding position
			cin >> ptr[i][j];
		}
	}
}

// Perform matrix addition with Matrix1 and Matrix2
void Matrix::add(const Matrix& second, Matrix& result) const {
	
	// Row by row, perform matrix addition
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			
			// Add the elements from each row of the matrices and save them into result
			result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
			
		}
	}
}

// Perform matrix subratction with Matrix1 and Matrix2
void Matrix::subtract(const Matrix& second, Matrix& result) const {
	
	// Row by row, perform matrix subraction
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			
			// Subract the elements from each row of the matrices and save them into result
			result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
			
		}
	}
}

// Perform matrix multiplication with Matrix1 and Matrix3
void Matrix::multiply(const Matrix& third, Matrix& result) const {
	
	// Row of matrix1 by column of matrix3
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			for (int k = 0; k < colSize; k++) {
				
				// Multiply the row of matrix1 by the column of matrix3 and save them into the result
				result.ptr[i][j] += ptr[i][k] * third.ptr[k][j];	
				
			}
		}
	}
}

// Method to print the matrices
void Matrix::print() const {
	
	// Print the array row by row
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << ptr[i][j] << " ";
		}
		
		cout << endl;
		
	}
	
}
