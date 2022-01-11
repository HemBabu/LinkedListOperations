/*ICT208 Algorithms and Data Structures
Assessment 2: Linked-List Case Study 1

Each element in the link is called a node which is composed of two parts:
a. Data stored by the node
b. Link pointed to the next node in the linked list

In this assessment 2, you are required to develop a Linked List in visual studio called
LinkedList.cpp which uses a Linked List to store the browsing history in the web
browser following aspects using C++:
1. Node in the linked list with appropriate data types: each node stores in the URL
(web address), its current position (index) in the Linked List and link to the next
node in the Linked List.
2. Insertion - Adds a node at the beginning of the lined list: method signature is
void insertFirst(String newURL)
3. Deletion - Deletes a node at the beginning of the linked list: method signature
is void deleteFirst()

4. Insert Last - Adds a node at the end of the linked list: method signature is void
insertLast(String newURL)
5. Delete Last - Deletes a node from the end of the linked list: method signature
is void deleteLast()
6. Insert After - Adds a node after another node (according to the provided index
in the method parameter) of the linked list: method signature is void
insertAfter(int index)
7. Delete - Deletes a node from the linked list using the index: method signature
is voide deleteAfter(int index)
8. Search – Search through the linked list to identify the first occurrence of node
with match data against the target: method signature is int search(String url)
9. Display - Displays the complete linked list in a forward manner: method
signature is String display( )


*/


// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

class Node {
public:
	string data;
	Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << "\n ";
		n = n->next;
	}
}

// Driver code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = "https://www.youtube.com/"; // assign data in first node
	head->next = second; // Link first node with second

	second->data = "https://www.facebook.com/"; // assign data to second node
	second->next = third;

	third->data = "https://www.twitter.com/"; // assign data to third node
	third->next = NULL;

	printList(head);

	return 0;
}

// This is code is contributed by rathbhupendra

