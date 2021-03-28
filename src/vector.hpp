#include <cmath>
#include <stdexcept>

namespace VMath
{
    template <typename type, std::size_t size>
    Vector<type, size>::Vector()
    : m_size{size}, m_data{std::array<type, size>()}
    {

    } 

    template <typename type, std::size_t size>
    Vector<type, size>::Vector(std::array<type, size> data)
    : m_size{size}, m_data{data}
    {

    }

    template <typename type, std::size_t size>
    Vector<type, size>::Vector(const Vector& other)
    : m_size{other.m_size}, m_data{other.m_data}
    {

    }

    template <typename type, std::size_t size>
    Vector<type, size>& Vector<type, size>::operator=(const Vector& other)
    {
        m_size = other.m_size;
        m_data = other.m_data;

        return *this;
    }

    template <typename type, std::size_t size>
    std::size_t Vector<type, size>::length() const
    {
        return m_size;
    }

    template <typename type, std::size_t size>
    type& Vector<type, size>::operator[](std::size_t idx)
    {
        if (idx < 0 || idx >= m_size)
        {
            throw std::out_of_range("Vector index is out of range.\n");
        }
        else
        {
            return m_data[idx];
        }
    }

    template <typename type, std::size_t size>
    double Vector<type, size>::magnitude() const
    {
        double v = 0;
        for (auto elem : m_data)
        {
            v += (elem*elem);
        }

        return std::sqrt(v);
    }

    template <typename type, std::size_t size>
    Vector<type, size> Vector<type, size>::direction() const
    {
        auto m = magnitude();
        if (m == 0.0)
        {
            return 0.0 * (*this);
        }
        else
        {
            return (1.0/m) * (*this);
        }
    }

    template <typename type, std::size_t size>
    Vector<type, size> operator*(double scalar, const Vector<type, size>& v)
    {
        auto new_vec{v};
        for (auto& elem : new_vec.m_data)
        {
            elem *= scalar;
        }
        return new_vec;
    }

    template <typename type, std::size_t size>
    double dotProduct(Vector<type, size> v1, Vector<type, size> v2)
    {
        double sum{0.0};
        for (std::size_t i = 0; i < size; i++)
        {
            sum += v1[i] * v2[i];
        }
        return sum;
    }

    template <typename type, std::size_t size>
    std::ostream& operator<<(std::ostream& os, const Vector<type, size>& v)
    {
        os << "[";
        for (auto elem : v.m_data)
        {
            os << elem << ", ";
        }
        os << "\b\b]";
        return os;
    }
}