namespace pfm {

    template<typename T>
    PFM_INLINE vec<3, T> normalize(vec<3, T> const& v)
    {
        vec<3, T> ret(v);

        float magnitude = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
        
        if (magnitude != 0.f)
        {
            float imagnitude = 1.0f / magnitude;

            ret.x *= imagnitude;
            ret.y *= imagnitude;
            ret.z *= imagnitude;
        }

        return (ret);
    }

    template<typename T>
    PFM_INLINE vec<2, T> normalize(vec<2, T> const& v)
    {
        vec<2, T> ret(v);

        float magnitude = sqrtf(v.x * v.x + v.y * v.y);
        
        if (magnitude != 0.f)
        {
            float imagnitude = 1.0f / magnitude;

            ret.x *= imagnitude;
            ret.y *= imagnitude;
        }

        return (ret);
    }


    template<typename T>
    PFM_INLINE float dot(vec<3, T> const& v1, vec<3, T> const& v2)
    {
        return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
    }

    template<typename T>
    PFM_INLINE vec<3, T> cross(vec<3, T> const& v1, vec<3, T> const& v2)
    {
        return vec<3, T>(
            v1.y * v2.z - v1.z * v2.y,
            v1.z * v2.x - v1.x * v2.z,
            v1.x * v2.y - v1.y * v2.x
        );
    }

    template<typename T>
    PFM_INLINE double magnitude(vec<3, T> const& v)
    {
        return sqrt(
            static_cast<double>(v.x) * static_cast<double>(v.x)
            + static_cast<double>(v.y) * static_cast<double>(v.y)
            + static_cast<double>(v.z) * static_cast<double>(v.z)
        );
    }

    PFM_INLINE vec<3, float> sphericalToCartesian(float const& p, float const& phi, float const& theta)
    {
        return vec3(
            p * sin(radians(phi)) * cos(radians(theta)),
            p * cos(radians(phi)),
            p * sin(radians(phi)) * sin(radians(theta))
        );
    }
}