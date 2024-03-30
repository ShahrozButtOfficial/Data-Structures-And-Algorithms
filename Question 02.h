//#pragma once
//#ifndef Question_02_H
//#define Question_02_H
//
//template <typename T>
//class Set {
//private:
//    T* data;             // Pointer to an array of type T
//    int noOfElements;    // Number of elements in the Set
//    int capacity;        // Maximum possible number of elements that can be stored in the Set
//
//public:
//    // Default parameterized constructor
//    Set(int capacity);
//    // Copy constructor
//    Set(const Set<T>& ref);
//    // Destructor
//    ~Set();
//
//    // Insert function to store an element in the array
//    void insert(T element);
//    // Remove function to remove an element from the array
//    void remove(T element);
//
//    // Get the number of elements in the array
//    int getnoOfElements() const;
//
//    // Calculate the union of two sets
//    Set<T> calcUnion(const Set<T>& s2) const;
//
//    // Check if a value is a member of the set
//    int isMember(T val) const;
//    // Resize the array to a new capacity
//    void resize(int newCapacity);
//};
//
//#endif