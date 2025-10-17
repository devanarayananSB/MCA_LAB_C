#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 100
struct MinHeap {
    int *arr;
    int size;
    int capacity;
};
// Function to create a new Min Heap
struct MinHeap* createMinHeap(int capacity) {
    struct MinHeap* heap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    heap->arr = (int*)malloc(sizeof(int) * capacity);
    heap->size = 0;
    heap->capacity = capacity;
    return heap;
}
// Helper functions
int parent(int i) { return (i - 1) / 2; }
int leftChild(int i) { return (2 * i + 1); }
int rightChild(int i) { return (2 * i + 2); }
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Maintain heap property upwards
void heapifyUp(struct MinHeap* heap, int index) {
    while (index > 0 && heap->arr[parent(index)] > heap->arr[index]) {
	swap(&heap->arr[parent(index)], &heap->arr[index]);
	index = parent(index);
    }
}
// Maintain heap property downwards
void heapifyDown(struct MinHeap* heap, int index) {
    int left = leftChild(index);
    int right = rightChild(index);
    int smallest = index;
    if (left < heap->size && heap->arr[left] < heap->arr[smallest])
	smallest = left;
    if (right < heap->size && heap->arr[right] < heap->arr[smallest])
	smallest = right;

    if (smallest != index) {
	swap(&heap->arr[index], &heap->arr[smallest]);
	heapifyDown(heap, smallest);
    }
}
// Insert element into heap
void insert(struct MinHeap* heap, int value) {
    if (heap->size == heap->capacity) {
	printf("Heap is full. Cannot insert.\n");
	return;
    }
    heap->arr[heap->size] = value;
    heap->size++;
    heapifyUp(heap, heap->size - 1);
}
// Extract minimum element
int extractMin(struct MinHeap* heap) {
int min;
    if (heap->size == 0) {
	printf("Heap is empty.\n");
	return -1;
    }
    min = heap->arr[0];
    heap
    ->arr[0] = heap->arr[heap->size - 1];
    heap->size--;
    heapifyDown(heap, 0);
    return min;
}
// Print heap contents
void printHeap(struct MinHeap* heap) {
int i;
    printf("Heap: ");
    for ( i = 0; i < heap->size; i++)
      {	printf("%d ", heap->arr[i]);
    }
    printf("\n");
}
void main()
{
int min;
    struct MinHeap* heap = createMinHeap(MAX_HEAP_SIZE);
    clrscr();
    insert(heap, 10);
    insert(heap, 20);
    insert(heap, 5);
    insert(heap, 15);
    insert(heap, 30);
    printf("Initial ");
    printHeap(heap);
    min = extractMin(heap);
    printf("Extracted Min: %d\n", min);
    printf("Heap after extraction: ");
    printHeap(heap);
    getch();
}