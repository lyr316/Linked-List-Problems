/*
 * BuildOneTwoThree.cpp
 *
 *  Created on: May 28, 2014
 *      Author: real
 */

#include "node.h"

/*
 Build the list {1, 2, 3} in the heap and store
 its head pointer in a local stack variable.
 Returns the head pointer to the caller.
*/
node* BuildOneTwoThree() {
/*	node* head = 0;
	node* second = 0;
	node* third = 0;
	head = new node; // allocate 3 nodes in the heap
	second = new node;
	third = new node;
	head->data = 1; // setup first node
	head->next = second; // note: pointer assignment rule
	second->data = 2; // setup second node
	second->next = third;
	third->data = 3; // setup third link
	third->next = 0;
	// At this point, the linked list referenced by "head"
	// matches the list in the drawing.
	return head;*/

	node* head = new node;
	node* second = new node;
	node* third = new node;

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = 0;

	return head;

}
