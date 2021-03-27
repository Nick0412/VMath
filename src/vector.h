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
        Vector();
        // Vector(std::array<type, size> data);
        // Vector(const Vector& other);
        // Vector& operator=(const Vector& other);

        // std::size_t size() const;
        // type& operator[](std::size_t idx);
        // double magnitude() const;
        // Vector direction() const;
    };

    // template <typename type, std::size_t size>
    // std::ostream& operator<<(std::ostream& os, const Vector<type, size>& v);
}

#include "vector.hpp"

#endif