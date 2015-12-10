#include "binarytree.h"
#include <cstdlib>

int main() {
	btree* tree = new btree;
	for (int i = 0; i < 500; i++) {
		tree->insert(rand()%100);
	}
	delete tree;
	
	return 0;
}
