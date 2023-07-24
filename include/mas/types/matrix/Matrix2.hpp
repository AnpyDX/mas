/**
 * @project: mas-lib (https://github.com/anpydx/mas)
 * @brief Matrix 2x2 Type
 * @version 0.11
 */

#pragma once

namespace mas {

    template <typename T>
    class Matrix2 {
    public:
        Matrix2() = default;
        explicit Matrix2(const T& scaler) {
            Matrix2(
                scaler, 0,
                0, scaler
            );
        }

        Matrix2(const T& x1, const T& y1, const T& x2, const T& y2) {
            m_value[0][0] = x1;
            m_value[0][1] = y1;
            m_value[1][0] = x2;
            m_value[1][1] = y2;
        }

        T* operator[](const int& index) {
            return m_value[index];
        }

        /**
         * @brief Get Matrix Copy
         * @return Matrix2<T>
         */
        Matrix2<T> get() const {
            return *this;
        }

    private:
        T m_value[2][2];
    };

    template <typename T>
    inline Matrix2<T> operator+(Matrix2<T> m1, Matrix2<T> m2) {
        return Matrix2<T> {
            m1[0][0] + m2[0][0], m1[0][1] + m2[0][1],
            m1[1][0] + m2[1][0], m1[1][1] + m2[1][1],
        };
    }

    template <typename T>
    inline Matrix2<T> operator-(Matrix2<T> m1, Matrix2<T> m2) {
        return Matrix2<T> {
            m1[0][0] - m2[0][0], m1[0][1] - m2[0][1],
            m1[1][0] - m2[1][0], m1[1][1] - m2[1][1],
        };
    }

    template <typename T>
    inline Matrix2<T> operator*(Matrix2<T> m1, Matrix2<T> m2) {
        return Matrix2<T> {
            m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0], 
            m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1], 
            
            m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0], 
            m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1]
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T1> operator+(Matrix2<T1> m, const T2 n) {
        return Matrix2<T1> {
            m[0][0] + n, m[0][1] + n,
            m[1][0] + n, m[1][1] + n
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T2> operator+(const T1& n, Matrix2<T2> m) {
        return m + n;
    }

    template <typename T1, typename T2>
    inline Matrix2<T1> operator-(Matrix2<T1> m, const T2& n) {
        return Matrix2<T1> {
            m[0][0] - n, m[0][1] - n,
            m[1][0] - n, m[1][1] - n
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T2> operator-(const T1& n, Matrix2<T2> m) {
        return Matrix2<T2> {
            n - m[0][0], n - m[0][1],
            n - m[1][0], n - m[1][1]
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T1> operator*(Matrix2<T1> m, const T2& n) {
        return Matrix2<T1> {
            m[0][0] * n, m[0][1] * n,
            m[1][0] * n, m[1][1] * n
        }; 
    }

    template <typename T1, typename T2>
    inline Matrix2<T2> operator*(const T1& n, Matrix2<T2> m) {
        return m * n;
    }

    template <typename T1, typename T2>
    inline Matrix2<T1> operator/(Matrix2<T1> m, const T2& n) {
        return Matrix2<T1> {
            m[0][0] / n, m[0][1] / n,
            m[1][0] / n, m[1][1] / n
        };
    }

    template <typename T1, typename T2>
    inline Matrix2<T2> operator/(const T1& n, Matrix2<T2> m) {
        return Matrix2<T2> {
            n / m[0][0], n / m[0][1],
            n / m[1][0], n / m[1][1]
        };
    }

}