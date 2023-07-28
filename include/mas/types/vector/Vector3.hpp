/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Vector Type 3D
 * @version 0.11
 */

#pragma once
#include "Vector2.hpp"

namespace mas {

    template <typename T>
    class Vector3 {
    public:
        Vector3()
        :x(0), y(0), z(0) {}

        explicit Vector3(const T& scaler)
        : x(scaler), y(scaler), z(scaler) {}

        Vector3(const Vector2<T>& v, const T& z)
        : x(v.x), y(v.y), z(z) {}

        Vector3(const T& x, const T& y, const T& z)
        : x(x), y(y), z(z) {}

    public:
        union {
            T x;
            T r;
        };
        union {
            T y;
            T g;
        };
        union {
            T z;
            T b;
        };
    };

    template <typename T>
    inline Vector3<T> operator-(const Vector3<T>& v) {
        return Vector3<T> { -v.x, -v.y, -v.z };
    }

    template <typename T>
    inline Vector3<T> operator+(const Vector3<T>& v1, const Vector3<T>& v2) {
        return Vector3<T> { v1.x + v2.x,  v1.y + v2.y, v1.z + v2.z };
    }

    template <typename T>
    inline Vector3<T> operator-(const Vector3<T>& v1, const Vector3<T>& v2) {
        return Vector3<T> { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z };
    }

    template <typename T>
    inline Vector3<T> operator*(const Vector3<T>& v1, const Vector3<T>& v2) {
        return Vector3<T> { v1.x * v2.x, v1.y * v2.y, v1.z * v2.z };
    }

    template <typename T>
    inline Vector3<T> operator/(const Vector3<T>& v1, const Vector3<T>& v2) {
        return Vector3<T> { v1.x / v2.x, v1.y / v2.y, v1.z / v2.z };
    }

    template <typename T1, typename T2>
    inline Vector3<T1> operator+(const Vector3<T1>& v, const T2& n) {
        return Vector3<T1> { v.x + n, v.y + n, v.z + n };
    }

    template <typename T1, typename T2>
    inline Vector3<T2> operator+(const T1& n, const Vector3<T2>& v) {
        return v + n;
    }

    template <typename T1, typename T2>
    inline Vector3<T1> operator-(const Vector3<T1>& v, const T2& n) {
        return Vector3<T1> { v.x - n, v.y - n, v.z - n };
    }

    template <typename T1, typename T2>
    inline Vector3<T2> operator-(const T1& n, const Vector3<T2>& v) {
        return Vector3<T2> { n - v.x, n - v.y, n - v.z };
    }

    template <typename T1, typename T2>
    inline Vector3<T1> operator*(const Vector3<T1>& v, const T2& n) {
        return Vector3<T1> { v.x * n, v.y * n, v.z * static_cast<T1>(n) };
    }

    template <typename T1, typename T2>
    inline Vector3<T2> operator*(const T1& n, const Vector3<T2>& v) {
        return v * n;
    }

    template <typename T1, typename T2>
    inline Vector3<T1> operator/(const Vector3<T1>& v, const T2& n) {
        return Vector3<T1> { v.x / n, v.y / n, v.z / n };
    }

    template <typename T1, typename T2>
    inline Vector3<T2> operator/(const T1& n, const Vector3<T2>& v) {
        return Vector3<T2> { n / v.x, n / v.y, n / v.z };
    }
}