#pragma once

#include "../types/type_vec3.hpp"

namespace pfm {
    template<typename T>
    PFM_FUNC_DECL vec<3, T> normalize(vec<3, T> const& v);

    template<typename T>
    PFM_FUNC_DECL vec<2, T> normalize(vec<2, T> const& v);

    template<typename T>
    PFM_FUNC_DECL float dot(vec<3, T> const& v1, vec<3, T> const& v2);

    template<typename T>
    PFM_FUNC_DECL vec<3, T> cross(vec<3, T> const& v1, vec<3, T> const& v2);

    template<typename T>
    PFM_FUNC_DECL double magnitude(vec<3, T> const& v); 

    template<typename T>
    PFM_FUNC_DECL double magnitude(vec<2, T> const& v); 

    PFM_FUNC_DECL vec<3, float> sphericalToCartesian(float const& p, float const& phi, float const& theta);
}

#include "vector_transform.inl"