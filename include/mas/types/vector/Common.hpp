/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Vector Common Helper Functions
 * @version 0.11
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
    inline Vector2<T> cast_to(const Vector2<int>& v) {
        return Vector2<T> { static_cast<T>(v.x), static_cast<T>(v.y) };
    }
    
    /**
    * @brief cast Vector2<float> to Vector2<dst_T>
    */
    template <typename T>
    inline Vector2<T> cast_to(const Vector2<float>& v) {
        return Vector2<T> { static_cast<T>(v.x), static_cast<T>(v.y) };
    }

    /**
    * @brief cast Vector2<double> to Vector2<dst_T>
    */
    template <typename T>
    inline Vector2<T> cast_to(const Vector2<double>& v) {
        return Vector2<T> { static_cast<T>(v.x), static_cast<T>(v.y) };
    }

    /**
    * @brief cast Vector3<int> to Vector3<dst_T>
    */
    template <typename T>
    inline Vector3<T> cast_to(const Vector3<int>& v) {
        return Vector3<T> { static_cast<T>(v.x), static_cast<T>(v.y), static_cast<T>(v.z) };
    }

    /**
    * @brief cast Vector3<float> to Vector3<dst_T>
    */
    template <typename T>
    inline Vector3<T> cast_to(const Vector3<float>& v) {
        return Vector3<T> { static_cast<T>(v.x), static_cast<T>(v.y), static_cast<T>(v.z) };
    }

    /**
    * @brief cast Vector3<double> to Vector3<dst_T>
    */
    template <typename T>
    inline Vector3<T> cast_to(const Vector3<double>& v) {
        return Vector3<T> { static_cast<T>(v.x), static_cast<T>(v.y), static_cast<T>(v.z) };
    }

    /**
    * @brief cast Vector4<int> to Vector4<dst_T>
    */
    template <typename T>
    inline Vector4<T> cast_to(const Vector4<int>& v) {
        return Vector4<T> { static_cast<T>(v.x), static_cast<T>(v.y), static_cast<T>(v.z), static_cast<T>(v.w) };
    }

    /**
    * @brief cast Vector4<float> to Vector4<dst_T>
    */
    template <typename T>
    inline Vector4<T> cast_to(const Vector4<float>& v) {
        return Vector4<T> { static_cast<T>(v.x), static_cast<T>(v.y), static_cast<T>(v.z), static_cast<T>(v.w) };
    }

    /**
    * @brief cast Vector4<double> to Vector4<dst_T>
    */
    template <typename T>
    inline Vector4<T> cast_to(const Vector4<double>& v) {
        return Vector4<T> { static_cast<T>(v.x), static_cast<T>(v.y), static_cast<T>(v.z), static_cast<T>(v.w) };
    }

    /**
     * @brief cast Vector2<src_T> to Vector2<dst_T>
     */
    template <typename src_T, typename dst_T>
    inline Vector2<dst_T> cast_to(const Vector2<src_T>& v) {
        return Vector2<dst_T> { static_cast<dst_T>(v.x), static_cast<dst_T>(v.y) };
    }

    /**
     * @brief cast Vector3<src_T> to Vector3<dst_T>
     */
    template <typename src_T, typename dst_T>
    inline Vector3<dst_T> cast_to(const Vector3<src_T>& v) {
        return Vector3<dst_T> { static_cast<dst_T>(v.x), static_cast<dst_T>(v.y), static_cast<dst_T>(v.z) };
    }

    /**
     * @brief cast Vector4<src_T> to Vector4<dst_T>
     */
    template <typename src_T, typename dst_T>
    inline Vector4<dst_T> cast_to(const Vector4<src_T>& v) {
        return Vector4<dst_T> { static_cast<dst_T>(v.x), static_cast<dst_T>(v.y), static_cast<dst_T>(v.z), static_cast<dst_T>(v.w) };
    }


    /** @section Get Vector Length */
    template <typename T>
    inline double length(Vector2<T> v) {
        return std::sqrt(std::pow(v.x, 2) + std::pow(v.y, 2));
    }

    template <typename T>
    inline double length(Vector3<T> v) {
        return std::sqrt(std::pow(v.x, 2) + std::pow(v.y, 2) + std::pow(v.z, 2));
    }

    template <typename T>
    inline double length(Vector4<T> v) {
        return std::sqrt(std::pow(v.x, 2) + std::pow(v.y, 2) + std::pow(v.z, 2) + std::pow(v.w, 2));
    }


    /** @section Get Normalized Vector */
    template <typename T>
    inline Vector2<T> normalize(const Vector2<T>& v) {
        return cast_to<double, T>(cast_to<T, double>(v) / length(v));
    }

    template <typename T>
    inline Vector3<T> normalize(const Vector3<T>& v) {
        return cast_to<double, T>(cast_to<T, double>(v) / length(v));
    }

    template <typename T>
    inline Vector4<T> normalize(const Vector4<T>& v) {
        return cast_to<double, T>(cast_to<T, double>(v) / length(v));
    }


    /** @section Dot Product of Vector */
    template <typename T>
    inline T dot(const Vector2<T>& v1, const Vector2<T>& v2) {
        return v1.x * v2.x + v1.y * v2.y;
    }

    template <typename T>
    inline T dot(const Vector3<T>& v1, const Vector3<T>& v2) {
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    }

    template <typename T>
    inline T dot(const Vector4<T>& v1, const Vector4<T>& v2) {
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z +  v1.w * v2.w;
    }

    /** @section Cross Product of Vector3 */
    
    /**
     * @brief Cross Product of Vector3
     * @tparam T 
     * @param v1 
     * @param v2 
     * @return Vector3<T> (v1 x v2)
     */
    template <typename T>
    inline Vector3<T> cross(const Vector3<T>& v1, const Vector3<T>& v2) {
        return Vector3<T> {
            v1.y * v2.z - v1.z * v2.y,
            v1.z * v2.x - v1.x * v2.z,
            v1.x * v2.y - v1.y * v2.x
        };
    }

}