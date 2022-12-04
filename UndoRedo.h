#ifndef UNDO_REDO_H
#define UNDO_REDO_H
class UndoRedo
{
	int* record;
	int noOfOperations;
	int capacity;
	bool wasLastOpMemorise;
	bool isFull();
	void shift();
public:
	UndoRedo(int c = 10);
	void memoriseOperations(int op);
	int undo();
	int redo();
};
#endif // !UNDO_REDO_H
