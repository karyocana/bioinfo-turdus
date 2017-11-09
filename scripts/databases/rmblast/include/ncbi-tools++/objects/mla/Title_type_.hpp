/* $Id$
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 */

/// @file Title_type_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mla.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MLA_TITLE_TYPE_BASE_HPP
#define OBJECTS_MLA_TITLE_TYPE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

///**********************************************************************
///
///  if request = all
///	if one row returned
///	   reply=all, return every column
///	else 
///	   reply=ml-jta for each row
///
///  if request = not-set, reply=ml-jta
///
///  otherwise,
///	if request != ml-jta
///	   if column exist, reply=column, else reply=ml-jta
///
///**********************************************************************
enum ETitle_type {
    eTitle_type_not_set =   0,  ///< request=ml-jta (default), reply=not-found
    eTitle_type_name    =   1,
    eTitle_type_tsub    =   2,
    eTitle_type_trans   =   3,
    eTitle_type_jta     =   4,
    eTitle_type_iso_jta =   5,
    eTitle_type_ml_jta  =   6,
    eTitle_type_coden   =   7,
    eTitle_type_issn    =   8,
    eTitle_type_abr     =   9,
    eTitle_type_isbn    =  10,
    eTitle_type_all     = 255
};

/// Access to ETitle_type's attributes (values, names) as defined in spec
NCBI_MLA_EXPORT const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ETitle_type)(void);


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MLA_TITLE_TYPE_BASE_HPP
