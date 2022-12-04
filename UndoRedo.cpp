#include"UndoRedo.h"
#include<iostream>
using namespace std;
bool UndoRedo::isFull()
{
	return (noOfOperations == capacity ? true : false);
}
void UndoRedo::shift()
{
	if (!record)
		return;
	for (int i = 0; i < noOfOperations - 1; i++)
		record[i] = record[i + 1];
	noOfOperations--;
}
UndoRedo::UndoRedo(int c)
{
	capacity = c;
	record = new int[capacity];
	noOfOperations = 0;
	wasLastOpMemorise = false;
}
void UndoRedo::memoriseOperations(int op)
{
	if (isFull())
		shift();
	record[noOfOperations] = op;
	noOfOperations++;
	wasLastOpMemorise = true;
}
int UndoRedo::undo()
{
	if (noOfOperations > 0)
	{
		wasLastOpMemorise = false;
		noOfOperations--;
		return record[noOfOperations];
	}
	exit(0);
}
int UndoRedo::redo()
{
	if (noOfOperations < capacity && !wasLastOpMemorise)
	{
		wasLastOpMemorise = false;
		noOfOperations++;
		return record[noOfOperations - 1];
	}
	exit(0);
}