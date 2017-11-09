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

/// @file Duplication_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'varrep.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_VARREP_DUPLICATION_BASE_HPP
#define OBJECTS_VARREP_DUPLICATION_BASE_HPP

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


// forward declarations
class CSeqLocation;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CDuplication_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CDuplication_Base(void);
    // destructor
    virtual ~CDuplication_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CSeqLocation TLoc;
    typedef string TRaw_seq;

    // getters
    // setters

    /// mandatory
    /// typedef CSeqLocation TLoc
    ///  Check whether the Loc data member has been assigned a value.
    bool IsSetLoc(void) const;
    /// Check whether it is safe or not to call GetLoc method.
    bool CanGetLoc(void) const;
    void ResetLoc(void);
    const TLoc& GetLoc(void) const;
    void SetLoc(TLoc& value);
    TLoc& SetLoc(void);

    /// can optionally specify the sequence duplicated sequence
    /// optional
    /// typedef string TRaw_seq
    ///  Check whether the Raw_seq data member has been assigned a value.
    bool IsSetRaw_seq(void) const;
    /// Check whether it is safe or not to call GetRaw_seq method.
    bool CanGetRaw_seq(void) const;
    void ResetRaw_seq(void);
    const TRaw_seq& GetRaw_seq(void) const;
    void SetRaw_seq(const TRaw_seq& value);
    TRaw_seq& SetRaw_seq(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CDuplication_Base(const CDuplication_Base&);
    CDuplication_Base& operator=(const CDuplication_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TLoc > m_Loc;
    string m_Raw_seq;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CDuplication_Base::IsSetLoc(void) const
{
    return m_Loc.NotEmpty();
}

inline
bool CDuplication_Base::CanGetLoc(void) const
{
    return true;
}

inline
const CDuplication_Base::TLoc& CDuplication_Base::GetLoc(void) const
{
    if ( !m_Loc ) {
        const_cast<CDuplication_Base*>(this)->ResetLoc();
    }
    return (*m_Loc);
}

inline
CDuplication_Base::TLoc& CDuplication_Base::SetLoc(void)
{
    if ( !m_Loc ) {
        ResetLoc();
    }
    return (*m_Loc);
}

inline
bool CDuplication_Base::IsSetRaw_seq(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CDuplication_Base::CanGetRaw_seq(void) const
{
    return IsSetRaw_seq();
}

inline
const CDuplication_Base::TRaw_seq& CDuplication_Base::GetRaw_seq(void) const
{
    if (!CanGetRaw_seq()) {
        ThrowUnassigned(1);
    }
    return m_Raw_seq;
}

inline
void CDuplication_Base::SetRaw_seq(const CDuplication_Base::TRaw_seq& value)
{
    m_Raw_seq = value;
    m_set_State[0] |= 0xc;
}

inline
CDuplication_Base::TRaw_seq& CDuplication_Base::SetRaw_seq(void)
{
#ifdef _DEBUG
    if (!IsSetRaw_seq()) {
        m_Raw_seq = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Raw_seq;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_VARREP_DUPLICATION_BASE_HPP
