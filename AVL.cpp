#include "AVL.h"

void main()
{
	srand(time(NULL));

	AVLTree<long long>* tree = new AVLTree<long long>([](long long a, long long b)
	{
		if (a > b) return 1;
		if (a == b) return 0;
		if (a < b) return -1;
	});

	for (long long i = 0; i < 1000000; i++)
	{
		tree->add(i);
	}
	cout << "Length: " << tree->Lenght() << endl;
	cout << "Height: " << tree->TreeHeight() << endl;

	AVLTree<long long>* rtree = new AVLTree<long long>([](long long a, long long b)
	{
		if (a > b) return 1;
		if (a == b) return 0;
		if (a < b) return -1;
	});

	for (long long i = 0; i < 1000000; i++)
	{
		rtree->add(rand()% 1000000);
	}
	cout << "Length: " << rtree->Lenght() << endl;
	cout << "Height: " << rtree->TreeHeight() << endl;

	cin.get();
}