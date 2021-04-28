#include <iostream>

template <typename T>
void swap(T& num1, T& num2) {
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

template <typename T>
void quickSort(T* seq, int size) {
     int i = 0;
     while (i != size - 1) {
         if (seq[i] > seq[i + 1]) {
             swap(seq[i], seq[i + 1]);
             quickSort(seq, size);
         }
         i++;
     }
}


int main(){
    int arr[] = {3, 1, 9, 10, 8};
    int size_of_array = sizeof (arr) / sizeof (arr[0]);
    quickSort(arr, size_of_array);
    int i = 0;
    std::cout << "[";
    while (i != size_of_array) {
        std::cout << arr[i] << ", ";
        i++;
    }
    std::cout << "]";
    return 0;
}