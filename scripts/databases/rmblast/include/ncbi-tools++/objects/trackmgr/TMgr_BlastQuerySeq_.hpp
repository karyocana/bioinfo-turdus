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

/// @file TMgr_BlastQuerySeq_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'trackmgr.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TRACKMGR_TMGR_BLASTQUERYSEQ_BASE_HPP
#define OBJECTS_TRACKMGR_TMGR_BLASTQUERYSEQ_BASE_HPP

// extra headers
#include <objects/trackmgr/trackmgr_export.h>

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TRACKMGR_EXPORT CTMgr_BlastQuerySeq_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTMgr_BlastQuerySeq_Base(void);
    // destructor
    virtual ~CTMgr_BlastQuerySeq_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TQuery_number;
    typedef string TLabel;

    // getters
    // setters

    /// mandatory
    /// typedef int TQuery_number
    ///  Check whether the Query_number data member has been assigned a value.
    bool IsSetQuery_number(void) const;
    /// Check whether it is safe or not to call GetQuery_number method.
    bool CanGetQuery_number(void) const;
    void ResetQuery_number(void);
    TQuery_number GetQuery_number(void) const;
    void SetQuery_number(TQuery_number value);
    TQuery_number& SetQuery_number(void);

    /// accession or seq-id string
    /// mandatory
    /// typedef string TLabel
    ///  Check whether the Label data member has been assigned a value.
    bool IsSetLabel(void) const;
    /// Check whether it is safe or not to call GetLabel method.
    bool CanGetLabel(void) const;
    void ResetLabel(void);
    const TLabel& GetLabel(void) const;
    void SetLabel(const TLabel& value);
    TLabel& SetLabel(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTMgr_BlastQuerySeq_Base(const CTMgr_BlastQuerySeq_Base&);
    CTMgr_BlastQuerySeq_Base& operator=(const CTMgr_BlastQuerySeq_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Query_number;
    string m_Label;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTMgr_BlastQuerySeq_Base::IsSetQuery_number(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTMgr_BlastQuerySeq_Base::CanGetQuery_number(void) const
{
    return IsSetQuery_number();
}

inline
void CTMgr_BlastQuerySeq_Base::ResetQuery_number(void)
{
    m_Query_number = 0;
    m_set_State[0] &= ~0x3;
}

inline
CTMgr_BlastQuerySeq_Base::TQuery_number CTMgr_BlastQuerySeq_Base::GetQuery_number(void) const
{
    if (!CanGetQuery_number()) {
        ThrowUnassigned(0);
    }
    return m_Query_number;
}

inline
void CTMgr_BlastQuerySeq_Base::SetQuery_number(CTMgr_BlastQuerySeq_Base::TQuery_number value)
{
    m_Query_number = value;
    m_set_State[0] |= 0x3;
}

inline
CTMgr_BlastQuerySeq_Base::TQuery_number& CTMgr_BlastQuerySeq_Base::SetQuery_number(void)
{
#ifdef _DEBUG
    if (!IsSetQuery_number()) {
        memset(&m_Query_number,UnassignedByte(),sizeof(m_Query_number));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Query_number;
}

inline
bool CTMgr_BlastQuerySeq_Base::IsSetLabel(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTMgr_BlastQuerySeq_Base::CanGetLabel(void) const
{
    return IsSetLabel();
}

inline
const CTMgr_BlastQuerySeq_Base::TLabel& CTMgr_BlastQuerySeq_Base::GetLabel(void) const
{
    if (!CanGetLabel()) {
        ThrowUnassigned(1);
    }
    return m_Label;
}

inline
void CTMgr_BlastQuerySeq_Base::SetLabel(const CTMgr_BlastQuerySeq_Base::TLabel& value)
{
    m_Label = value;
    m_set_State[0] |= 0xc;
}

inline
CTMgr_BlastQuerySeq_Base::TLabel& CTMgr_BlastQuerySeq_Base::SetLabel(void)
{
#ifdef _DEBUG
    if (!IsSetLabel()) {
        m_Label = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Label;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TRACKMGR_TMGR_BLASTQUERYSEQ_BASE_HPP
