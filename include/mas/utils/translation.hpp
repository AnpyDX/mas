/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Utils.Translation: MVP Translation Utils
 * @version 0.11
 */

#pragma once
#include "../types/shared_common.hpp"

namespace mas {
    /** @section Model */
    template <typename T>
    inline Matrix4<T> translation(Vector3<T> v) {
        auto res = Matrix4<T>(1.0);
        res[0][3] = v.x;
        res[1][3] = v.y;
        res[2][3] = v.z;

        return res;
    }

    /** @section View */

    /** @section Projetion */
}