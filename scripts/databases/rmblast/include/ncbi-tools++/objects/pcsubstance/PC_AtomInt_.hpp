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

/// @file PC_AtomInt_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pcsubstance.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_PCSUBSTANCE_PC_ATOMINT_BASE_HPP
#define OBJECTS_PCSUBSTANCE_PC_ATOMINT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Specification of an Association between an Atom Identifier and an Integer Value
class NCBI_PCSUBSTANCE_EXPORT CPC_AtomInt_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPC_AtomInt_Base(void);
    // destructor
    virtual ~CPC_AtomInt_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TAid;
    typedef int TValue;

    // getters
    // setters

    /// Atom Identifier for the Value
    ///   Note: Atom ID's must be greater than "0"
    /// mandatory
    /// typedef int TAid
    ///  Check whether the Aid data member has been assigned a value.
    bool IsSetAid(void) const;
    /// Check whether it is safe or not to call GetAid method.
    bool CanGetAid(void) const;
    void ResetAid(void);
    TAid GetAid(void) const;
    void SetAid(TAid value);
    TAid& SetAid(void);

    /// Value Associated to the ID
    /// mandatory
    /// typedef int TValue
    ///  Check whether the Value data member has been assigned a value.
    bool IsSetValue(void) const;
    /// Check whether it is safe or not to call GetValue method.
    bool CanGetValue(void) const;
    void ResetValue(void);
    TValue GetValue(void) const;
    void SetValue(TValue value);
    TValue& SetValue(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPC_AtomInt_Base(const CPC_AtomInt_Base&);
    CPC_AtomInt_Base& operator=(const CPC_AtomInt_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Aid;
    int m_Value;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPC_AtomInt_Base::IsSetAid(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPC_AtomInt_Base::CanGetAid(void) const
{
    return IsSetAid();
}

inline
void CPC_AtomInt_Base::ResetAid(void)
{
    m_Aid = 0;
    m_set_State[0] &= ~0x3;
}

inline
CPC_AtomInt_Base::TAid CPC_AtomInt_Base::GetAid(void) const
{
    if (!CanGetAid()) {
        ThrowUnassigned(0);
    }
    return m_Aid;
}

inline
void CPC_AtomInt_Base::SetAid(CPC_AtomInt_Base::TAid value)
{
    m_Aid = value;
    m_set_State[0] |= 0x3;
}

inline
CPC_AtomInt_Base::TAid& CPC_AtomInt_Base::SetAid(void)
{
#ifdef _DEBUG
    if (!IsSetAid()) {
        memset(&m_Aid,UnassignedByte(),sizeof(m_Aid));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Aid;
}

inline
bool CPC_AtomInt_Base::IsSetValue(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPC_AtomInt_Base::CanGetValue(void) const
{
    return IsSetValue();
}

inline
void CPC_AtomInt_Base::ResetValue(void)
{
    m_Value = 0;
    m_set_State[0] &= ~0xc;
}

inline
CPC_AtomInt_Base::TValue CPC_AtomInt_Base::GetValue(void) const
{
    if (!CanGetValue()) {
        ThrowUnassigned(1);
    }
    return m_Value;
}

inline
void CPC_AtomInt_Base::SetValue(CPC_AtomInt_Base::TValue value)
{
    m_Value = value;
    m_set_State[0] |= 0xc;
}

inline
CPC_AtomInt_Base::TValue& CPC_AtomInt_Base::SetValue(void)
{
#ifdef _DEBUG
    if (!IsSetValue()) {
        memset(&m_Value,UnassignedByte(),sizeof(m_Value));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Value;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCSUBSTANCE_PC_ATOMINT_BASE_HPP
