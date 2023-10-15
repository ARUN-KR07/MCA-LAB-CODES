#include <stdio.h>

int queue[100], rear = -1, front = -1, choice, size, value, i;

void enqueue();
void dequeue();
void display();

int main() {
    printf("Circular Queue\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Select the operation to perform\n");
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

void enqueue() {
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
        printf("Queue overflow\n");
    } else {
        printf("Enter the element to be inserted: ");
        scanf("%d", &value);

        if (front == -1) {
            front = rear = 0;
            queue[rear] = value;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
            queue[rear] = value;
        } else {
            rear++;
            queue[rear] = value;
        }
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue underflow\n");
    } else {
        printf("Element dequeued: %d\n", queue[front]);

        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("The entered elements are: ");
        if (rear >= front) {
            for (i = front; i <= rear; i++) {
                printf("%d ", queue[i]);
            }
        } else {
            for (i = front; i < size; i++) {
                printf("%d ", queue[i]);
            }
            for (i = 0; i <= rear; i++) {
                printf("%d ", queue[i]);
            }
        }
        printf("\n");
    }
}
