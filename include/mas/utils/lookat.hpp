/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Utils.LookAt: LookAt Matrix Genearator Utils
 * @version 0.11
 */

#pragma once
#include "../types/shared_common.hpp"


namespace mas {

    /**
     * @brief generate a lookat matrix
     * @param pos camera position
     * @param front camera front direction
     * @param up camera up direction
     * @return Matrix4<T> 
     */
    template <typename T>
    inline Matrix4<T> lookAt(const Vector3<T>& pos, const Vector3<T> front, const Vector3<T> up) {
        return Matrix4<T> {
            
        };
    }
}