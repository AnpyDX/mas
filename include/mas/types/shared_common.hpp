/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Shared Common Functions
 * @version 0.1
 */

#pragma once
#include "vector/Common.hpp"
#include "matrix/Common.hpp"

namespace mas {
    /* Matrix & Vector operator */
    template <typename T1, typename T2>
    inline Vector2<T2> operator*(Matrix2<T1> m, const Vector2<T2>& v) {
        return Vector2<T2> {
            m[0][0] * v.x + m[0][1] * v.y,
            m[1][0] * v.x + m[1][1] * v.y
        };
    }

    template <typename T1, typename T2>
    inline Vector3<T2> operator*(Matrix3<T1> m, const Vector3<T2>& v) {
        return Vector3<T2> {
            m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z,
            m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z,
            m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z
        };
    }

    template <typename T1, typename T2>
    inline Vector4<T2> operator*(Matrix4<T1> m, const Vector4<T2>& v) {
        return Vector4<T2> {
            m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z + m[0][3] * v.w,
            m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z + m[1][3] * v.w,
            m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z + m[2][3] * v.w,
            m[3][0] * v.x + m[3][1] * v.y + m[3][2] * v.z + m[3][3] * v.w
        };
    }
}