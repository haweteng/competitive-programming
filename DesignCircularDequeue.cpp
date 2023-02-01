class MyCircularDeque {
    int *arr;
    int front;
    int rear;
    int size;
    public:
    MyCircularDeque(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }
    
    bool insertFront(int value) {
        if(isFull()){return false;}
        if(isEmpty()){front=rear=0;}
        else if((front==0) and rear!=size-1){front = size-1;}
        else{front--;}
        arr[front] = value;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()){return false;}
        if(isEmpty()){front = rear = 0;}
        else if(rear == size-1 and front!=0){
            rear = 0;
        }
        else{rear++;}

        arr[rear] = value;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()){return false;}

        int ans = arr[front];
        arr[front] = -1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{front++;}
        return true;

        
    }
    
    bool deleteLast() {
        if(isEmpty()){return false;}

        int ans = arr[rear];
        arr[rear] = -1;
        if(front==rear){front = rear = -1;}
        else if(rear==0){rear = size - 1;}
        else{rear--;}

        return true;
    }
    
    int getFront() {
        if(isEmpty()){return -1;}
        return arr[front];
    }
    
    int getRear() {
        if(isEmpty()){return -1;}
        return arr[rear];
        
    }
    
    bool isEmpty() {
        if(front == -1 and rear == -1){return true;}
        else{return false;}
    }
    
    bool isFull() {
        if((front==0 and rear==size-1) or ((front!=0) and (rear == (front-1)%(size-1)))){return true;}
        return false;
    }
};
