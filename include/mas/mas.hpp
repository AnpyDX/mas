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

/** @section Matrix Types*/
#include "types/matrix/Matrix2.hpp"
#include "types/matrix/Matrix3.hpp"
#include "types/matrix/Matrix4.hpp"
#include "types/matrix/Common.hpp"


/** @section Reserved Type macro */
namespace mas {
#if defined(MAS_RTYPE_INT)
    using vec2 = Vector2<int>;
    using vec3 = Vector3<int>;
    using vec4 = Vector4<int>;
    using mat2 = Matrix2<int>;
    using mat3 = Matrix3<int>;
    using mat4 = Matrix4<int>;

#elif defined(MAS_RTYPE_FLOAT)
    using vec2 = Vector2<float>;
    using vec3 = Vector3<float>;
    using vec4 = Vector4<float>;
    using mat2 = Matrix2<float>;
    using mat3 = Matrix3<float>;
    using mat4 = Matrix4<float>;

#elif defined(MAS_RTYPE_DOUBLE)
    using vec2 = Vector2<double>;
    using vec3 = Vector3<double>;
    using vec4 = Vector4<double>;
    using mat2 = Matrix2<double>;
    using mat3 = Matrix3<double>;
    using mat4 = Matrix4<double>;

#endif
}