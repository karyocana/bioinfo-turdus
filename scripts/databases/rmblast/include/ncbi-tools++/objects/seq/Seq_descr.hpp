/* $Id: Seq_descr.hpp 448516 2014-10-07 14:40:49Z gotvyans $
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

/// @Seq_descr.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seq.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Seq_descr_.hpp


#ifndef OBJECTS_SEQ_SEQ_DESCR_HPP
#define OBJECTS_SEQ_SEQ_DESCR_HPP


#include <objects/seq/Seqdesc.hpp>
// generated includes
#include <objects/seq/Seq_descr_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQ_EXPORT CSeq_descr : public CSeq_descr_Base
{
    typedef CSeq_descr_Base Tparent;
public:
    // constructor
    CSeq_descr(void);
    // destructor
    ~CSeq_descr(void);

    void PostRead(void) const;
    void PreWrite(void) const;

private:
    // Prohibit copy constructor and assignment operator
    CSeq_descr(const CSeq_descr& value);
    CSeq_descr& operator=(const CSeq_descr& value);

};

/////////////////// CSeq_descr inline methods

// constructor
inline
CSeq_descr::CSeq_descr(void)
{
}

NCBISER_HAVE_POST_READ(CSeq_descr)
NCBISER_HAVE_PRE_WRITE(CSeq_descr)

/////////////////// end of CSeq_descr inline methods
// CAutoAddDesc automatically adds a new seqdesc object once it's accessed via 'Set' method
class NCBI_SEQ_EXPORT CAutoAddDesc
{
public:
    // construct
    CAutoAddDesc(CSeq_descr& descr, CSeqdesc::E_Choice which);
    const CSeqdesc& Get() const;
    // use skip_lookup in case you always need to create an seqdesc, 
    // e.g. for desc not requiring uniqueness (ePub, etc)
    CSeqdesc& Set(bool skip_lookup = false);
    bool IsNull() const;
    void Erase();
    static
    CRef<CSeqdesc> LocateDesc(const CSeq_descr& descr, CSeqdesc::E_Choice which);
    static
    bool EraseDesc(CSeq_descr& descr, CSeqdesc::E_Choice which);

private:
    CAutoAddDesc();
    CAutoAddDesc(const CAutoAddDesc&);

protected:
    CSeqdesc::E_Choice m_which;
    CRef<CSeq_descr> m_descr;
    mutable CRef<CSeqdesc> m_desc;
};

/////////////////// CAutoAddDesc inline methods
inline
CAutoAddDesc::CAutoAddDesc(CSeq_descr& descr, enum CSeqdesc::E_Choice which)
{
    m_descr.Reset(&descr);
    m_which = which;
}

/////////////////// end of CSeq_descr inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

#endif // OBJECTS_SEQ_SEQ_DESCR_HPP
/* Original file checksum: lines: 94, chars: 2554, CRC32: 3be192b4 */
