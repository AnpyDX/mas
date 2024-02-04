/**
* mas-lib (https://github.com/anpydx/mas)
*    a lightweight linear math library
* @copyright Copyright (c) 2023-2024 anpyd, All Rights Reserved.
*
* @version: 2.0
* @brief: transform matrix generator utils
*/

#pragma once
#include "../types/shared_common.hpp"

namespace mas {
    /**
     * @brief generate a translate matrix
     * @param m previous matrix
     * @param v movement factor
     * @return Matrix4<T>
     */
    template <typename T>
    inline Matrix4<T> translate(Matrix4<T> m, const Vector3<T>& v) {
        m[3][0] += v.x;
        m[3][1] += v.y;
        m[3][2] += v.z;
        return m;
    }

    /**
     * @brief generate a rotate matrix
     * @param m previous matrix
     * @param v rotation axis
     * @param angle rotate angle
     * @return Matrix4<T>
     */
    template <typename T>
    inline Matrix4<T> rotate(Matrix4<T> m, const Vector3<T>& v, double angle) {
        T sin_a = static_cast<T>(std::sin(angle));
        T cos_a = static_cast<T>(std::cos(angle));
        T one_cos_a = static_cast<T>(1 - std::cos(angle));

        return m * Matrix4<T>{
            cos_a + v.x * v.x * one_cos_a,
            v.x * v.y * one_cos_a - v.z * sin_a,
            v.x * v.z * one_cos_a + v.y * sin_a,
            0,

            v.y * v.x * one_cos_a + v.z * sin_a,
            cos_a + v.y * v.y * one_cos_a,
            v.y * v.z * one_cos_a - v.x * sin_a,
            0,

            v.z * v.x * one_cos_a - v.y * sin_a,
            v.z * v.y * one_cos_a + v.x * sin_a,
            cos_a * v.z * v.z * one_cos_a,
            0,

            0, 0, 0, 1
        };
    }

    /**
     * @brief generate a scaling matrix
     * @param m previous matrix
     * @param v scaling factor
     * @return Matrix4<T>
     */
    template <typename T>
    inline Matrix4<T> scale(Matrix4<T> m, const Vector3<T>& v) {
        m[0][0] *= v.x;
        m[1][1] *= v.y;
        m[2][2] *= v.z;
        return m;
    }
}