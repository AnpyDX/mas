/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Matrix Common Helper Functions
 * @version 0.11
 */

#pragma once
#include "Matrix2.hpp"
#include "Matrix3.hpp"
#include "Matrix4.hpp"

namespace mas {
    template <typename T>
    Matrix2<T> inverse(Matrix2<T> m) {
        return Matrix2<T> {
            m[0][0], m[1][0],
            m[0][1], m[1][1]
        };
    }

    template <typename T>
    Matrix3<T> inverse(Matrix3<T> m) {
        return Matrix3<T> {
            m[0][0], m[1][0], m[2][0],
            m[0][1], m[1][1], m[2][1],
            m[0][2], m[1][2], m[2][2]
        };
    }
}