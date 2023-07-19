/**
 * @project: mas-lib
 * @brief Matrix 2x2 Type
 * @version 0.11
 */

#pragma once

namespace mas {

    template <typename T>
    class Matrix2 {
    public:
        Matrix2() = default;
        explicit Matrix2(const T& n) {
            this->Matrix2(
                n, static_cast<T>(0),
                static_cast<T>(0), n
            );
        }

        Matrix2(const T& x1, const T& y1, const T& x2, const T& y2) {
            _data[0][0] = x1;
            _data[0][1] = y1;
            _data[1][0] = x2;
            _data[1][1] = y2;
        }

    private:
        T _data[2][2];
    };

    
}