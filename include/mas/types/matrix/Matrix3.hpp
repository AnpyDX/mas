/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Matrix 3x3 Type
 * @version 0.11
 */

#pragma once

namespace mas {
    template <typename T>
    class Matrix3 {
    public:
        Matrix3() {
            m_value[0][0] = m_value[0][1] = m_value[0][2] = \
            m_value[1][0] = m_value[1][1] = m_value[1][2] = \
            m_value[2][0] = m_value[2][1] = m_value[2][2] = 0;
        }

        explicit Matrix3(const T& scaler) {
            *this = Matrix3(
                scaler, 0, 0,
                0, scaler, 0,
                0, 0, scaler
            );
        }

        Matrix3(const T& x1, const T& y1, const T& z1,
                const T& x2, const T& y2, const T& z2,
                const T& x3, const T& y3, const T& z3) 
        {
            m_value[0][0] = x1;
            m_value[0][1] = y1;
            m_value[0][2] = z1;

            m_value[1][0] = x2;
            m_value[1][1] = y2;
            m_value[1][2] = z2;

            m_value[2][0] = x3;
            m_value[2][1] = y3;
            m_value[2][2] = z3;
        }

        T* operator[](const int& index) {
            return m_value[index];
        }

        /**
         * @brief Get matrix's data memory pointer
         * @return T* 
         */
        T* get_ptr() {
            return m_value[0];
        }

    private:
        T m_value[3][3];
    };

    template <typename T>
    inline Matrix3<T> operator+(Matrix3<T> m1, Matrix3<T> m2) {
        return Matrix3<T> {
            m1[0][0] + m2[0][0], m1[0][1] + m2[0][1], m1[0][2] + m2[0][2], 
            m1[1][0] + m2[1][0], m1[1][1] + m2[1][1], m1[1][2] + m2[1][2],
            m1[2][0] + m2[2][0], m1[2][1] + m2[2][1], m1[2][2] + m2[2][2],
        };
    }

    template <typename T>
    inline Matrix3<T> operator-(Matrix3<T> m1, Matrix3<T> m2) {
        return Matrix3<T> {
            m1[0][0] - m2[0][0], m1[0][1] - m2[0][1], m1[0][2] - m2[0][2], 
            m1[1][0] - m2[1][0], m1[1][1] - m2[1][1], m1[1][2] - m2[1][2],
            m1[2][0] - m2[2][0], m1[2][1] - m2[2][1], m1[2][2] - m2[2][2],
        };
    }

    template <typename T>
    inline Matrix3<T> operator*(Matrix3<T> m1, Matrix3<T> m2) {
        return Matrix3<T> {
            m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0] + m1[0][2] * m2[2][0],
            m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1] + m1[0][2] * m2[2][1],
            m1[0][0] * m2[0][2] + m1[0][1] * m2[1][2] + m1[0][2] * m2[2][2],

            m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0] + m1[1][2] * m2[2][0],
            m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1] + m1[1][2] * m2[2][1],
            m1[1][0] * m2[0][2] + m1[1][1] * m2[1][2] + m1[1][2] * m2[2][2],

            m1[2][0] * m2[0][0] + m1[2][1] * m2[1][0] + m1[2][2] * m2[2][0],
            m1[2][0] * m2[0][1] + m1[2][1] * m2[1][1] + m1[2][2] * m2[2][1],
            m1[2][0] * m2[0][2] + m1[2][1] * m2[1][2] + m1[2][2] * m2[2][2],
        };
    }

    template <typename T1, typename T2>
    inline Matrix3<T1> operator+(Matrix3<T1> m, const T2& n) {
        return Matrix3<T1> {
            m[0][0] + n, m[0][1] + n, m[0][2] + n,
            m[1][0] + n, m[1][1] + n, m[1][2] + n,
            m[2][0] + n, m[2][1] + n, m[2][2] + n
        };
    }

    template <typename T1, typename T2>
    inline Matrix3<T2> operator+(const T1& n, Matrix3<T2> m) {
        return m + n;
    }

    template <typename T1, typename T2>
    inline Matrix3<T1> operator-(Matrix3<T1> m, const T2& n) {
        return Matrix3<T1> {
            m[0][0] - n, m[0][1] - n, m[0][2] - n,
            m[1][0] - n, m[1][1] - n, m[1][2] - n,
            m[2][0] - n, m[2][1] - n, m[2][2] - n
        };
    }

    template <typename T1, typename T2>
    inline Matrix3<T2> operator-(const T1& n, Matrix3<T2> m) {
        return Matrix3<T2> {
            n - m[0][0], n - m[0][1], n - m[0][2],
            n - m[1][0], n - m[1][1], n - m[1][2],
            n - m[2][0], n - m[2][1], n - m[2][2],
        };
    }

    template <typename T1, typename T2>
    inline Matrix3<T1> operator*(Matrix3<T1> m, const T2& n) {
        return Matrix3<T1> {
            m[0][0] * n, m[0][1] * n, m[0][2] * n,
            m[1][0] * n, m[1][1] * n, m[1][2] * n,
            m[2][0] * n, m[2][1] * n, m[2][2] * n
        };
    }

    template <typename T1, typename T2>
    inline Matrix3<T2> operator*(const T1& n, Matrix3<T2> m) {
        return m * n;
    }

    template <typename T1, typename T2>
    inline Matrix3<T1> operator/(Matrix3<T1> m, const T2& n) {
        return Matrix3<T1> {
            m[0][0] / n, m[0][1] / n, m[0][2] / n,
            m[1][0] / n, m[1][1] / n, m[1][2] / n,
            m[2][0] / n, m[2][1] / n, m[2][2] / n
        };
    }

    template <typename T1, typename T2>
    inline Matrix3<T2> operator/(const T1& n, Matrix3<T2> m) {
        return Matrix3<T2> {
            n / m[0][0], n / m[0][1], n / m[0][2],
            n / m[1][0], n / m[1][1], n / m[1][2],
            n / m[2][0], n / m[2][1], n / m[2][2],
        };
    }
}