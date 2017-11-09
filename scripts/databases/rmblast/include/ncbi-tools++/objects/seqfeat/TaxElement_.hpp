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

/// @file TaxElement_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQFEAT_TAXELEMENT_BASE_HPP
#define OBJECTS_SEQFEAT_TAXELEMENT_BASE_HPP

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
class NCBI_SEQFEAT_EXPORT CTaxElement_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTaxElement_Base(void);
    // destructor
    virtual ~CTaxElement_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EFixed_level {
        eFixed_level_other  = 0,  ///< level must be set in string
        eFixed_level_family = 1,
        eFixed_level_order  = 2,
        eFixed_level_class  = 3
    };
    
    /// Access to EFixed_level's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EFixed_level)(void);
    
    // types
    typedef int TFixed_level;
    typedef string TLevel;
    typedef string TName;

    // getters
    // setters

    /// mandatory
    /// typedef int TFixed_level
    ///  Check whether the Fixed_level data member has been assigned a value.
    bool IsSetFixed_level(void) const;
    /// Check whether it is safe or not to call GetFixed_level method.
    bool CanGetFixed_level(void) const;
    void ResetFixed_level(void);
    TFixed_level GetFixed_level(void) const;
    void SetFixed_level(TFixed_level value);
    TFixed_level& SetFixed_level(void);

    /// optional
    /// typedef string TLevel
    ///  Check whether the Level data member has been assigned a value.
    bool IsSetLevel(void) const;
    /// Check whether it is safe or not to call GetLevel method.
    bool CanGetLevel(void) const;
    void ResetLevel(void);
    const TLevel& GetLevel(void) const;
    void SetLevel(const TLevel& value);
    TLevel& SetLevel(void);

    /// mandatory
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTaxElement_Base(const CTaxElement_Base&);
    CTaxElement_Base& operator=(const CTaxElement_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Fixed_level;
    string m_Level;
    string m_Name;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTaxElement_Base::IsSetFixed_level(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTaxElement_Base::CanGetFixed_level(void) const
{
    return IsSetFixed_level();
}

inline
void CTaxElement_Base::ResetFixed_level(void)
{
    m_Fixed_level = (EFixed_level)(0);
    m_set_State[0] &= ~0x3;
}

inline
CTaxElement_Base::TFixed_level CTaxElement_Base::GetFixed_level(void) const
{
    if (!CanGetFixed_level()) {
        ThrowUnassigned(0);
    }
    return m_Fixed_level;
}

inline
void CTaxElement_Base::SetFixed_level(CTaxElement_Base::TFixed_level value)
{
    m_Fixed_level = value;
    m_set_State[0] |= 0x3;
}

inline
CTaxElement_Base::TFixed_level& CTaxElement_Base::SetFixed_level(void)
{
#ifdef _DEBUG
    if (!IsSetFixed_level()) {
        memset(&m_Fixed_level,UnassignedByte(),sizeof(m_Fixed_level));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Fixed_level;
}

inline
bool CTaxElement_Base::IsSetLevel(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTaxElement_Base::CanGetLevel(void) const
{
    return IsSetLevel();
}

inline
const CTaxElement_Base::TLevel& CTaxElement_Base::GetLevel(void) const
{
    if (!CanGetLevel()) {
        ThrowUnassigned(1);
    }
    return m_Level;
}

inline
void CTaxElement_Base::SetLevel(const CTaxElement_Base::TLevel& value)
{
    m_Level = value;
    m_set_State[0] |= 0xc;
}

inline
CTaxElement_Base::TLevel& CTaxElement_Base::SetLevel(void)
{
#ifdef _DEBUG
    if (!IsSetLevel()) {
        m_Level = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Level;
}

inline
bool CTaxElement_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CTaxElement_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CTaxElement_Base::TName& CTaxElement_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(2);
    }
    return m_Name;
}

inline
void CTaxElement_Base::SetName(const CTaxElement_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x30;
}

inline
CTaxElement_Base::TName& CTaxElement_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Name;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_TAXELEMENT_BASE_HPP
