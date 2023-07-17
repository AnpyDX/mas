/**
 * @project: mas-lib
 * @brief The header of mas-lib entry
 * @version 0.1
 * @date 2023-07-16
 * @author AD-Luo (anpyd@outlook.com)
 * @copyright Copyright (c) 2023 AD-Luo, All Rights Reserved.
 */

#pragma once

/** @section Vector Types */
#include "Types/Vector/Vector2.hpp"
#include "Types/Vector/Vector3.hpp"
#include "Types/Vector/Vector4.hpp"
#include "Types/Vector/Helper.hpp"


#define MAS_LTYPE_FLOAT
/* lite types marco */
namespace mas {
#ifdef MAS_LTYPE_INT
    using vec2 = Vector2<int>;
    using vec3 = Vector3<int>;
    using vec4 = Vector4<int>;

#elifdef MAS_LTYPE_FLOAT
    using vec2 = Vector2<float>;
    using vec3 = Vector3<float>;
    using vec4 = Vector4<float>;

#elifdef MAS_LTYPE_DOUBLE
    using vec2 = Vector2<double>;
    using vec3 = Vector3<double>;
    using vec4 = Vector4<double>;

#endif
}