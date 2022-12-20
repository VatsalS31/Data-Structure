    #include <stdio.h>
    #define max 5
    int queue[max];
    int front=-1,rear=-1;
    void enqueue();
    void dequeue();
    void display();
    void Front();
    void Rear();
    int main()
    {
        int ch;
        printf("BY VATSAL SHAH\n\n");
       
    
        
        do{
            printf("-------------------WELCOME TO LINEAR QUEUE PROGRAM------------------------\n");
            printf("\n\n 1 for enqueue element");
            printf("\n 2 for dequeue element");
            printf("\n 3 for display the queue");
            printf("\n 4 for front element");
            printf("\n 5 for rear element");
            printf("\n Enter your choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1:
            enqueue();
            break;
            case  2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            Front();
            break;
            case 5 :
            Rear();
            break;

            
            }

        }while(ch!=6);
    }

    void enqueue()
    {
        
        int n;
        if(rear<max-1){
            if(front==-1)                                          
            front=0;
            printf("Entre the Element to inserted in queue\n");
            scanf("%d",&n);
            queue[++rear]=n;
        }
        else
        {
            printf("overflow");
        }
    }
    void dequeue()
    {
        int n;                                           
        if(front==-1 || front>rear){                        
            printf("Queue Underflow\n");                
        }                                                   
        else                                                
        {                                                   
            n=queue[front++];                  
            printf("The element deleted :- %d\n",n);
        }
        
    }
    void display()
    {
        int i;
        if(front==-1 || front>rear)
        {
            printf("No element to be displayed\n");
        }
        else
        {
            printf("the elements in the queue  ");
            for(int i=front;i<=rear;i++)
            {
                printf("%d\t",cqueue[i]);
            }

        }

    }
    void Front()
    {
        printf("front element is ");
        printf("%d ",queue[front]);
    }
    void Rear()
    {
        printf("rear element is ");
        printf("%d ",queue[rear]);

    }
