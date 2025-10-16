#include <iostream>

int& uvecanje(int niz[], int a)
{
	return niz[a];
}


int main()
{
	int niz[5] = { 1,2,3,4,5 };
	int i = 3;
	uvecanje(niz, i)+=1;
	for (int a : niz) {
		std::cout << a << " ";
	}
	return 0;
}