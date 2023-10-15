#include <iostream>

class Array {
private:
    int* A;
    int size;
    int length;

    void swap(int* x, int* y);

public:
    Array(int sz) {
        size = sz;
        length = 0;
        A = new int[size];
    }

    ~Array() {
        delete[] A;
    }

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int LinearSearch(int key);
    int Sum();
};

void Array::Display() {
    std::cout << "Elements are: ";
    for (int i = 0; i < length; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

void Array::Insert(int index, int x) {
    if (index >= 0 && index <= length && length < size) {
        for (int i = length; i > index; i--) {
            A[i] = A[i - 1];
        }
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index) {
    int x = 0;
    if (index >= 0 && index < length) {
        x = A[index];
        for (int i = index; i < length - 1; i++) {
            A[i] = A[i + 1];
        }
        length--;
    }
    return x;
}

int Array::LinearSearch(int key) {
    for (int i = 0; i < length; i++) {
        if (key == A[i]) {
            swap(&A[i], &A[0]);
            return i;
        }
    }
    return -1;
}

int Array::Sum() {
    int s = 0;
    for (int i = 0; i < length; i++) {
        s += A[i];
    }
    return s;
}

void Array::swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int sz, ch, x, index;

    std::cout << "Enter Size of Array: ";
    std::cin >> sz;
    Array arr1(sz);

    do {
        std::cout << "\n\nMenu\n";
        std::cout << "1. Insert\n";
        std::cout << "2. Delete\n";
        std::cout << "3. Search\n";
        std::cout << "4. Sum\n";
        std::cout << "5. Display\n";
        std::cout << "6. Exit\n";

        std::cout << "Enter your choice: ";
        std::cin >> ch;

        switch (ch) {
            case 1:
                std::cout << "Enter an element and index: ";
                std::cin >> x >> index;
                arr1.Insert(index, x);
                break;
            case 2:
                std::cout << "Enter index: ";
                std::cin >> index;
                x = arr1.Delete(index);
                std::cout << "Deleted Element is " << x;
                break;
            case 3:
                std::cout << "Enter element to search: ";
                std::cin >> x;
                index = arr1.LinearSearch(x);
                std::cout << "Element index: " << index;
                break;
            case 4:
                std::cout << "Sum is " << arr1.Sum();
                break;
            case 5:
                arr1.Display();
                break;
        }
    } while (ch < 6);

    return 0;
}
