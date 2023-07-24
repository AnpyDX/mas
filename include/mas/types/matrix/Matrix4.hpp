/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Matrix 4x4 Type
 * @version 0.11
 */

#pragma once

namespace mas {
    template <typename T>
    class Matrix4 {
    public:
        Matrix4() = default;
        explicit Matrix4(const T& scaler) {
            Matrix4(
                scaler, 0, 0, 0,
                0, scaler, 0, 0,
                0, 0, scaler, 0,
                0, 0, 0, scaler
            );
        }

        Matrix4(const T& x1, const T& y1, const T& z1, const T& w1,
                const T& x2, const T& y2, const T& z2, const T& w2,
                const T& x3, const T& y3, const T& z3, const T& w3,
                const T& x4, const T& y4, const T& z4, const T& w4)
        {
            m_value[0][0] = x1;
            m_value[0][1] = y1;
            m_value[0][2] = z1;
            m_value[0][3] = w1;

            m_value[1][0] = x2;
            m_value[1][1] = y2;
            m_value[1][2] = z2;
            m_value[1][3] = w2;

            m_value[2][0] = x3;
            m_value[2][1] = y3;
            m_value[2][2] = z3;
            m_value[2][3] = w3;

            m_value[3][0] = x4;
            m_value[3][1] = y4;
            m_value[3][2] = z4;
            m_value[3][3] = w4;
        }

        T* operator[](const int& index) {
            return m_value[index];
        }

        /**
         * @brief Get Matrix Copy
         * @return Matrix4<T>
         */
        Matrix4<T> get() const {
            return *this;
        }

    private:
        T m_value[4][4];
    };

    template <typename T>
    inline Matrix4<T> operator+(Matrix4<T> m1, Matrix4<T> m2) {
        return Matrix4<T> {
            m1[0][0] + m2[0][0], m1[0][1] + m2[0][1], m1[0][2] + m2[0][2], m1[0][3] + m2[0][3],
            m1[1][0] + m2[1][0], m1[1][1] + m2[1][1], m1[1][2] + m2[1][2], m1[1][3] + m2[1][3],
            m1[2][0] + m2[2][0], m1[2][1] + m2[2][1], m1[2][2] + m2[2][2], m1[2][3] + m2[2][3],
            m1[3][0] + m2[3][0], m1[3][1] + m2[3][1], m1[3][2] + m2[3][2], m1[3][3] + m2[3][3]
        };
    }

    template <typename T>
    inline Matrix4<T> operator-(Matrix4<T> m1, Matrix4<T> m2) {
        return Matrix4<T> {
            m1[0][0] - m2[0][0], m1[0][1] - m2[0][1], m1[0][2] - m2[0][2], m1[0][3] - m2[0][3],
            m1[1][0] - m2[1][0], m1[1][1] - m2[1][1], m1[1][2] - m2[1][2], m1[1][3] - m2[1][3],
            m1[2][0] - m2[2][0], m1[2][1] - m2[2][1], m1[2][2] - m2[2][2], m1[2][3] - m2[2][3],
            m1[3][0] - m2[3][0], m1[3][1] - m2[3][1], m1[3][2] - m2[3][2], m1[3][3] - m2[3][3]
        };
    }

    template <typename T>
    inline Matrix4<T> operator*(Matrix4<T> m1, Matrix4<T> m2) {
        return Matrix4<T> {
            m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0] + m1[0][2] * m2[2][0] + m1[0][3] * m2[3][0],
            m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1] + m1[0][2] * m2[2][1] + m1[0][3] * m2[3][1],
            m1[0][0] * m2[0][2] + m1[0][1] * m2[1][2] + m1[0][2] * m2[2][2] + m1[0][3] * m2[3][2],
            m1[0][0] * m2[0][3] + m1[0][1] * m2[1][3] + m1[0][2] * m2[2][3] + m1[0][3] * m2[3][3],

