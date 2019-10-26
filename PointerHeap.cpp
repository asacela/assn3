PointerHeap::PointerHeap(){

	heapSize = 0;
	root = nullptr;
	end = nullptr;

}
PointerHeap::PointerHeap(T data){
	
	heapSize = 0;

	IntCell *temp = new IntCell(data);
	temp->parentNode = nullptr;
	temp->leftNode = nullptr;
	temp->rightNode = nullptr;
	root = temp;
	end = temp;

	++heapSize;
}

void PointerHeap::Insert(T data){

	//base case
	if(root == nullptr){
		root = new IntCell(data);
		root->parentNode = nullptr;
		root->leftNode = nullptr;
		root->rightNode = nullptr;
		end = root;
	}

	else{

		// if "end" is a leftNode Ptr
		if(end->parentNode->rightNode == nullptr){
			IntCell *temp = new IntCell(data);
			temp->leftNode = nullptr;
			temp->rightNode = nullptr;
			temp->parentNode = end->parentNode;

			end = temp;

			delete temp;
		}

		// if "end" is a rightNode Ptr
		else{

			// Check here if wrong
			//might need to wrap all that below with if(root != null)

			IntCell *curr = end;
			while(curr->parentNode != nullptr && curr == curr->parentNode->rightNode){
				
				curr = curr->parentNode;
			}

			IntCell *temp = new IntCell(data);
			temp->leftNode = nullptr;
			temp->rightNode = nullptr;

			if(curr->parentNode->rightNode != nullptr){

				curr = curr->parentNode->rightNode;
				while(curr->leftNode != nullptr){
					curr = curr->leftNode;
				}


			}
			else{

				curr->parentNode->rightNode = temp;
				end = curr->parentNode->rightNode;

				
			}
			delete temp;
			delete curr;

		}

		MinHeapPercolateUp(end);
	}
	++heapSize;
}

void PointerHeap::DeleteMin(){

	IntCell *temp1 = root;
	IntCell *temp2 = end;

	if(end->parentNode->rightNode == end){
		end->parentNode->rightNode = nullptr;
		end = end->parentNode->leftNode;
	}
	else{
		end->parentNode->leftNode = nullptr;
		end = end->parentNode;
	}
	

	temp2->parentNode = nullptr;
	temp2->rightNode = root->rightNode;
	temp2->leftNode = root->leftNode;

	root = temp2;

	delete temp1;
	delete temp2;

	--heapSize;

	//preserve min heap properties
	MinHeapPercolateDown(root)
	
}

void PointerHeap::MinHeapPercolateDown(IntCell *node){
	while (node != end) {
		if (node->data >= node->leftNode->data) {

			swap(node->data, node->leftNode->data);

			node = node->leftNode;
		} 
		else if (node->data >= node->rightNode->data) {
			
			swap(node->data, node->rightNode->data);

			node = node->rightNode;
		} 
		else {
			break;
		}
	}

}
void PointerHeap::MinHeapPercolateUp(IntCell *node){

	while (node != root) {

		//comparator operator
		if (node >= node->parentNode) {
			break;
		} 
		else {
			//swap
			swap(node->data, node->parentNode->data);

			node = node->parentNode;
		}
	}
}

void swap(IntCell *a, IntCell *b){
	IntCell *temp = new IntCell(node->data);
	a->data = b->leftNode->data;
	a->leftNode->data = temp->data;

	delete temp;
}

//print root->data
void PointerHeap::PeakRoot(){

	cout << root->data << endl;
}

void PointerHeap::PrintHeap(){

	// if "end" is a leftNode Ptr
	if(end->parentNode->rightNode == nullptr){
		


	}

	// if "end" is a rightNode Ptr
	else{

		// Check here if wrong
		//might need to wrap all that below with if(root != null)

		IntCell *curr = end;
		while(curr->parentNode != nullptr && curr == curr->parentNode->rightNode){
			
			curr = curr->parentNode;
		}



		if(curr->parentNode->rightNode != nullptr){

			curr = curr->parentNode->rightNode;
			while(curr->leftNode != nullptr){

			}


		}
		else{

			
		}
		delete temp;

	}


}