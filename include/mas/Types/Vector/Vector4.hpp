/**
 * @project: mas-lib
 * @brief Vector Type 4D
 * @version 0.1
 */

#pragma once
#include <cmath>
#include "Vector3.hpp"

namespace mas {
    template <typename T>
    class Vector4 {
    public:
        Vector4() = default;
        explicit Vector4(const T& n)
        : x(n), y(n), z(n), w(n) {}

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
}