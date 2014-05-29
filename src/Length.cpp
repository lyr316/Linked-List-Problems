/*
 * Length.cpp
 *
 *  Created on: May 28, 2014
 *      Author: real
 */

#include <node.h>

/*
 Given a linked list head pointer, compute
 and return the number of nodes in the list.
*/
int Length(node* head) {
	node* current = head;
	int count = 0;
	while (current != 0) {
		count++;
		current = current->next;
	}
	return count;
}
