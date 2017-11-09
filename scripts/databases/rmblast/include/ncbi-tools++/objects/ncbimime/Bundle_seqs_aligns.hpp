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

/// @file Bundle_seqs_aligns.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'ncbimime.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Bundle_seqs_aligns_.hpp


#ifndef OBJECTS_NCBIMIME_BUNDLE_SEQS_ALIGNS_HPP
#define OBJECTS_NCBIMIME_BUNDLE_SEQS_ALIGNS_HPP


// generated includes
#include <objects/ncbimime/Bundle_seqs_aligns_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_NCBIMIME_EXPORT CBundle_seqs_aligns : public CBundle_seqs_aligns_Base
{
    typedef CBundle_seqs_aligns_Base Tparent;
public:
    // constructor
    CBundle_seqs_aligns(void);
    // destructor
    ~CBundle_seqs_aligns(void);

private:
    // Prohibit copy constructor and assignment operator
    CBundle_seqs_aligns(const CBundle_seqs_aligns& value);
    CBundle_seqs_aligns& operator=(const CBundle_seqs_aligns& value);

};

/////////////////// CBundle_seqs_aligns inline methods

// constructor
inline
CBundle_seqs_aligns::CBundle_seqs_aligns(void)
{
}


/////////////////// end of CBundle_seqs_aligns inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_NCBIMIME_BUNDLE_SEQS_ALIGNS_HPP
/* Original file checksum: lines: 86, chars: 2593, CRC32: ecd0feb */
