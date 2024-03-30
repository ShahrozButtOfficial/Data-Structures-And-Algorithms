//#include<iostream>
//#include"Question 02.h"
//using namespace std;
//
//// Default parameterized constructor
//template <typename T>
//Set<T>::Set(int capacity) : data(nullptr), noOfElements(0), capacity(capacity) {
//    if (capacity > 0) {
//        data = new T[capacity];
//    }
//}
//
//// Copy constructor
//template <typename T>
//Set<T>::Set(const Set<T>& ref) : noOfElements(ref.noOfElements), capacity(ref.capacity) {
//    data = new T[capacity];
//    for (int i = 0; i < noOfElements; i++) {
//        data[i] = ref.data[i];
//    }
//}
//
//// Destructor
//template <typename T>
//Set<T>::~Set() {
//    delete[] data;
//}
//
//// Insert function to store an element in the array
//template <typename T>
//void Set<T>::insert(T element) {
//    if (noOfElements < capacity) {
//        data[noOfElements++] = element;
//    }
//}
//
//// Remove function to remove an element from the array
//template <typename T>
//void Set<T>::remove(T element) {
//    for (int i = 0; i < noOfElements; i++) {
//        if (data[i] == element) {
//            for (int j = i; j < noOfElements - 1; j++) {
//                data[j] = data[j + 1];
//            }
//            --noOfElements;
//            break;
//        }
//    }
//}
//
//// Get the number of elements in the array
//template <typename T>
//int Set<T>::getnoOfElements() const {
//    return noOfElements;
//}
//
//// Calculate the union of two sets
//template <typename T>
//Set<T> Set<T>::calcUnion(const Set<T>& s2) const {
//    Set<T> result(noOfElements + s2.noOfElements);
//    for (int i = 0; i < noOfElements; i++) {
//        result.insert(data[i]);
//    }
//    for (int i = 0; i < s2.noOfElements; i++) {
//        result.insert(s2.data[i]);
//    }
//    return result;
//}
//
//// Check if a value is a member of the set
//template <typename T>
//int Set<T>::isMember(T val) const {
//    for (int i = 0; i < noOfElements; i++) {
//        if (data[i] == val) {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//// Resize the array to a new capacity
//template <typename T>
//void Set<T>::resize(int newCapacity) {
//    if (newCapacity > capacity) {
//        T* newData = new T[newCapacity];
//        for (int i = 0; i < noOfElements; i++) {
//            newData[i] = data[i];
//        }
//        delete[] data;
//        data = newData;
//        capacity = newCapacity;
//    }
//}