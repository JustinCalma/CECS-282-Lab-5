#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int row, int col {
	
	rowSize = row;
	colSize = col;
	
}

Matrix::~Matrix(){
	
	for (int i = 0; i < rowSize; i++) {
	
		delete[] ptr[i];
		
	}
	
	delete[] ptr;
	
}

Matrix::InputMatrix() {
	
}

Matrix::add() {
	
}

Matrix::subtract() {
	
}

Matrix::multiply() {
	
}

Matrix::print() {
	
	
	
}
