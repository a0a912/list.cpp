#include "List.h"
#include <iostream>

using std::cout;
using std::endl;

// To be completed for exercise 3
// ONLY CHANGE BODY OF THIS METHOD
int List::remove(int val)
{
	//stub - remove and replace with implementation
 Ex3Node* prev = head; // empty header
    Ex3Node* current = head; // the first valid node 
    int counter = 0;
    while(current != NULL){
    while(current != NULL) {
        if(current->data == val) { 
            break; 
          //continue;
        }
        else {
            cout << "data " << current->data << " does not match " << val << ".\n";
            prev = current; 
            current = current->next; // go to next data Where?
        }
    }
    if(current == NULL) { // if we reached end of list or the list is empty
        cout << "Can't remove data: no match found.\n"; 
        
    
    } else {
        cout << "Deleting: " << current << "\n";
        counter++;
        
        prev->next = current->next; // unlink the node you remove
        
        cout << prev->next << endl;
        bool check (prev->next == NULL);
        
                cout << check << endl;
            
                      
         if (current ==head)
        {
            head = current->next;
        }    
      
        delete current; // delete the node. 
       current = prev;
    } 
}
    return counter;
}

// Constructors and destructor
// Creates an empty list
List::List()
{
	head = nullptr;
}

List::~List()
{
	deleteList();
}
// Copy constructor and overloaded assignment operator not implemented

// Mutators------------------
// PARAM: val = data to be inserted
// POST: inserts val at the front of the list
void List::insert(int val)
{
	Ex3Node* newNode = new Ex3Node(val, head);
	head = newNode;
}

// int remove - see top of file

// Helper method for destructor
// (and un-implemented overloaded assignment operator)
void List::deleteList()
{
	Ex3Node* temp = head;
	while (head != nullptr) {
		head = head->next;
		delete temp;
		temp = head;
	}
}

// Accessors
bool List::check(const vector<int> & v) const
{
	Ex3Node* p = head;
	for (int x : v) {
		if (p == nullptr || p->data != x) {
			return false;
		}
		p = p->next;
	}

	return (p == nullptr); // p != nullptr list contains unchecked datas
}

// Prints the contents of the list starting from head
void List::print() const
{
	Ex3Node*p = head;
	while (p != nullptr) {
		cout << p->data << endl;
		p = p->next;
	}
}

int main(){
    vector<int> vect;
 
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    List list;
    list.insert(1);
        list.insert(1);
    list.insert(2);
    list.insert(2);
   list.insert(10);
   list.insert(10);
 int Counter = list.remove(1);
   // list.check();


   // bool checker = list.check(vect);
    //std::cout << checker << endl; Yay!!!  Thanks
    list.print();
    
   cout << "Counter = "<< Counter << endl; 
}