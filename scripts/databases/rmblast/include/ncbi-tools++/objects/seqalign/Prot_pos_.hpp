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

/// @file Prot_pos_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqalign.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQALIGN_PROT_POS_BASE_HPP
#define OBJECTS_SEQALIGN_PROT_POS_BASE_HPP

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
/// position on protein (1/3 of amino-acid resolution)
class NCBI_SEQALIGN_EXPORT CProt_pos_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CProt_pos_Base(void);
    // destructor
    virtual ~CProt_pos_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef TSeqPos TAmin;
    typedef TSeqPos TFrame;

    // getters
    // setters

    /// amino-acid position (0-based)
    /// mandatory
    /// typedef TSeqPos TAmin
    ///  Check whether the Amin data member has been assigned a value.
    bool IsSetAmin(void) const;
    /// Check whether it is safe or not to call GetAmin method.
    bool CanGetAmin(void) const;
    void ResetAmin(void);
    TAmin GetAmin(void) const;
    void SetAmin(TAmin value);
    TAmin& SetAmin(void);

    /// position within codon (1-based)
    /// 0 = not set (meaning 1)
    /// optional with default 0
    /// typedef TSeqPos TFrame
    ///  Check whether the Frame data member has been assigned a value.
    bool IsSetFrame(void) const;
    /// Check whether it is safe or not to call GetFrame method.
    bool CanGetFrame(void) const;
    void ResetFrame(void);
    void SetDefaultFrame(void);
    TFrame GetFrame(void) const;
    void SetFrame(TFrame value);
    TFrame& SetFrame(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CProt_pos_Base(const CProt_pos_Base&);
    CProt_pos_Base& operator=(const CProt_pos_Base&);

    // data
    Uint4 m_set_State[1];
    TSeqPos m_Amin;
    TSeqPos m_Frame;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CProt_pos_Base::IsSetAmin(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CProt_pos_Base::CanGetAmin(void) const
{
    return IsSetAmin();
}

inline
void CProt_pos_Base::ResetAmin(void)
{
    m_Amin = 0;
    m_set_State[0] &= ~0x3;
}

inline
CProt_pos_Base::TAmin CProt_pos_Base::GetAmin(void) const
{
    if (!CanGetAmin()) {
        ThrowUnassigned(0);
    }
    return m_Amin;
}

inline
void CProt_pos_Base::SetAmin(CProt_pos_Base::TAmin value)
{
    m_Amin = value;
    m_set_State[0] |= 0x3;
}

inline
CProt_pos_Base::TAmin& CProt_pos_Base::SetAmin(void)
{
#ifdef _DEBUG
    if (!IsSetAmin()) {
        memset(&m_Amin,UnassignedByte(),sizeof(m_Amin));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Amin;
}

inline
bool CProt_pos_Base::IsSetFrame(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CProt_pos_Base::CanGetFrame(void) const
{
    return true;
}

inline
void CProt_pos_Base::ResetFrame(void)
{
    m_Frame = 0;
    m_set_State[0] &= ~0xc;
}

inline
void CProt_pos_Base::SetDefaultFrame(void)
{
    ResetFrame();
}

inline
CProt_pos_Base::TFrame CProt_pos_Base::GetFrame(void) const
{
    return m_Frame;
}

inline
void CProt_pos_Base::SetFrame(CProt_pos_Base::TFrame value)
{
    m_Frame = value;
    m_set_State[0] |= 0xc;
}

inline
CProt_pos_Base::TFrame& CProt_pos_Base::SetFrame(void)
{
#ifdef _DEBUG
    if (!IsSetFrame()) {
        memset(&m_Frame,UnassignedByte(),sizeof(m_Frame));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Frame;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQALIGN_PROT_POS_BASE_HPP
