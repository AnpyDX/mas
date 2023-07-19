/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief The header of mas-lib entry
 * @version 0.11
 * @date 2023-07-16
 * @author AD-Luo (anpyd@outlook.com)
 * @copyright Copyright (c) 2023 AD-Luo, All Rights Reserved.
 */

#pragma once

/** @section Vector Types */
#include "types/vector/Vector2.hpp"
#include "types/vector/Vector3.hpp"
#include "types/vector/Vector4.hpp"
#include "types/vector/Common.hpp"

/* PreType macro */
namespace mas {
#ifdef MAS_PTYPE_INT
    using vec2 = Vector2<int>;
    using vec3 = Vector3<int>;
    using vec4 = Vector4<int>;

#elifdef MAS_PTYPE_FLOAT
    using vec2 = Vector2<float>;
    using vec3 = Vector3<float>;
    using vec4 = Vector4<float>;

#elifdef MAS_PTYPE_DOUBLE
    using vec2 = Vector2<double>;
    using vec3 = Vector3<double>;
    using vec4 = Vector4<double>;

#endif
}