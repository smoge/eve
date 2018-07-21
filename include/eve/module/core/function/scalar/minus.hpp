//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright 2018 Joel FALCOU

  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#ifndef EVE_MODULE_CORE_FUNCTION_SCALAR_MINUS_HPP_INCLUDED
#define EVE_MODULE_CORE_FUNCTION_SCALAR_MINUS_HPP_INCLUDED

#include <eve/detail/overload.hpp>
#include <eve/detail/abi.hpp>

namespace eve { namespace detail
{
  // -----------------------------------------------------------------------------------------------
  // Regular case
  template<typename T> EVE_FORCEINLINE
  constexpr T minus_(EVE_SUPPORTS(cpu_), T const& a, T const& b) noexcept
  {
    return a-b;
  }
} }

#endif