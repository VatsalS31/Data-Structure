#include <stdio.h>
#include <stdlib.h>
int n, *cq, rear = -1, front = -1, z, element;
void EnQ(int element)

{
    if ((rear==front-1)||(rear==n-1 && front==0)){
        printf("OverFlow!\n");
    }
    else{
        if (rear==-1 && front==-1){
        front=0;
        rear=0;
        cq[rear]=element;
    }
    else{
        rear=rear%(n);
        rear++;
        cq[rear]=element;
    }}
}
void DeQ()

{
    if (front==-1 && rear==-1)
    {printf("Underflow!\n");}
    else{
        front=front%(n);
        front++;
    }
}
void check_front()
{
    printf("The front is %d\n", cq[front]);
}
void check_rear()
{
    printf("The rear is %d\n",cq[rear]);
}

int main()
{
    printf("Enter the size of circular queue:");
    scanf("%d", &n);
    cq = (int *)malloc(n * sizeof(int));
    printf("BY VATSAL SHAH\n\n");
    while (1)
    {
        printf("-----------------------------WELCOME TO CIRCULAR QUEUE------------------------------------");
        printf("\nChose from the following options:\n1. Enqueue\n2. Dequeue\n3. Display Front\n4. Display Rear\n5. Display the queue\n6. Exit\n");
        scanf("%d", &z);
        if (z == 1)
        {
            if (z == 1)
            {
                scanf("%d", &element);
                EnQ(element);
            }
        }
        else if (z == 2)
        {
            DeQ();
        }
        else if (z == 3)
        {
            check_front();
        }
        else if (z == 4)
        {
            check_rear();
        }
        else if (z == 5)
        {
            for (int i = front; i <= rear; i++)
            {
                printf("%d ", cq[i]);
            }
        }
        else if (z == 6)
        {
            printf("Thank you");
            break;
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
}