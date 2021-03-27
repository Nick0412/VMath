#ifndef VECTOR_H
#define VECTOR_H

#include <array>
#include <iostream>

namespace VMath
{
    // Forward declaration of Vector class.
    template <typename type = double, std::size_t size = 1>
    class Vector;

    // Forward declaration of operator* function.
    template <typename type, std::size_t size>
    Vector<type, size> operator*(double scalar, const Vector<type, size>& v);

    template <typename type, std::size_t size>
    class Vector
    {
    private:
        std::array<type, size> m_data;
        std::size_t m_size;

    public:
        Vector();
        Vector(std::array<type, size> data);
        Vector(const Vector& other);
        Vector& operator=(const Vector& other);

        std::size_t length() const;
        type& operator[](std::size_t idx);
        double magnitude() const;
        Vector direction() const;

        // friend Vector<type, size> operator*(double scalar, const Vector<type, size>& v);
    };

    // template <typename type, std::size_t size>
    // Vector<type, size> operator*(double scalar, const Vector<type, size>& v);
    

    // template <typename type, std::size_t size>
    // std::ostream& operator<<(std::ostream& os, const Vector<type, size>& v);
}

#include "vector.hpp"

#endif