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
    Matrix2<T> transpose(Matrix2<T> m) {
        return Matrix2<T> {
            m[0][0], m[1][0],
            m[0][1], m[1][1]
        };
    }

    template <typename T>
    Matrix3<T> transpose(Matrix3<T> m) {
        return Matrix3<T> {
            m[0][0], m[1][0], m[2][0],
            m[0][1], m[1][1], m[2][1],
            m[0][2], m[1][2], m[2][2]
        };
    }

    template <typename T>
    Matrix4<T> transpose(Matrix4<T> m) {
        return Matrix4<T> {
            m[0][0], m[1][0], m[2][0], m[3][0],
            m[0][1], m[1][1], m[2][1], m[3][1],
            m[0][2], m[1][2], m[2][2], m[3][2],
            m[0][3], m[1][3], m[2][3], m[3][3]
        };
    }
}