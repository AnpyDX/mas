/**
* mas-lib (https://github.com/anpydx/mas)
*    a lightweight linear math library
* @copyright Copyright (c) 2023-2024 anpyd, All Rights Reserved.
*
* @version: 2.0
* @brief: projection matrix generator utils
*/

#pragma once
#include "../types/shared_common.hpp"

#include <cmath>

namespace mas {
    /**
     * @brief generate a perspective matrix
     * @param fov fov of view
     * @param aspect aspect of viewport (width / height)
     * @param near near plane
     * @param far far plane
     * @return Matrix4<T> generated perspective martix
     */
    template <typename T>
    inline Matrix4<T> perspective(T fov, T aspect, T near, T far) {
        float tanHalFov = tan(fov/ static_cast<float>(2));
        Matrix4<T> res(0.0);
        res[0][0] = 1.0f / (aspect * tanHalFov);
        res[1][1] = 1.0f / tanHalFov;
        res[2][2] = (far + near) / (near - far);
        res[2][3] = -1.0f;
        res[3][2] =  2.0f * near * far / (near - far);

        return res;
    }
}