
class IntCell{

	// member variables
	IntCell *parentNode;
	IntCell *leftNode;
	IntCell *rightNode;

	template<typename T>
	T data;

	// constructors
	IntCell() : data(NULL), parentNode(nullptr), leftNode(nullptr), rightNode(nullptr) {}

	template<typename T>
	IntCell(T data) : data(data), parentNode(nullptr), leftNode(nullptr), rightNode(nullptr) {}

	
	// member functions

	// comparators
	bool operator < (IntCell *node){

		if(data < node->data){
			return true;
		}
		else{
			return false;
		}
	}

	bool operator > (IntCell *node){
		if(data > node->data){
			return true;
		}
		else{
			return false;
		}
	}

	bool operator <= (IntCell *node){
		if(data <= node->data){
			return true;
		}
		else{
			return false;
		}
	}

	bool operator >= (IntCell *node){
		if(data >= node->data){
			return true;
		}
		else{
			return false;
		}
	}
	
}


class PointerHeap{

private:

	IntCell *root;
	IntCell *end;
	int heapSize;
	bool templateTypeSet;


public:

	PointerHeap();

	template<typename T>
	PointerHeap(T data);

	template<typename T>
	void Insert(T data);
	void DeleteMin();
	void MinHeapPercolateDown();
	void MinHeapPercolateUp();
	void PeakRoot();
	void PrintHeap();
	
};
