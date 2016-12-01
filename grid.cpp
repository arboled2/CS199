#include "grid.hpp"
#include <iostream>

using namespace std;
// Define your functions here
default constructor
Grid::Grid(void){

}

// Creates a square grid 
Grid::Grid(int dimension){
	arr = new int*[dimension];
	for (int i = 0; i < dimension; i++){
		arr[i] = new int[dimension];	
	}
}

// Copy Constructor, deep copy
Grid::Grid(const Grid &obj){
	this->dimension = obj.dimension;
	this->arr = new *int[dimension];
	for (int i = 0; i<dimension; i++)
	{
		this->arr[i] = *obj.ptr[i];
	}
}
//Destructor
Grid::~Grid(){
//this is a double pointer so...
	for(int i = 0; i < dimension; i++){
		for(int j = 0; j<dimension; j++){
			delete arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
}

Grid::const Grid & operator=(const Grid & obj){
	if(this = &obj)
	{
		clean();
		copy(obj);
	}
	return *this;
}

void Grid::swapRows(int row1, int row2){
	Grid temp = Grid.arr[row1];
	Grid.arr[row1] = Grid.arr[row2];
	Grid.arr[row2] = temp; 	
}

Grid::const grid operator+(const Grid &obj2)[
	Grid a;
	Grid b;
	Grid c;
	//try for loop?
	for (int i = 0; i < dimension; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			a+b = a.operator+(b);
			c.j= a+b;
		}
		a+b = a.operator+(b);
		c.i = a+b;
	}
	
	return c;
}

void Grid::swapColumns(int col1, int col2){
	Grid temp = Grid.arr[col1];
		Grid.arr[col1] = Grid.arr[col2];
		Grid.arr[col2] = temp; 

}

Grid::Grid multCoords(Grid & obj){
	//I have no idea	
}

void Grid::printGrid(){
	for (int i = 0; i<dimension; i++){
		for (int j = 0; j<dimension; j++){
			cout << arr[j] << endl;
		}
	}
}

int main(){
  return 0;
}