            m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0] + m1[1][2] * m2[2][0] + m1[1][3] * m2[3][0],
            m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1] + m1[1][2] * m2[2][1] + m1[1][3] * m2[3][1],
            m1[1][0] * m2[0][2] + m1[1][1] * m2[1][2] + m1[1][2] * m2[2][2] + m1[1][3] * m2[3][2],
            m1[1][0] * m2[0][3] + m1[1][1] * m2[1][3] + m1[1][2] * m2[2][3] + m1[1][3] * m2[3][3],

            m1[2][0] * m2[0][0] + m1[2][1] * m2[1][0] + m1[2][2] * m2[2][0] + m1[2][3] * m2[3][0],
            m1[2][0] * m2[0][1] + m1[2][1] * m2[1][1] + m1[2][2] * m2[2][1] + m1[2][3] * m2[3][1],
            m1[2][0] * m2[0][2] + m1[2][1] * m2[1][2] + m1[2][2] * m2[2][2] + m1[2][3] * m2[3][2],
            m1[2][0] * m2[0][3] + m1[2][1] * m2[1][3] + m1[2][2] * m2[2][3] + m1[2][3] * m2[3][3],

            m1[3][0] * m2[0][0] + m1[3][1] * m2[1][0] + m1[3][2] * m2[2][0] + m1[3][3] * m2[3][0],
            m1[3][0] * m2[0][1] + m1[3][1] * m2[1][1] + m1[3][2] * m2[2][1] + m1[3][3] * m2[3][1],
            m1[3][0] * m2[0][2] + m1[3][1] * m2[1][2] + m1[3][2] * m2[2][2] + m1[3][3] * m2[3][2],
            m1[3][0] * m2[0][3] + m1[3][1] * m2[1][3] + m1[3][2] * m2[2][3] + m1[3][3] * m2[3][3]
        };
    }

    template <typename T1, typename T2>
    inline Matrix4<T1> operator+(Matrix4<T1> m, const T2& n) {
        return Matrix4<T1> {
            m[0][0] + n, m[0][1] + n, m[0][2] + n, m[0][3] + n,
            m[1][0] + n, m[1][1] + n, m[1][2] + n, m[1][3] + n,
            m[2][0] + n, m[2][1] + n, m[2][2] + n, m[2][3] + n,
            m[3][0] + n, m[3][1] + n, m[3][2] + n, m[3][3] + n
        };
    }

    template <typename T1, typename T2>
    inline Matrix4<T2> operator+(const T1& n, Matrix4<T2> m) {
        return m + n;
    }

    template <typename T1, typename T2>
    inline Matrix4<T1> operator-(Matrix4<T1> m, const T2& n) {
        return Matrix4<T1> {
            m[0][0] - n, m[0][1] - n, m[0][2] - n, m[0][3] - n,
            m[1][0] - n, m[1][1] - n, m[1][2] - n, m[1][3] - n,
            m[2][0] - n, m[2][1] - n, m[2][2] - n, m[2][3] - n,
            m[3][0] - n, m[3][1] - n, m[3][2] - n, m[3][3] - n
        };
    }

    template <typename T1, typename T2>
    inline Matrix4<T2> operator-(const T1& n, Matrix4<T2> m) {
        return Matrix4<T2> {
            n - m[0][0], n - m[0][1], n - m[0][2], n - m[0][3],
            n - m[1][0], n - m[1][1], n - m[1][2], n - m[1][3],
            n - m[2][0], n - m[2][1], n - m[2][2], n - m[2][3],
            n - m[3][0], n - m[3][1], n - m[3][2], n - m[3][3]
        };
    }

    template <typename T1, typename T2>
    inline Matrix4<T1> operator*(Matrix4<T1> m, const T2& n) {
        return Matrix4<T1> {
            m[0][0] * n, m[0][1] * n, m[0][2] * n, m[0][3] * n,
            m[1][0] * n, m[1][1] * n, m[1][2] * n, m[1][3] * n,
            m[2][0] * n, m[2][1] * n, m[2][2] * n, m[2][3] * n,
            m[3][0] * n, m[3][1] * n, m[3][2] * n, m[3][3] * n
        };
    }

    template <typename T1, typename T2>
    inline Matrix4<T2> operator*(const T1& n, Matrix4<T2> m) {
        return m * n;
    }

    template <typename T1, typename T2>
    inline Matrix4<T1> operator/(Matrix4<T1> m, const T2& n) {
        return Matrix4<T1> {
            m[0][0] / n, m[0][1] / n, m[0][2] / n, m[0][3] / n,
            m[1][0] / n, m[1][1] / n, m[1][2] / n, m[1][3] / n,
            m[2][0] / n, m[2][1] / n, m[2][2] / n, m[2][3] / n,
            m[3][0] / n, m[3][1] / n, m[3][2] / n, m[3][3] / n
        };
    }

    template <typename T1, typename T2>
    inline Matrix4<T2> operator/(const T1& n, Matrix4<T2> m) {
        return Matrix4<T2> {
            n / m[0][0], n / m[0][1], n / m[0][2], n / m[0][3],
            n / m[1][0], n / m[1][1], n / m[1][2], n / m[1][3],
            n / m[2][0], n / m[2][1], n / m[2][2], n / m[2][3],
            n / m[3][0], n / m[3][1], n / m[3][2], n / m[3][3]
        };
    }
}