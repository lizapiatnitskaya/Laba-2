// matrix.cpp
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

#include "matrix.h"
using namespace std;
matrix::matrix(int matrix_size)
{	
	size = matrix_size;
	ptr = new int *[size];
	for (int i=0; i<size;i++)
		ptr[i]= new int[size];
	assert(ptr!=0);
	
	for (int j=0;j<size;j++){
	for (int i=0;i<size;i++)
	ptr[i][j] = rand()%35;}
}


matrix::matrix(const matrix &init)
{
	size=init.size;
	ptr = new int*[size];
	for (int i=0; i<size;i++)
		ptr[i]= new int[size];
	assert(ptr!=0);
	for (int j=0;j<size;j++)
	for (int i=0;i<size;i++)
		ptr[i][j]=init.ptr[i][j];
}


matrix::~matrix()
{
	for(int i=0;i<size;i++)
		delete [] ptr[i];
	delete [] ptr;
}

ostream &operator<<(ostream &output, const matrix &a)
{	
	for (int j=0;j<a.size;j++)
	{
		for (int i=0;i<a.size;i++)
			output<<setw(3)<<a.ptr[i][j] << " ";
		output<<endl;
	}
	
	return output;
}


const matrix &matrix::operator+=(const matrix& right)
{ if(size!=right.size)
{
cout <<"Adding is impossible. The dimensions is different.\n";
return *this;
}
else
for (int j =0; j<size;j++)
{
	for (int i=0;i<size;i++)
		ptr[i][j] = ptr[i][j]+right.ptr[i][j];}
return *this;
}

const matrix &matrix::operator-=(const matrix& right)
{ if(size!=right.size)
{
cout <<"Subtraction is impossible. The dimensions is different.\n";
return *this;
}
else
for (int j =0; j<size;j++)
{
	for (int i=0;i<size;i++)
		ptr[i][j]=ptr[i][j]-right.ptr[i][j];}
return *this;
}


const matrix matrix::operator*(const matrix& right)
{ 
	if(size!=right.size)
{
cout <<"Multiplication is impossible. The dimensions is different.\n";
return *this;
}
	else
{	matrix result(size);
	for(int i=0;i<size; i++){		
		for(int j=0; j<size; j++)
			result.ptr[i][j]=0;}
	
		for(int i=0;i<size; i++){		
		for(int j=0; j<size; j++){
				
			for(int m=0; m<size-1; m++)
    result. ptr[i][j]+=ptr[i][m]*right.ptr[m][j];
    }}
				
   
	
  


return result;
}

}

const matrix &matrix::operator=(const matrix& right)
{
if (this != &right)
{
	for(int i=0;i<size;i++)
		delete [] ptr[i];
	delete [] ptr;
	size = right.size;
	ptr = new int*[size];
	for (int i=0; i<size;i++)
		ptr[i]= new int[size];
	assert(ptr!=0);
	for (int j=0;j<size;j++)
	for (int i=0;i<size;i++)
		ptr[i][j]=right.ptr[i][j];
}
return*this;
}

const matrix matrix::operator+(const matrix& right)
{ if(size!=right.size)
{
cout <<"Adding is impossible. The dimensions is different.\n";
return *this;
}
else
{
matrix result(size);


for ( int j =0; j<size;j++)
for ( int i=0;i<size;i++)
result.ptr[i][j]= ptr[i][j]+right.ptr[i][j];
return result;

}
}

const matrix matrix::operator-(const matrix& right)
{ if(size!=right.size)
{
cout <<"Subtraction is impossible. The dimensions is different.\n";
return *this;
}
else
{
matrix result(size);


for ( int j =0; j<size;j++)
for ( int i=0;i<size;i++)
result.ptr[i][j]= ptr[i][j]-right.ptr[i][j];
return result;

}
}