/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Utils.Transform: Transform Utils
 * @version 0.11
 */

#pragma once
#include "../types/shared_common.hpp"

namespace mas {
    /**
     * @brief get a translate matrix
     * @param m previous_matrix
     * @param v movement factor
     * @return Matrix4<T> 
     */
    template <typename T>
    inline Matrix4<T> translate(Matrix4<T> m, const Vector3<T>& v) {
        m[0][3] += v.x;
        m[1][3] += v.y;
        m[2][3] += v.z;
        return m;
    }

    template <typename T>
    inline Matrix4<T> rotate(Matrix4<T> m, const Vector4<T>& v) {
        
    }

    /**
     * @brief get a rotate matrix
     * @param m previous_matrix
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