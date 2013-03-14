#ifndef Magnum_Math_Constants_h
#define Magnum_Math_Constants_h
/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013 Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

/** @file
 * @brief Class Magnum::Math::Constants
 */

#include "Types.h"

namespace Magnum { namespace Math {

/**
@brief Numeric constants

@see Magnum::Constants, Magnum::Constantsd
*/
template<class T> struct Constants {
    Constants() = delete;

    /* See TypeTraits for answer why these are functions and not constants. */
    #ifdef DOXYGEN_GENERATING_OUTPUT
    /**
     * @brief Pi
     *
     * @see Deg, Rad
     */
    static inline constexpr T pi();

    static inline constexpr T sqrt2();  /**< @brief Square root of 2 */
    static inline constexpr T sqrt3();  /**< @brief Square root of 3 */
    #endif
};

#ifndef DOXYGEN_GENERATING_OUTPUT
template<> struct Constants<Double> {
    Constants() = delete;

    static inline constexpr Double pi()    { return 3.141592653589793; }
    static inline constexpr Double sqrt2() { return 1.414213562373095; }
    static inline constexpr Double sqrt3() { return 1.732050807568877; }
};
template<> struct Constants<Float> {
    Constants() = delete;

    static inline constexpr Float pi()    { return 3.141592654f; }
    static inline constexpr Float sqrt2() { return 1.414213562f; }
    static inline constexpr Float sqrt3() { return 1.732050808f; }
};
#endif

}}

#endif
