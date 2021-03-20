#pragma once
#include <initializer_list>
#include <cstring>

template<class T>
class Vector {
    public:
    Vector() : Vector(0) {}

    Vector(int initialSize) : m_size(initialSize) {
        dataPtr = new T[m_size];
    }

    Vector(std::initializer_list<T> list) : Vector(list.size()) {
        std::memcpy(dataPtr, list.begin(), sizeof(T) * m_size);
    }

    ~Vector() {
        delete [] dataPtr;
    }

    inline int size() {
        return m_size;
    }

    //int capacity();
    //void shrinkToFit();
    void pushBack(const T& value) {
        m_size++;
        T* tmpPtr = new T[m_size];
        std::memcpy(tmpPtr, dataPtr, sizeof(T) * (m_size - 1));
        delete [] dataPtr;
        dataPtr = tmpPtr;
        dataPtr[m_size - 1] = value;
    }

    void popBack() {
        m_size--;
        T* tmpPtr = new T[m_size];
        std::memcpy(tmpPtr, dataPtr, sizeof(T) * m_size);
        delete [] dataPtr;
        dataPtr = tmpPtr;
    }

    inline T& operator[](int index) {
        return dataPtr[index];
    }

    private:
    int m_size;
    //int m_capacity;
    T* dataPtr;
};
