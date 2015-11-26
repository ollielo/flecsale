/*~-------------------------------------------------------------------------~~*
 *     _   ______________     ___    __    ______
 *    / | / / ____/ ____/    /   |  / /   / ____/
 *   /  |/ / / __/ /  ______/ /| | / /   / __/   
 *  / /|  / /_/ / /__/_____/ ___ |/ /___/ /___   
 * /_/ |_/\____/\____/    /_/  |_/_____/_____/   
 * 
 * Copyright (c) 2016 Los Alamos National Laboratory, LLC
 * All rights reserved
 *~-------------------------------------------------------------------------~~*/
/*!
 *
 * \file template_helpers.h
 * 
 * \brief Some helper functions for template foo magic.
 *
 ******************************************************************************/
#pragma once

namespace ale {
namespace utils {





////////////////////////////////////////////////////////////////////////////////
//! \brief random junk
////////////////////////////////////////////////////////////////////////////////


template < typename T, typename... Ts >
std::tuple<T&, const Ts&...> ctie( T& first, const Ts&... rest )
{
  return std::make_tuple( std::ref(first), std::cref(rest)... );
}


template<typename T>
T &as_lvalue(T &&val) {
  return val;
}

} // namespace
} // namespace



/*~------------------------------------------------------------------------~--*
 * Formatting options
 * vim: set tabstop=2 shiftwidth=2 expandtab :
 *~------------------------------------------------------------------------~--*/