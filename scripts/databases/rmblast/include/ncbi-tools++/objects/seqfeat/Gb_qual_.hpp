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

/// @file Gb_qual_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQFEAT_GB_QUAL_BASE_HPP
#define OBJECTS_SEQFEAT_GB_QUAL_BASE_HPP

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
class NCBI_SEQFEAT_EXPORT CGb_qual_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGb_qual_Base(void);
    // destructor
    virtual ~CGb_qual_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TQual;
    typedef string TVal;

    // getters
    // setters

    /// mandatory
    /// typedef string TQual
    ///  Check whether the Qual data member has been assigned a value.
    bool IsSetQual(void) const;
    /// Check whether it is safe or not to call GetQual method.
    bool CanGetQual(void) const;
    void ResetQual(void);
    const TQual& GetQual(void) const;
    void SetQual(const TQual& value);
    TQual& SetQual(void);

    /// mandatory
    /// typedef string TVal
    ///  Check whether the Val data member has been assigned a value.
    bool IsSetVal(void) const;
    /// Check whether it is safe or not to call GetVal method.
    bool CanGetVal(void) const;
    void ResetVal(void);
    const TVal& GetVal(void) const;
    void SetVal(const TVal& value);
    TVal& SetVal(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGb_qual_Base(const CGb_qual_Base&);
    CGb_qual_Base& operator=(const CGb_qual_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Qual;
    string m_Val;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGb_qual_Base::IsSetQual(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGb_qual_Base::CanGetQual(void) const
{
    return IsSetQual();
}

inline
const CGb_qual_Base::TQual& CGb_qual_Base::GetQual(void) const
{
    if (!CanGetQual()) {
        ThrowUnassigned(0);
    }
    return m_Qual;
}

inline
void CGb_qual_Base::SetQual(const CGb_qual_Base::TQual& value)
{
    m_Qual = value;
    m_set_State[0] |= 0x3;
}

inline
CGb_qual_Base::TQual& CGb_qual_Base::SetQual(void)
{
#ifdef _DEBUG
    if (!IsSetQual()) {
        m_Qual = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Qual;
}

inline
bool CGb_qual_Base::IsSetVal(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGb_qual_Base::CanGetVal(void) const
{
    return IsSetVal();
}

inline
const CGb_qual_Base::TVal& CGb_qual_Base::GetVal(void) const
{
    if (!CanGetVal()) {
        ThrowUnassigned(1);
    }
    return m_Val;
}

inline
void CGb_qual_Base::SetVal(const CGb_qual_Base::TVal& value)
{
    m_Val = value;
    m_set_State[0] |= 0xc;
}

inline
CGb_qual_Base::TVal& CGb_qual_Base::SetVal(void)
{
#ifdef _DEBUG
    if (!IsSetVal()) {
        m_Val = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Val;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_GB_QUAL_BASE_HPP
