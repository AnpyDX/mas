/**
 * @project: mas-lib
 * @brief Vector Type 2D
 * @version 0.1
 */

#pragma once
#include <cmath>

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

    template <typename T1, typename T2>
    inline Vector2<T1> operator/(const Vector2<T1>& v, const T2& n) {
        return Vector2<T1> { v.x / static_cast<T1>(n), v.y / static_cast<T1>(n) };
    }

    template <typename T1, typename T2>
    inline Vector2<T2> operator/(const T1& n, const Vector2<T2>& v) {
        return Vector2<T2> { static_cast<T2>(n) / v.x, static_cast<T2>(n) / v.y };
    }

    template <typename T>
    inline T length(Vector2<T> v) {
        return std::sqrt(std::pow(v.x, 2) + std::pow(v.y, 2));
    }

    template <typename T>
    inline Vector2<T> normalize(Vector2<T> v) {
        double v_len = length(v);
        return Vector2<T> { v.x / static_cast<T>(v_len), v.y /static_cast<T>(v_len) };
    }
};