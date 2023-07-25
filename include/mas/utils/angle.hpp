/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Utils.Angle: Angle Utils
 * @version 0.11
 */

#pragma once
#include "constants.hpp"

namespace mas {
    /**
     * @brief transform degress to radians
     * @param degress
     */
    template <typename T>
    inline T radians(const T& degress) {
        return static_cast<T>((degress / 180.0) * PI);
    }

    /**
     * @brief transform radians to degress
     * @param radians
     */
    template <typename T>
    inline T degress(const T& radians) {
        return static_cast<T>((radians / PI) * 180.0);
    }
}