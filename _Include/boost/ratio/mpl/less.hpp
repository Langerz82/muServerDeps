//  less.hpp
//
//  (C) Copyright 2011 Vicente J. Botet Escriba
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//

#ifndef BOOST_RATIO_MPL_LESS_HPP
#define BOOST_RATIO_MPL_LESS_HPP

#include <boost/ratio/ratio.hpp>
#include <boost/ratio/mpl/numeric_cast.hpp>
#include <boost/mpl/less.hpp>

namespace boost { 
namespace mpl {

template<>
struct less_impl< rational_c_tag,rational_c_tag >
{
    template< typename R1, typename R2 > struct apply
        : ratio_less<R1, R2>
    {
    };
};    
}
}

#endif  // BOOST_RATIO_MPL_LESS_HPP


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

