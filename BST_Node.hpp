#include<iostream>
using namespace std;
class BST_NODE
{
public:
      BST_NODE *left;
      BST_NODE *right;
      string name;
      string address;
      int account_number;
      int password;
      int balance;
      BST_NODE();
      BST_NODE(string,string,int,int,int);
};
