/***************************************************************************
* Copyright (c) Wolf Vollprecht, Johan Mabille and Sylvain Corlay          *
* Copyright (c) QuantStack                                                 *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#include "gtest/gtest.h"
#include "xtensor/xarray.hpp"
#include "xtensor/xview.hpp"
#include "xtensor/xbuilder.hpp"
#include "xtensor/xrandom.hpp"

#include "xtensor-blas/xblas.hpp"
#include "xtensor-blas/xlinalg.hpp"

namespace xt
{

TEST(xblas, normCplxFloat) {
  xt::xarray<std::complex<float>> a = {std::complex<float>({1., 2.}), std::complex<float>({3., 4.})};
  auto res = linalg::norm(a);

  EXPECT_NEAR(res.real(), 5.4772, 1e-3);
  EXPECT_NEAR(res.imag(), 0.0, 1e-3);
}

}