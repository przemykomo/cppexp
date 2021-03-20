/*
#include "Vector.hpp"
#include <cstring>

Vector::Vector() : Vector(0) {}

Vector::Vector(int initialSize) : m_size(initialSize) {
    dataPtr = new int[m_size];
}

Vector::Vector(std::initializer_list<int> list) : Vector(list.size()) {
    std::memcpy(dataPtr, list.begin(), sizeof(int) * m_size);
}

Vector::~Vector() {
    delete [] dataPtr;
}

void Vector::pushBack(const int value) {
    m_size++;
    int* tmpPtr = new int[m_size];
    std::memcpy(tmpPtr, dataPtr, sizeof(int) * (m_size - 1));
    delete [] dataPtr;
    dataPtr = tmpPtr;
    dataPtr[m_size - 1] = value;
}

void Vector::popBack() {
    m_size--;
    int* tmpPtr = new int[m_size];
    std::memcpy(tmpPtr, dataPtr, sizeof(int) * m_size);
    delete [] dataPtr;
    dataPtr = tmpPtr;
}*/
