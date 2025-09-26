#include <iostream>
using namespace std;
#define MAX 100

class Stack {
    int array[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        top++;
        array[top] = value;
        cout << "Pushed: " << value << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is Empty! Cannot pop." << endl;
            return -1; 
         }
        int val = array[top];
        top--;
        cout << "Popped: " << val << endl;
        return val;
    }
};

int main() {
    Stack st;
    st.push(20);
    st.push(39);
    st.push(42);
    st.push(31);

    st.pop();
    st.push(21);

    st.pop();
    st.pop();
    st.pop();
    st.pop();  
    st.pop();
    st.pop();

    return 0;
}
