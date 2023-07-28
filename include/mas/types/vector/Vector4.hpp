/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Vector Type 4D
 * @version 0.11
 */

#pragma once
#include "Vector3.hpp"

namespace mas {
    template <typename T>
    class Vector4 {
    public:
        Vector4()
        :x(0), y(0), z(0), w(0) {}

        explicit Vector4(const T& scaler)
        : x(scaler), y(scaler), z(scaler), w(scaler) {}

        Vector4(const Vector2<T>& v, const T& z, const T& w)
        : x(v.x), y(v.y), z(z), w(w) {}

        Vector4(const Vector3<T>& v, const T& w)
        : x(v.x), y(v.y), z(v.z), w(w) {}

        Vector4(const T& x, const T& y, const T& z, const T& w)
        : x(x), y(y), z(z), w(w) {}

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
        union {
            T w;
            T a;
        };
    };

    template <typename T>
    inline Vector4<T> operator-(const Vector4<T>& v) {
        return Vector4<T> { -v.x, -v.y, -v.z, -v.w };
    }

    template <typename T>
    inline Vector4<T> operator+(const Vector4<T>& v1, const Vector4<T>& v2) {
        return Vector4<T> { v1.x + v2.x,  v1.y + v2.y, v1.z + v2.z, v1.w + v2.w };
    }

    template <typename T>
    inline Vector4<T> operator-(const Vector4<T>& v1, const Vector4<T>& v2) {
        return Vector4<T> { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z, v1.w - v2.w };
    }

    template <typename T>
    inline Vector4<T> operator*(const Vector4<T>& v1, const Vector4<T>& v2) {
        return Vector4<T> { v1.x * v2.x, v1.y * v2.y, v1.z * v2.z, v1.w * v2.w };
    }

    template <typename T>
    inline Vector4<T> operator/(const Vector4<T>& v1, const Vector4<T>& v2) {
        return Vector4<T> { v1.x / v2.x, v1.y / v2.y, v1.z / v2.z, v1.w / v2.w };
    }

    template <typename T1, typename T2>
    inline Vector4<T1> operator+(const Vector4<T1>& v, const T2& n) {
        return Vector4<T1> { v.x + n, v.y + n, v.z + n, v.w + n };
    }

    template <typename T1, typename T2>
    inline Vector4<T2> operator+(const T1& n, const Vector4<T2>& v) {
        return v + n;
    }

    template <typename T1, typename T2>
    inline Vector4<T1> operator-(const Vector4<T1>& v, const T2& n) {
        return Vector4<T1> { v.x - n, v.y - n, v.z - n, v.w - n };
    }

    template <typename T1, typename T2>
    inline Vector4<T2> operator-(const T1& n, const Vector4<T2>& v) {
        return Vector4<T2> { n - v.x, n - v.y, n - v.z, n - v.w };
    }

    template <typename T1, typename T2>
    inline Vector4<T1> operator*(const Vector4<T1>& v, const T2& n) {
        return Vector4<T1> { v.x * n, v.y * n, v.z * n, v.w * n };
    }

    template <typename T1, typename T2>
    inline Vector4<T2> operator*(const T1& n, const Vector4<T2>& v) {
        return v * n;
    }

    template <typename T1, typename T2>
    inline Vector4<T1> operator/(const Vector4<T1>& v, const T2& n) {
        return Vector4<T1> { v.x / n, v.y / n, v.z / n, v.w / n };
    }

    template <typename T1, typename T2>
    inline Vector4<T2> operator/(const T1& n, const Vector4<T2>& v) {
        return Vector4<T2> { n / v.x, n / v.y, n / v.z, n / v.w };
    }

}