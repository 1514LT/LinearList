#ifndef __TREE_HPP
#define __TREE_HPP
#include "Base.hpp"
class Tree
{
private:
  Tree* left;
  Tree* right;
  int number;
public:
  Tree(int* arry);
  ~Tree();
};


#endif