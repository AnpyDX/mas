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
     * @param pos position of camera
     * @param center position where camera looking at
     * @param up camera up direction
     * @return Matrix4<T> generated lookAt martix
     */
    template <typename T>
    inline Matrix4<T> lookAt(const Vector3<T>& pos, const Vector3<T>& center, const Vector3<T>& up) {
        Vector3<T> dir = normalize(pos - center);
        Vector3<T> right = normalize(cross(up, dir));
        Matrix4<T> result {
            right.x, right.y, right.z, 0,
            up.x,    up.y,    up.z,    0,
            dir.x,   dir.y,   dir.z,   0,
            0, 0, 0, 1
        };
        result[0][3] = -right.x * pos.x - right.y * pos.y - right.z * pos.z;
        result[1][3] = -up.x * pos.x - up.y * pos.y - up.z * pos.z;
        result[2][3] = -dir.x * pos.x - dir.y * pos.y - dir.z * pos.z;

        return result;
    }
}