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

/// @file Std_seg_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqalign.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQALIGN_STD_SEG_BASE_HPP
#define OBJECTS_SEQALIGN_STD_SEG_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <vector>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CScore;
class CSeq_id;
class CSeq_loc;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQALIGN_EXPORT CStd_seg_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CStd_seg_Base(void);
    // destructor
    virtual ~CStd_seg_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TDim;
    typedef vector< CRef< CSeq_id > > TIds;
    typedef vector< CRef< CSeq_loc > > TLoc;
    typedef vector< CRef< CScore > > TScores;

    // getters
    // setters

    /// dimensionality
    /// optional with default 2
    /// typedef int TDim
    ///  Check whether the Dim data member has been assigned a value.
    bool IsSetDim(void) const;
    /// Check whether it is safe or not to call GetDim method.
    bool CanGetDim(void) const;
    void ResetDim(void);
    void SetDefaultDim(void);
    TDim GetDim(void) const;
    void SetDim(TDim value);
    TDim& SetDim(void);

    /// optional
    /// typedef vector< CRef< CSeq_id > > TIds
    ///  Check whether the Ids data member has been assigned a value.
    bool IsSetIds(void) const;
    /// Check whether it is safe or not to call GetIds method.
    bool CanGetIds(void) const;
    void ResetIds(void);
    const TIds& GetIds(void) const;
    TIds& SetIds(void);

    /// mandatory
    /// typedef vector< CRef< CSeq_loc > > TLoc
    ///  Check whether the Loc data member has been assigned a value.
    bool IsSetLoc(void) const;
    /// Check whether it is safe or not to call GetLoc method.
    bool CanGetLoc(void) const;
    void ResetLoc(void);
    const TLoc& GetLoc(void) const;
    TLoc& SetLoc(void);

    /// optional
    /// typedef vector< CRef< CScore > > TScores
    ///  Check whether the Scores data member has been assigned a value.
    bool IsSetScores(void) const;
    /// Check whether it is safe or not to call GetScores method.
    bool CanGetScores(void) const;
    void ResetScores(void);
    const TScores& GetScores(void) const;
    TScores& SetScores(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CStd_seg_Base(const CStd_seg_Base&);
    CStd_seg_Base& operator=(const CStd_seg_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Dim;
    vector< CRef< CSeq_id > > m_Ids;
    vector< CRef< CSeq_loc > > m_Loc;
    vector< CRef< CScore > > m_Scores;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CStd_seg_Base::IsSetDim(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CStd_seg_Base::CanGetDim(void) const
{
    return true;
}

inline
void CStd_seg_Base::ResetDim(void)
{
    m_Dim = 2;
    m_set_State[0] &= ~0x3;
}

inline
void CStd_seg_Base::SetDefaultDim(void)
{
    ResetDim();
}

inline
CStd_seg_Base::TDim CStd_seg_Base::GetDim(void) const
{
    return m_Dim;
}

inline
void CStd_seg_Base::SetDim(CStd_seg_Base::TDim value)
{
    m_Dim = value;
    m_set_State[0] |= 0x3;
}

inline
CStd_seg_Base::TDim& CStd_seg_Base::SetDim(void)
{
#ifdef _DEBUG
    if (!IsSetDim()) {
        memset(&m_Dim,UnassignedByte(),sizeof(m_Dim));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Dim;
}

inline
bool CStd_seg_Base::IsSetIds(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CStd_seg_Base::CanGetIds(void) const
{
    return true;
}

inline
const CStd_seg_Base::TIds& CStd_seg_Base::GetIds(void) const
{
    return m_Ids;
}

inline
CStd_seg_Base::TIds& CStd_seg_Base::SetIds(void)
{
    m_set_State[0] |= 0x4;
    return m_Ids;
}

inline
bool CStd_seg_Base::IsSetLoc(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CStd_seg_Base::CanGetLoc(void) const
{
    return true;
}

inline
const CStd_seg_Base::TLoc& CStd_seg_Base::GetLoc(void) const
{
    return m_Loc;
}

inline
CStd_seg_Base::TLoc& CStd_seg_Base::SetLoc(void)
{
    m_set_State[0] |= 0x10;
    return m_Loc;
}

inline
bool CStd_seg_Base::IsSetScores(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CStd_seg_Base::CanGetScores(void) const
{
    return true;
}

inline
const CStd_seg_Base::TScores& CStd_seg_Base::GetScores(void) const
{
    return m_Scores;
}

inline
CStd_seg_Base::TScores& CStd_seg_Base::SetScores(void)
{
    m_set_State[0] |= 0x40;
    return m_Scores;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQALIGN_STD_SEG_BASE_HPP
