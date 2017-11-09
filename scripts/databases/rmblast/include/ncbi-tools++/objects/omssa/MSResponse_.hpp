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

/// @file MSResponse_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'omssa.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_OMSSA_MSRESPONSE_BASE_HPP
#define OBJECTS_OMSSA_MSRESPONSE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <vector>
#include <objects/omssa/MSResponseError.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CMSBioseqSet;
class CMSHitSet;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// search results
class NCBI_OMSSA_EXPORT CMSResponse_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMSResponse_Base(void);
    // destructor
    virtual ~CMSResponse_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef vector< CRef< CMSHitSet > > THitsets;
    typedef int TScale;
    typedef string TRid;
    typedef int TError;
    typedef string TVersion;
    typedef string TEmail;
    typedef int TDbversion;
    typedef CMSBioseqSet TBioseqs;

    // getters
    // setters

    /// hits grouped by spectrum
    /// mandatory
    /// typedef vector< CRef< CMSHitSet > > THitsets
    ///  Check whether the Hitsets data member has been assigned a value.
    bool IsSetHitsets(void) const;
    /// Check whether it is safe or not to call GetHitsets method.
    bool CanGetHitsets(void) const;
    void ResetHitsets(void);
    const THitsets& GetHitsets(void) const;
    THitsets& SetHitsets(void);

    /// scale to change m/z float to integer
    /// optional with default 100
    /// typedef int TScale
    ///  Check whether the Scale data member has been assigned a value.
    bool IsSetScale(void) const;
    /// Check whether it is safe or not to call GetScale method.
    bool CanGetScale(void) const;
    void ResetScale(void);
    void SetDefaultScale(void);
    TScale GetScale(void) const;
    void SetScale(TScale value);
    TScale& SetScale(void);

    /// request id
    /// optional
    /// typedef string TRid
    ///  Check whether the Rid data member has been assigned a value.
    bool IsSetRid(void) const;
    /// Check whether it is safe or not to call GetRid method.
    bool CanGetRid(void) const;
    void ResetRid(void);
    const TRid& GetRid(void) const;
    void SetRid(const TRid& value);
    TRid& SetRid(void);

    /// error response
    /// optional
    /// typedef int TError
    ///  Check whether the Error data member has been assigned a value.
    bool IsSetError(void) const;
    /// Check whether it is safe or not to call GetError method.
    bool CanGetError(void) const;
    void ResetError(void);
    TError GetError(void) const;
    void SetError(TError value);
    TError& SetError(void);

    /// version of OMSSA
    /// optional
    /// typedef string TVersion
    ///  Check whether the Version data member has been assigned a value.
    bool IsSetVersion(void) const;
    /// Check whether it is safe or not to call GetVersion method.
    bool CanGetVersion(void) const;
    void ResetVersion(void);
    const TVersion& GetVersion(void) const;
    void SetVersion(const TVersion& value);
    TVersion& SetVersion(void);

    /// email address for notification
    /// optional
    /// typedef string TEmail
    ///  Check whether the Email data member has been assigned a value.
    bool IsSetEmail(void) const;
    /// Check whether it is safe or not to call GetEmail method.
    bool CanGetEmail(void) const;
    void ResetEmail(void);
    const TEmail& GetEmail(void) const;
    void SetEmail(const TEmail& value);
    TEmail& SetEmail(void);

    /// version of db searched (usually size)
    /// optional
    /// typedef int TDbversion
    ///  Check whether the Dbversion data member has been assigned a value.
    bool IsSetDbversion(void) const;
    /// Check whether it is safe or not to call GetDbversion method.
    bool CanGetDbversion(void) const;
    void ResetDbversion(void);
    TDbversion GetDbversion(void) const;
    void SetDbversion(TDbversion value);
    TDbversion& SetDbversion(void);

    /// sequences found in search     
    /// optional
    /// typedef CMSBioseqSet TBioseqs
    ///  Check whether the Bioseqs data member has been assigned a value.
    bool IsSetBioseqs(void) const;
    /// Check whether it is safe or not to call GetBioseqs method.
    bool CanGetBioseqs(void) const;
    void ResetBioseqs(void);
    const TBioseqs& GetBioseqs(void) const;
    void SetBioseqs(TBioseqs& value);
    TBioseqs& SetBioseqs(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMSResponse_Base(const CMSResponse_Base&);
    CMSResponse_Base& operator=(const CMSResponse_Base&);

    // data
    Uint4 m_set_State[1];
    vector< CRef< CMSHitSet > > m_Hitsets;
    int m_Scale;
    string m_Rid;
    int m_Error;
    string m_Version;
    string m_Email;
    int m_Dbversion;
    CRef< TBioseqs > m_Bioseqs;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMSResponse_Base::IsSetHitsets(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMSResponse_Base::CanGetHitsets(void) const
{
    return true;
}

inline
const CMSResponse_Base::THitsets& CMSResponse_Base::GetHitsets(void) const
{
    return m_Hitsets;
}

inline
CMSResponse_Base::THitsets& CMSResponse_Base::SetHitsets(void)
{
    m_set_State[0] |= 0x1;
    return m_Hitsets;
}

inline
bool CMSResponse_Base::IsSetScale(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMSResponse_Base::CanGetScale(void) const
{
    return true;
}

inline
void CMSResponse_Base::ResetScale(void)
{
    m_Scale = 100;
    m_set_State[0] &= ~0xc;
}

inline
void CMSResponse_Base::SetDefaultScale(void)
{
    ResetScale();
}

inline
CMSResponse_Base::TScale CMSResponse_Base::GetScale(void) const
{
    return m_Scale;
}

inline
void CMSResponse_Base::SetScale(CMSResponse_Base::TScale value)
{
    m_Scale = value;
    m_set_State[0] |= 0xc;
}

inline
CMSResponse_Base::TScale& CMSResponse_Base::SetScale(void)
{
#ifdef _DEBUG
    if (!IsSetScale()) {
        memset(&m_Scale,UnassignedByte(),sizeof(m_Scale));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Scale;
}

inline
bool CMSResponse_Base::IsSetRid(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMSResponse_Base::CanGetRid(void) const
{
    return IsSetRid();
}

inline
const CMSResponse_Base::TRid& CMSResponse_Base::GetRid(void) const
{
    if (!CanGetRid()) {
        ThrowUnassigned(2);
    }
    return m_Rid;
}

inline
void CMSResponse_Base::SetRid(const CMSResponse_Base::TRid& value)
{
    m_Rid = value;
    m_set_State[0] |= 0x30;
}

inline
CMSResponse_Base::TRid& CMSResponse_Base::SetRid(void)
{
#ifdef _DEBUG
    if (!IsSetRid()) {
        m_Rid = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Rid;
}

inline
bool CMSResponse_Base::IsSetError(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CMSResponse_Base::CanGetError(void) const
{
    return IsSetError();
}

inline
void CMSResponse_Base::ResetError(void)
{
    m_Error = (int)(0);
    m_set_State[0] &= ~0xc0;
}

inline
CMSResponse_Base::TError CMSResponse_Base::GetError(void) const
{
    if (!CanGetError()) {
        ThrowUnassigned(3);
    }
    return m_Error;
}

inline
void CMSResponse_Base::SetError(CMSResponse_Base::TError value)
{
    m_Error = value;
    m_set_State[0] |= 0xc0;
}

inline
CMSResponse_Base::TError& CMSResponse_Base::SetError(void)
{
#ifdef _DEBUG
    if (!IsSetError()) {
        memset(&m_Error,UnassignedByte(),sizeof(m_Error));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Error;
}

inline
bool CMSResponse_Base::IsSetVersion(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CMSResponse_Base::CanGetVersion(void) const
{
    return IsSetVersion();
}

inline
const CMSResponse_Base::TVersion& CMSResponse_Base::GetVersion(void) const
{
    if (!CanGetVersion()) {
        ThrowUnassigned(4);
    }
    return m_Version;
}

inline
void CMSResponse_Base::SetVersion(const CMSResponse_Base::TVersion& value)
{
    m_Version = value;
    m_set_State[0] |= 0x300;
}

inline
CMSResponse_Base::TVersion& CMSResponse_Base::SetVersion(void)
{
#ifdef _DEBUG
    if (!IsSetVersion()) {
        m_Version = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Version;
}

inline
bool CMSResponse_Base::IsSetEmail(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CMSResponse_Base::CanGetEmail(void) const
{
    return IsSetEmail();
}

inline
const CMSResponse_Base::TEmail& CMSResponse_Base::GetEmail(void) const
{
    if (!CanGetEmail()) {
        ThrowUnassigned(5);
    }
    return m_Email;
}

inline
void CMSResponse_Base::SetEmail(const CMSResponse_Base::TEmail& value)
{
    m_Email = value;
    m_set_State[0] |= 0xc00;
}

inline
CMSResponse_Base::TEmail& CMSResponse_Base::SetEmail(void)
{
#ifdef _DEBUG
    if (!IsSetEmail()) {
        m_Email = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Email;
}

inline
bool CMSResponse_Base::IsSetDbversion(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CMSResponse_Base::CanGetDbversion(void) const
{
    return IsSetDbversion();
}

inline
void CMSResponse_Base::ResetDbversion(void)
{
    m_Dbversion = 0;
    m_set_State[0] &= ~0x3000;
}

inline
CMSResponse_Base::TDbversion CMSResponse_Base::GetDbversion(void) const
{
    if (!CanGetDbversion()) {
        ThrowUnassigned(6);
    }
    return m_Dbversion;
}

inline
void CMSResponse_Base::SetDbversion(CMSResponse_Base::TDbversion value)
{
    m_Dbversion = value;
    m_set_State[0] |= 0x3000;
}

inline
CMSResponse_Base::TDbversion& CMSResponse_Base::SetDbversion(void)
{
#ifdef _DEBUG
    if (!IsSetDbversion()) {
        memset(&m_Dbversion,UnassignedByte(),sizeof(m_Dbversion));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Dbversion;
}

inline
bool CMSResponse_Base::IsSetBioseqs(void) const
{
    return m_Bioseqs.NotEmpty();
}

inline
bool CMSResponse_Base::CanGetBioseqs(void) const
{
    return IsSetBioseqs();
}

inline
const CMSResponse_Base::TBioseqs& CMSResponse_Base::GetBioseqs(void) const
{
    if (!CanGetBioseqs()) {
        ThrowUnassigned(7);
    }
    return (*m_Bioseqs);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_OMSSA_MSRESPONSE_BASE_HPP
