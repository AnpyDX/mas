/**
 * @project: mas-lib
 * @brief Vector Helper Functions
 * @version 0.1
 */

#pragma once
#include "Vector2.hpp"
#include "Vector3.hpp"
#include "Vector4.hpp"

#include <cmath>

namespace mas {
    
    /** @section Cast Vector<src_T> to Vector<dst_T>
      * @note supported src_T: <int> <float> <double> 
     */
    
    /**
    * @brief cast Vector2<int> to Vector2<dst_T>
    */
    template <typename T>
    Vector2<T> cast_to(const Vector2<int>& v) {
        return Vector2<T> { static_cast<T>(v.x), static_cast<T>(v.y) };
    }
    
    /**
    * @brief cast Vector2<float> to Vector2<dst_T>
    */
    template <typename T>
    Vector2<T> cast_to(const Vector2<float>& v) {
        return Vector2<T> { static_cast<T>(v.x), static_cast<T>(v.y) };
    }

    /**
    * @brief cast Vector2<double> to Vector2<dst_T>
    */
    template <typename T>
    Vector2<T> cast_to(const Vector2<double>& v) {
        return Vector2<T> { static_cast<T>(v.x), static_cast<T>(v.y) };
    }
    

    /** @section Get Vector Length */

    /** @section Get Normalized Vector */

    /**
     * @brief Dot Product of Vector
     */
    template <typename T>
    T dot(const Vector2<T>& v1, const Vector2<T>& v2) {
        return v1.x * v2.x + v1.y * v2.y;
    }
}