#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int row, int col) {
	
	rowSize = row;
	colSize = col;
	
	ptr = new int *[rowSize];
	
	for (int i = 0; i < rowSize; i++) {
		ptr[i] = new int[colSize];
	}
	
}

Matrix::~Matrix(){
	
	for (int i = 0; i < rowSize; i++) {
	
		delete[] ptr[i];
		
	}
	
	delete[] ptr;
	
}

void Matrix::inputMatrix() {
	
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << "Enter an element for row: " << i + 1 << " and column: " << j + 1 << " -- ";
			cin >> ptr[i][j];
		}
	}
	
}

void Matrix::add(const Matrix& second, Matrix& result) const {
	
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			
			result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
			
		}
	}
	
}

void Matrix::subtract(const Matrix& second, Matrix& result) const {
	
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			
			result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
			
		}
	}
	
}

void Matrix::multiply(const Matrix& third, Matrix& result) const {
	
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			for (int k = 0; k < colSize; k++) {
				
				result.ptr[i][j] += ptr[i][k] * third.ptr[k][j];	
				
			}
		}
	}
	
}

void Matrix::print() const {
	
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << ptr[i][j] << " ";
		}
		
		cout << endl;
		
	}
	
}
