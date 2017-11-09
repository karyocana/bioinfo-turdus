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

/// @file Conver_feature_src_options.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Conver_feature_src_options_.hpp


#ifndef OBJECTS_MACRO_CONVER_FEATURE_SRC_OPTIONS_HPP
#define OBJECTS_MACRO_CONVER_FEATURE_SRC_OPTIONS_HPP


// generated includes
#include <objects/macro/Conver_feature_src_options_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class CConvert_feature_src_options : public CConvert_feature_src_options_Base
{
    typedef CConvert_feature_src_options_Base Tparent;
public:
    // constructor
    CConvert_feature_src_options(void);
    // destructor
    ~CConvert_feature_src_options(void);

private:
    // Prohibit copy constructor and assignment operator
    CConvert_feature_src_options(const CConvert_feature_src_options& value);
    CConvert_feature_src_options& operator=(const CConvert_feature_src_options& value);

};

/////////////////// CConvert_feature_src_options inline methods

// constructor
inline
CConvert_feature_src_options::CConvert_feature_src_options(void)
{
}


/////////////////// end of CConvert_feature_src_options inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_CONVER_FEATURE_SRC_OPTIONS_HPP
/* Original file checksum: lines: 86, chars: 2722, CRC32: 6252d9e8 */
