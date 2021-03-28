#ifndef VECTOR_H
#define VECTOR_H

#include <array>
#include <iostream>

namespace VMath
{
    template <typename type = double, std::size_t size = 1>
    class Vector
    {
    private:
        std::array<type, size> m_data;
        std::size_t m_size;

    public:
        // Constructors and assignments
        Vector();
        Vector(std::array<type, size> data);
        Vector(const Vector& other);
        Vector& operator=(const Vector& other);

        // Standard functions
        std::size_t length() const;
        type& operator[](std::size_t idx);
        double magnitude() const;
        Vector direction() const;

        // Friend functions
        template <typename type, std::size_t size>
        friend Vector<type, size> operator*(double scalar, const Vector<type, size>& v);
        template <typename type, std::size_t size>
        friend double dotProduct(Vector<type, size> v1, Vector<type, size> v2);
        template <typename type, std::size_t size>
        friend std::ostream& operator<<(std::ostream& os, const Vector<type, size>& v);

    };
}

#include "vector.hpp"

#endif