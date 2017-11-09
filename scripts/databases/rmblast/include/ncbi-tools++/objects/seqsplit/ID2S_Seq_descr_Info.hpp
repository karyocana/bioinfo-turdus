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

/// @file ID2S_Seq_descr_Info.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqsplit.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: ID2S_Seq_descr_Info_.hpp


#ifndef OBJECTS_SEQSPLIT_ID2S_SEQ_DESCR_INFO_HPP
#define OBJECTS_SEQSPLIT_ID2S_SEQ_DESCR_INFO_HPP


// generated includes
#include <objects/seqsplit/ID2S_Seq_descr_Info_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_ID2_EXPORT CID2S_Seq_descr_Info : public CID2S_Seq_descr_Info_Base
{
    typedef CID2S_Seq_descr_Info_Base Tparent;
public:
    // constructor
    CID2S_Seq_descr_Info(void);
    // destructor
    ~CID2S_Seq_descr_Info(void);

private:
    // Prohibit copy constructor and assignment operator
    CID2S_Seq_descr_Info(const CID2S_Seq_descr_Info& value);
    CID2S_Seq_descr_Info& operator=(const CID2S_Seq_descr_Info& value);

};

/////////////////// CID2S_Seq_descr_Info inline methods

// constructor
inline
CID2S_Seq_descr_Info::CID2S_Seq_descr_Info(void)
{
}


/////////////////// end of CID2S_Seq_descr_Info inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQSPLIT_ID2S_SEQ_DESCR_INFO_HPP
/* Original file checksum: lines: 86, chars: 2607, CRC32: 9bdf6d1e */
