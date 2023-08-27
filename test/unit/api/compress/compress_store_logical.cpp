//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright : EVE Project Contributors
  SPDX-License-Identifier: BSL-1.0
**/
//==================================================================================================
#include "compress_store_test.hpp"
#include <eve/module/core.hpp>


TTS_CASE_WITH( "Check compress store behavior"
        , eve::test::simd::all_types
        , tts::generate(tts::logicals(1,2))
        )
<typename L> (L logical_data)
{
  using N = eve::fixed<L::size()>;


  compress_store_test<L>(logical_data);
  compress_store_test<eve::logical<eve::wide<std::uint8_t,  N>>>(logical_data);
  compress_store_test<eve::logical<eve::wide<std::uint16_t, N>>>(logical_data);
  compress_store_test<eve::logical<eve::wide<std::uint32_t, N>>>(logical_data);
  compress_store_test<eve::logical<eve::wide<std::uint64_t, N>>>(logical_data);
};