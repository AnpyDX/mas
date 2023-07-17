/**
 * @project: mas-lib
 * @brief Vector Type 2D
 * @version 0.1
 */

#pragma once

namespace mas {

    template<typename T>
    class Vector2 {
    public:
        Vector2() = default;
        explicit Vector2(const T& n)
        : x(n), y(n) {}

        Vector2(const T& x, const T& y)
        : x(x), y(y) {}

    public:
        union {
            T x;
            T u;
        };
        union {
            T y;
            T v;
        };
    };

    template <typename T>
    inline Vector2<T> operator-(const Vector2<T>& v) {
        return Vector2<T> { -v.x, -v.y };
    }

    template <typename T>
    inline Vector2<T> operator+(const Vector2<T>& v1, const Vector2<T>& v2) {
        return Vector2<T> { v1.x + v2.x,  v1.y + v2.y };
    }

    template <typename T>
    inline Vector2<T> operator-(const Vector2<T>& v1, const Vector2<T>& v2) {
        return Vector2<T> { v1.x - v2.x, v1.y - v2.y };
    }

    template <typename T>
    inline Vector2<T> operator*(const Vector2<T>& v1, const Vector2<T>& v2) {
        return Vector2<T> { v1.x * v2.x, v1.y * v2.y };
    }

    template <typename T>
    inline Vector2<T> operator/(const Vector2<T>& v1, const Vector2<T>& v2) {
        return Vector2<T> { v1.x / v2.x, v1.y / v2.y };
    }

    template <typename T1, typename T2>
    inline Vector2<T1> operator*(const Vector2<T1>& v, const T2& n) {
        return Vector2<T1> { v.x * static_cast<T1>(n), v.y * static_cast<T1>(n) };
    }

    template <typename T1, typename T2>
    inline Vector2<T2> operator*(const T1& n, const Vector2<T2>& v) {
        return v * n;
    }

    template <typename T>
    inline Vector2<T> operator/(const Vector2<T>& v, const T& n) {
        return Vector2<T> { v.x / static_cast<T>(n), v.y / static_cast<T>(n) };
    }

    template <typename T>
    inline Vector2<T> operator/(const T& n, const Vector2<T>& v) {
        return Vector2<T> { static_cast<T>(n) / v.x, static_cast<T>(n) / v.y };
    }

};