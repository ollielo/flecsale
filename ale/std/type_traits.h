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
 * \file type_traits.h
 * 
 * \brief Extensions to C++11 that are part of C++14.
 *
 ******************************************************************************/
#pragma once

//! system includes
#include <type_traits>

namespace std {

////////////////////////////////////////////////////////////////////////////////
//! Stuff not available till C++14
////////////////////////////////////////////////////////////////////////////////

#if __cplusplus == 201103L

//==============================================================================
//! \brief an enable_if helper type
//==============================================================================
template< bool B, class T = void >
using enable_if_t = typename enable_if<B,T>::type;

//==============================================================================
//! \brief a remove_reference helper type
//==============================================================================
template< class T >
using remove_reference_t = typename remove_reference<T>::type;

//==============================================================================
//! \brief a remove_reference helper type
//==============================================================================
template< class T >
using remove_const_t = typename remove_const<T>::type;


//==============================================================================
//! \brief a remove_pointer helper type
//==============================================================================
template< class T >
using remove_pointer_t = typename remove_pointer<T>::type;

//==============================================================================
//! \brief a decay helper type
//==============================================================================
template< class T >
using decay_t = typename decay<T>::type;

//==============================================================================
//! \brief a is_pointer helper type
//==============================================================================
template< class T >
constexpr bool is_pointer_v = is_pointer<T>::value;

#endif

////////////////////////////////////////////////////////////////////////////////
//! Stuff not available till C++17
////////////////////////////////////////////////////////////////////////////////

#if __cplusplus == 201402L

//==============================================================================
//! \brief a is_same helper type
//==============================================================================
template< class T, class U >
constexpr bool is_same_v = is_same<T, U>::value;


//==============================================================================
//! \brief a is_arithmetic helper type
//==============================================================================
template< class T >
constexpr bool is_arithmetic_v = is_arithmetic<T>::value;

//==============================================================================
//! \brief a is_function helper type
//==============================================================================
template< class T >
constexpr bool is_function_v = is_function<T>::value;


//==============================================================================
//! \brief a is_integral helper type
//==============================================================================
template< class T >
constexpr bool is_integral_v = is_integral<T>::value;

#endif

} // namespace


/*~------------------------------------------------------------------------~--*
 * Formatting options
 * vim: set tabstop=2 shiftwidth=2 expandtab :
 *~------------------------------------------------------------------------~--*/
