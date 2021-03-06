// Copyright (C) 2010-2016 National ICT Australia (NICTA)
// 
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.
// -------------------------------------------------------------------
// 
// Written by Conrad Sanderson - http://conradsanderson.id.au


//! \addtogroup fn_trimat
//! @{


template<typename T1>
arma_warn_unused
arma_inline
const Op<T1, op_trimat>
trimatu(const Base<typename T1::elem_type,T1>& X)
  {
  arma_extra_debug_sigprint();
  
  return Op<T1, op_trimat>(X.get_ref(), 0, 0);
  }



template<typename T1>
arma_warn_unused
arma_inline
const Op<T1, op_trimat>
trimatl(const Base<typename T1::elem_type,T1>& X)
  {
  arma_extra_debug_sigprint();
  
  return Op<T1, op_trimat>(X.get_ref(), 1, 0);
  }



template<typename T1>
arma_warn_unused
arma_inline
const SpOp<T1, spop_trimat>
trimatu(const SpBase<typename T1::elem_type,T1>& X)
  {
  arma_extra_debug_sigprint();
  
  return SpOp<T1, spop_trimat>(X.get_ref(), 0, 0);
  }



template<typename T1>
arma_warn_unused
arma_inline
const SpOp<T1, spop_trimat>
trimatl(const SpBase<typename T1::elem_type,T1>& X)
  {
  arma_extra_debug_sigprint();
  
  return SpOp<T1, spop_trimat>(X.get_ref(), 1, 0);
  }



//! @}
