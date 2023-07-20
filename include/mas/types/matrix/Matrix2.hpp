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
                n, 0,
                0, n
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

    template <typename T>
    inline Matrix2<T> operator+(const Matrix2<T>& m1, const Matrix2<T>& m2) {
        return Matrix2<T> {
            m1[0][0] + m2[0][0], m1[0][1] + m2[0][1],
            m1[1][0] + m2[1][0], m1[1][1] + m2[1][1],
        };
    }

    template <typename T>
    inline Matrix2<T> operator-(const Matrix2<T>& m1, const Matrix2<T>& m2) {
        return Matrix2<T> {
            m1[0][0] - m2[0][0], m1[0][1] - m2[0][1],
            m1[1][0] - m2[1][0], m1[1][1] - m2[1][1],
        };
    }

    template <typename T>
    inline Matrix2<T> operator*(const Matrix2<T>& m1, const Matrix2<T>& m2) {
        return Matrix2<T> {
            m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0], 
            m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1], 
            m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0], 
            m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1]
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T1> operator+(const Matrix2<T1>& m, const T2& n) {
        return Matrix2<T1> {
            m[0][0] + n, m[0][1] + n,
            m[1][0] + n, m[1][1] + n
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T2> operator+(const T1& n, const Matrix2<T2>& m) {
        return m + n;
    }

    template <typename T1, typename T2>
    inline Matrix2<T1> operator-(const Matrix2<T1>& m, const T2& n) {
        return Matrix2<T1> {
            m[0][0] - n, m[0][1] - n,
            m[1][0] - n, m[1][1] - n
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T2> operator-(const T1& n, const Matrix2<T2>& m) {
        return Matrix2<T2> {
            n - m[0][0], n - m[0][1],
            n - m[1][0], n - m[1][1]
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T1> operator*(const Matrix2<T1>& m, const T2& n) {
        return Matrix2<T1> {
            m[0][0] * n, m[0][1] * n,
            m[1][0] * n, m[1][1] * n
        }; 
    }

    template <typename T1, typename T2>
    inline Matrix2<T2> operator*(const T1& n, const Matrix2<T2>& m) {
        return m * n;
    }

}