#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// STACK

// Sử dụng LINKED LIST
struct STACK
{
	int data;
	STACK* next;
};
void push(int value)
{
	STACK* s = new STACK;
	s->data = value;
	s->next = TOP;
	TOP = s;
}
void pop()
{
	if (TOP == NULL)
		cout << "Stack is empty" << endl;
	else
	{
		STACK* temp;
		temp = TOP;
		TOP = TOP->next;
		temp->next = NULL;
		delete temp;
	}
}
void top()
{
	if (TOP == NULL)
		cout << "Stack is empty" << endl;
	else
		cout << TOP->data;
}
int size()
{
	int sizeStack = 0;
	if (TOP == NULL)
		return 0;
	else
	{
		while (TOP->next)
		{
			TOP = TOP->next;
			sizeStack++;
		}
	}
	return sizeStack;
}
void printStack()
{
	if (TOP == NULL)
		cout << "Stack is empty" << endl;
	else
	{
		cout << "Top of stack is " << TOP->data << endl;
		if (TOP->next != NULL)
		{
			cout << "Other Elements are : ";
			STACK* current = TOP->next;

			while (current)
			{
				cout << current->data << " ";
				current = current->next;
			}
			cout << endl;
		}
	}
}
STACK* TOP = NULL;


// Cài đặt bằng mảng
//
//int top = -1;
// 
//bool IsFull(int capacity){
//    if(top >= capacity - 1){
//        return true;
//    }else{
//        return false;
//    }
//}
// 
//bool IsEmpty(){
//    if(top == -1){
//        return true;
//    }else{
//        return false;
//    }
//}
// 
//void Push(int stack[], int value, int capacity){
//    if(IsFull(capacity) == true){
//        printf("\nStack is full. Overflow condition!");
//    }else{
//        ++top;
//        stack[top] = value;
//    }
//}
// 
//void Pop(){
//    if(IsEmpty() == true){
//        printf("\nStack is empty. Underflow condition!");
//    }else{
//        --top;
//    }
//}
// 
// 
//int Top(int stack[]){
//    return stack[top];
//}
// 
//int Size(){
//    return top + 1;
//}
// 
//int main(){
//    int capacity = 3; 
//    int top = -1; 
//    int stack[capacity];
//    
//    // pushing element 5 in the stack .
//    Push(stack, 5, capacity); 
//    
//    printf("\nCurrent size of stack is %d", Size());
//    
//    Push(stack, 10, capacity);
//    Push(stack, 24, capacity);
//    
//    printf("\nCurrent size of stack is %d", Size());
//    
//    // As the stack is full, further pushing will show an overflow condition.
//    Push(stack, 12, capacity); 
//    
//    //Accessing the top element
//    printf("\nThe current top element in stack is %d", Top(stack));
//    
//    //Removing all the elements from the stack
//    for(int i = 0 ; i < 3;i++)
//        Pop();
//    printf("\nCurrent size of stack is %d", Size());
//    
//    //As the stack is empty , further popping will show an underflow condition.
//    Pop();  
//}


// QUEUE
// Thêm phần tử vào cuối
//void Enqueue(int queue[], int element, int& rear, int arraySize) 
//{
//	if (rear == arraySize)            // Queue is full
//		printf("OverFlow\n");
//	else {
//		queue[rear] = element;    // Add the element to the back
//		rear++;
//	}
//}
//// Xóa phần tử ở đầu
//void Dequeue(int queue[], int& front, int rear) 
//{
//	if (front == rear)            // Queue is empty
//		printf("UnderFlow\n");
//	else {
//		queue[front] = 0;        // Delete the front element
//		front++;
//	}
//}
//// Lấy giá trị ở đầu
//int Front(int queue[], int front) 
//{
//	return queue[front];
//}
//int Size(int front, int rear) 
//{
//	return (rear - front);
//}
//bool IsEmpty(int front, int rear) 
//{
//	return (front == rear);
//}
//int main() {
//	char queue[20] = { 'a', 'b', 'c', 'd' };
//	int front = 0, rear = 4;
//	int arraySize = 20;                // Size of the array
//	int N = 3;                    // Number of steps
//	char ch;
//	for (int i = 0; i < N; ++i) {
//		ch = Front(queue, front);
//		Enqueue(queue, ch, rear, arraySize);
//		Dequeue(queue, front, rear);
//	}
//	for (int i = front; i < rear; ++i)
//		printf("%c", queue[i]);
//	printf("\n");
//	return 0;
//}



int main()
{
	// Dùng thư viện có sẵn

	stack <int> stackData; // Khởi tạo stack
	// Đưa phần tử vào
	stackData.push(0);
	stackData.push(1);
	stackData.push(2);
	stackData.push(3);
	// Lấy số lượng phần tử mà nó sở hữu
	int size = stackData.size();
	cout << "SIZE: " << size << endl;
	// Lấy dữ liệu ra 
	//stackData.pop();
	// Kiểm tra danh sách có tồn tại phần tử hay không empty()
	// Hiển thị danh sách phần tử, lấy giá trị trong stack 
	while (!stackData.empty())
	{
		cout << '\t' << stackData.top();
		stackData.pop();
	}
	cout << '\n';
	// Hai stack có số lượng phần tử khác nhau vẫn có thể đổi chỗ cho nhau 
	stack<int> stackData2;
	stackData2.push(10);
	stackData2.push(11);
	stackData2.push(12);
	stackData2.push(13);
	stackData2.push(14);

	stackData.swap(stackData2);

	queue <int> queueData;
	queueData.push(1);
	queueData.push(2);
	queueData.push(3);
	queueData.push(4);
	int sizeQueue = queueData.size();
	// Lấy giá trị phần tử đầu và phần tử cuối
	int first = queueData.front();
	int last = queueData.back();



	
	return 0;
}
