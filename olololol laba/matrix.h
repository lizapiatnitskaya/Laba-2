

#include <iostream>
using namespace std;
class matrix {
	friend ostream &operator<<(ostream &, const matrix &);

	
public:
	matrix(int=2);
	matrix( const matrix &);
	const matrix &operator+=(const matrix&);
	const matrix operator+(const matrix&);
	const matrix &operator-=(const matrix&);
	 const matrix operator*(const matrix&);
	 const matrix operator-(const matrix&);
	const matrix &operator=(const matrix&);
	~matrix();
private:
	int **ptr;
	int size;
};
