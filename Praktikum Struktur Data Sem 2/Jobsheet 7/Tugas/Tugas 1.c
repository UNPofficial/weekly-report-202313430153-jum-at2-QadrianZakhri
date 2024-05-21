#include <stdio.h>
#include <stdlib.h>

//Created By 23343081_Qadrian Zakhri

// Struktur untuk antrian (queue) dalam BFS
typedef struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
} Queue;

// Fungsi untuk membuat antrian dengan kapasitas tertentu
Queue* createQueue(unsigned capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Fungsi untuk memeriksa apakah antrian penuh
int isFull(Queue* queue) {
    return (queue->size == queue->capacity);
}

// Fungsi untuk memeriksa apakah antrian kosong
int isEmpty(Queue* queue) {
    return (queue->size == 0);
}

// Fungsi untuk menambahkan elemen ke antrian
void enqueue(Queue* queue, int item) {
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

// Fungsi untuk menghapus elemen dari antrian
int dequeue(Queue* queue) {
    if (isEmpty(queue))
        return -1;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

// Fungsi untuk melakukan BFS pada grafik
void BFS(int graph[][5], int startVertex, int vertices) {
    int* visited = (int*)malloc(vertices * sizeof(int));
    for (int i = 0; i < vertices; i++)
        visited[i] = 0;

    Queue* queue = createQueue(vertices);

    visited[startVertex] = 1;
    enqueue(queue, startVertex);

    while (!isEmpty(queue)) {
        int currentVertex = dequeue(queue);
        printf("Visited %d\n", currentVertex);

        for (int i = 0; i < vertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }

    free(visited);
    free(queue->array);
    free(queue);
}

int main() {
    int graph[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };

    BFS(graph, 0, 5);

    return 0;
}
