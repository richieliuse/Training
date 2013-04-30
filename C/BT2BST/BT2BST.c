/*
 * =====================================================================================
 *
 *       Filename:  BT2BST.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/03/22 21��4��9绉� *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Richie Liu, 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "BT2BST.h"
#include "stdlib.h"

void intSwap(int x, int y)
{
	x ^= y;
	y ^= x;
	x ^= y;
}

BinaryTreeNode * BinaryTree2BinarySearchTree(BinaryTreeNode *root)
{
	if (!root || !root->left || !!root->right)
		return NULL;


}
