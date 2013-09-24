#include "matrix.h"
#include <time.h>
#include <stdlib.h>

matrix square(matrix[], int k);
void main()
{	
	srand(time(NULL));
	matrix t1,t2,t3;
	cout<<"Matrix t1:\n";
    cout<<t1<<endl;
	cout<<"Matrix t2:\n";
	cout<<t2<<endl;
	cout<<"Matrix t3:\n";
	cout<<t3<<endl;
	cout<<"Addiction t1+t2=\n";
	cout<<t1+t2<<endl;
	t3=t1+t2;
	cout<<"t3 = t1+t2:\n";
	cout<<t3<<endl;
	cout<<"Subtraction t3-t1=\n";
	cout<<t3-t1<<endl;
	cout<<"Multiplication t1*t2=\n";
	cout<<t1*t2<<endl;
	matrix b[2];
	cout<<" B [1] :\n";
	cout<<b[1]<<endl;
	cout<< "After squaring:\n";
	cout<<square(b,1);
	cout<<endl;
	system("pause");

}

matrix  square (matrix a[], int k)
{
return a[k]*a[k];
}
