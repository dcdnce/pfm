#pragma once

#include "../setup/setup.hpp"

namespace pfm {

    template<typename T>
    PFM_FUNC_DECL float radians(T const& degrees);

    float constexpr pi = 3.14159265358979323846f;
}

#include "utils.inl"