//#include<iostream>
//#include <string>
//#include"Question 03.h"
//
//using namespace std;
//
//template<typename T, int SIZE>
//Stack<T, SIZE>::Stack() : topIndex(-1) {}
//
//template<typename T, int SIZE>
//void Stack<T, SIZE>::push(const T& element) {
//    if (topIndex < SIZE - 1) {
//        data[++topIndex] = element;
//    }
//}
//
//template<typename T, int SIZE>
//void Stack<T, SIZE>::pop() {
//    if (topIndex >= 0) {
//        --topIndex;
//    }
//}
//
//template<typename T, int SIZE>
//T& Stack<T, SIZE>::top() const {
//    return data[topIndex];
//}
//
//template<typename T, int SIZE>
//bool Stack<T, SIZE>::empty() const {
//    return topIndex == -1;
//}