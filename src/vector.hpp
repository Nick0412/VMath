#include <stdexcept>

namespace VMath
{
    template <typename type, std::size_t size>
    Vector<type, size>::Vector()
    : m_size{size}, m_data{std::array<type, size>()}
    {

    } 

    // template <typename type, std::size_t size>
    // Vector<type, size>::Vector(std::array<type, size> data)
    // : m_size{size}, m_data{data}
    // {

    // }

    // template <typename type, std::size_t size>
    // Vector<type, size>::Vector(const Vector& other)
    // : m_size{other.m_size}, m_data{other.m_data}
    // {

    // }

    // template <typename type, std::size_t size>
    // Vector<type, size>& Vector<type, size>::operator=(const Vector& other)
    // {
    //     m_size = other.m_size;
    //     m_data = other.m_data;

    //     return *this;
    // }

    // template <typename type, std::size_t size>
    // std::size_t Vector<type, size>::size() const
    // {
    //     return m_size;
    // }

    // template <typename type, std::size_t size>
    // type& Vector<type, size>::operator[](std::size_t idx)
    // {
    //     if (idx < 0 || idx >= m_size)
    //     {
    //         throw std::out_of_range("Vector index is out of range.\n");
    //     }
    //     else
    //     {
    //         return m_data[idx];
    //     }
    // }

    // template <typename type, std::size_t size>
    // std::ostream& operator<<(std::ostream& os, const Vector<type, size>& v)
    // {
    //     for (auto elem  : v.m_data)
    //     {
    //         os << elem << " ";
    //     }
    //     os << "\n";
    //     return os;
    // }
}