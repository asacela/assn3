#include <iostream>

#include "PointerHeap.h"

PointerHeap::PointerHeap(){
	templateTypeSet = false;
	heapSize = 0;

}
PointerHeap::PointerHeap(T data){

	templateTypeSet = true;

	heapSize = 0;

}
PointerHeap::~PointerHeap(){



}
void PointerHeap::Insert(){

	if(root->leftNode == nullptr){
		root
	}

}
void PointerHeap::DeleteMin(int heapSize){

}

template<typename T>
void PointerHeap::MinHeapPercolateDown(IntCell *node, PointerHeap *heap, int heapSize) {
	while (node != heap->end) {
		if (node->data >= node->leftNode->data) {
			T temp = node->data;
			node->data = node->leftNode->data;
			node->leftNode->data = temp;

			node = node->leftNode;
		} else if (node->data >= node->rightNode->data) {
			T temp = node->data;
			node->data = node->rightNode->data;
			node->rightNode->data = temp;

			node = node->rightNode;
		} else {
			break;
		}
	}
}

template<typename T>
void PointerHeap::MinHeapPercolateUp(IntCell *node, PointerHeap *heap) {
	while (node != heap->root) {
		if (node->data >= node->parentNode->data) {
			break;
		} else {
			T temp = node->data;
			node->data = node->parentNode->data;
			node->parentNode->data = temp;

			node = node->parentNode;
		}
	}
}

void PointerHeap::Heapify(){

}
void PointerHeap::PeakRoot(){

}
