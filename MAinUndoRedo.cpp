#include"UndoRedo.h"
#include<iostream>
using namespace std;
int main()
{
	UndoRedo o(5);
	o.memoriseOperations(1);
	o.memoriseOperations(2);
	o.memoriseOperations(3);
	o.memoriseOperations(4);
	o.memoriseOperations(5);
	o.memoriseOperations(6);
	cout << "undo : " << o.undo() << "\n";
	cout << "undo : " << o.undo() << "\n";
	cout << "undo : " << o.undo() << "\n";
	
	//o.memoriseOperations(9);
	//cout << "undo : " << o.undo() << "\n";
	
	cout << "redo : " << o.redo() << "\n";
	/*
	cout << "redo : " << o.redo() << "\n";
	*/

	
	
	return 0;
}
