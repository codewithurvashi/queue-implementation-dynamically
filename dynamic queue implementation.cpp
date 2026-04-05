#include<iostream>
using namespace std;

#define MAX 5   

class Node {
public:
    int data;
    Node* next;
};

class QUEUE {
public:
    Node* FRONT;
    Node* REAR;
    int size;  

    QUEUE() {
        FRONT = REAR = NULL;
        size = 0;
    }
    void ISFULL() 
	{
        if (size == MAX)
            cout << "Queue is FULL\n";
        else
            cout << "Queue is NOT Full\n";
    }
    void ISempty() 
	{
        if (FRONT == NULL)
            cout << "Queue is Empty\n";
        else
            cout << "Queue is NOT Empty\n";
    }
    void Enqueue(int value) 
	{
        if (size == MAX) {
            cout << "Queue Overflow (Full)\n";
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        if (FRONT == NULL) 
		{
            FRONT = REAR = newNode;
            newNode->next = FRONT;
        } 
		else 
		{
            REAR->next = newNode;
            REAR = newNode;
            REAR->next = FRONT;
        }

        size++;
        cout << "Inserted: " << value << endl;
    }
    void Dequeue() 
	{
        if (FRONT == NULL) 
		{
            cout << "Queue Underflow\n";
            return;
        }

        Node* temp = FRONT;

        if (FRONT == REAR) 
		{
            FRONT = REAR = NULL;
        } 
		else 
		{
            FRONT = FRONT->next;
            REAR->next = FRONT;
        }

        cout << "Deleted: " << temp->data << endl;
        delete temp;
        size--;
    }
    void Display() 
	{
        if (FRONT == NULL) 
		{
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = FRONT;
        cout << "Queue Elements: ";

        do 
		{
            cout << temp->data;
            temp = temp->next;
            if (temp != FRONT)
                cout << ",";
        } while (temp != FRONT);

        cout << endl;
    }
    void Peep()
	 {
        if (FRONT == NULL)
            cout << "Queue Empty\n";
        else
            cout << "Front Element: " << FRONT->data << endl;
    }
};

int main() 
{
    QUEUE obj;
    int choice, value;

    do {
        cout<<"\n1.Enqueue\n2.Display\n3.Dequeue\n4.Peep\n5.ISempty\n6.ISFULL\n7.Exit\n";
        cout<<"Enter the choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                obj.Enqueue(value);
                break;

            case 2:
                obj.Display();
                break;

            case 3:
                obj.Dequeue();
                break;

            case 4:
                obj.Peep();
                break;

            case 5:
                obj.ISempty();
                break;

            case 6:
                obj.ISFULL();
                break;

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 7);

    return 0;
}
