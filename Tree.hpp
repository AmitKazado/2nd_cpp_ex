#include <iostream>
using namespace std;


namespace ariel{
struct treeNode{

    int data;
    treeNode* tParent;
    treeNode* leftSon;
    treeNode* rightSon;
};

class Tree {

    treeNode* tRoot;
    int tSize;

public:
	Tree();

	~Tree();

    int insert(int i);

     int remove(int i);

     int size();

     int contains(int i);

     int root();

     int parent(int i);

     int left(int i);

     int right(int i);

     int print();
};
};