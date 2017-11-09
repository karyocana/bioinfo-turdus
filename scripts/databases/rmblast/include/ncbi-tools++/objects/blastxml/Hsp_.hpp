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

/// @file Hsp_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blastxml.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLASTXML_HSP_BASE_HPP
#define OBJECTS_BLASTXML_HSP_BASE_HPP

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
class NCBI_BLASTXML_EXPORT CHsp_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CHsp_Base(void);
    // destructor
    virtual ~CHsp_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TNum;
    typedef double TBit_score;
    typedef double TScore;
    typedef double TEvalue;
    typedef int TQuery_from;
    typedef int TQuery_to;
    typedef int THit_from;
    typedef int THit_to;
    typedef int TPattern_from;
    typedef int TPattern_to;
    typedef int TQuery_frame;
    typedef int THit_frame;
    typedef int TIdentity;
    typedef int TPositive;
    typedef int TGaps;
    typedef int TAlign_len;
    typedef int TDensity;
    typedef string TQseq;
    typedef string THseq;
    typedef string TMidline;

    // getters
    // setters

    /// HSP number
    /// mandatory
    /// typedef int TNum
    ///  Check whether the Num data member has been assigned a value.
    bool IsSetNum(void) const;
    /// Check whether it is safe or not to call GetNum method.
    bool CanGetNum(void) const;
    void ResetNum(void);
    TNum GetNum(void) const;
    void SetNum(TNum value);
    TNum& SetNum(void);

    /// score (in bits) of HSP
    /// mandatory
    /// typedef double TBit_score
    ///  Check whether the Bit_score data member has been assigned a value.
    bool IsSetBit_score(void) const;
    /// Check whether it is safe or not to call GetBit_score method.
    bool CanGetBit_score(void) const;
    void ResetBit_score(void);
    TBit_score GetBit_score(void) const;
    void SetBit_score(TBit_score value);
    TBit_score& SetBit_score(void);

    /// score of HSP
    /// mandatory
    /// typedef double TScore
    ///  Check whether the Score data member has been assigned a value.
    bool IsSetScore(void) const;
    /// Check whether it is safe or not to call GetScore method.
    bool CanGetScore(void) const;
    void ResetScore(void);
    TScore GetScore(void) const;
    void SetScore(TScore value);
    TScore& SetScore(void);

    /// e-value of HSP
    /// mandatory
    /// typedef double TEvalue
    ///  Check whether the Evalue data member has been assigned a value.
    bool IsSetEvalue(void) const;
    /// Check whether it is safe or not to call GetEvalue method.
    bool CanGetEvalue(void) const;
    void ResetEvalue(void);
    TEvalue GetEvalue(void) const;
    void SetEvalue(TEvalue value);
    TEvalue& SetEvalue(void);

    /// start of HSP in query
    /// mandatory
    /// typedef int TQuery_from
    ///  Check whether the Query_from data member has been assigned a value.
    bool IsSetQuery_from(void) const;
    /// Check whether it is safe or not to call GetQuery_from method.
    bool CanGetQuery_from(void) const;
    void ResetQuery_from(void);
    TQuery_from GetQuery_from(void) const;
    void SetQuery_from(TQuery_from value);
    TQuery_from& SetQuery_from(void);

    /// end of HSP
    /// mandatory
    /// typedef int TQuery_to
    ///  Check whether the Query_to data member has been assigned a value.
    bool IsSetQuery_to(void) const;
    /// Check whether it is safe or not to call GetQuery_to method.
    bool CanGetQuery_to(void) const;
    void ResetQuery_to(void);
    TQuery_to GetQuery_to(void) const;
    void SetQuery_to(TQuery_to value);
    TQuery_to& SetQuery_to(void);

    /// start of HSP in subject
    /// mandatory
    /// typedef int THit_from
    ///  Check whether the Hit_from data member has been assigned a value.
    bool IsSetHit_from(void) const;
    /// Check whether it is safe or not to call GetHit_from method.
    bool CanGetHit_from(void) const;
    void ResetHit_from(void);
    THit_from GetHit_from(void) const;
    void SetHit_from(THit_from value);
    THit_from& SetHit_from(void);

    /// end of HSP in subject
    /// mandatory
    /// typedef int THit_to
    ///  Check whether the Hit_to data member has been assigned a value.
    bool IsSetHit_to(void) const;
    /// Check whether it is safe or not to call GetHit_to method.
    bool CanGetHit_to(void) const;
    void ResetHit_to(void);
    THit_to GetHit_to(void) const;
    void SetHit_to(THit_to value);
    THit_to& SetHit_to(void);

    /// start of PHI-BLAST pattern
    /// optional
    /// typedef int TPattern_from
    ///  Check whether the Pattern_from data member has been assigned a value.
    bool IsSetPattern_from(void) const;
    /// Check whether it is safe or not to call GetPattern_from method.
    bool CanGetPattern_from(void) const;
    void ResetPattern_from(void);
    TPattern_from GetPattern_from(void) const;
    void SetPattern_from(TPattern_from value);
    TPattern_from& SetPattern_from(void);

    /// end of PHI-BLAST pattern
    /// optional
    /// typedef int TPattern_to
    ///  Check whether the Pattern_to data member has been assigned a value.
    bool IsSetPattern_to(void) const;
    /// Check whether it is safe or not to call GetPattern_to method.
    bool CanGetPattern_to(void) const;
    void ResetPattern_to(void);
    TPattern_to GetPattern_to(void) const;
    void SetPattern_to(TPattern_to value);
    TPattern_to& SetPattern_to(void);

    /// translation frame of query
    /// optional
    /// typedef int TQuery_frame
    ///  Check whether the Query_frame data member has been assigned a value.
    bool IsSetQuery_frame(void) const;
    /// Check whether it is safe or not to call GetQuery_frame method.
    bool CanGetQuery_frame(void) const;
    void ResetQuery_frame(void);
    TQuery_frame GetQuery_frame(void) const;
    void SetQuery_frame(TQuery_frame value);
    TQuery_frame& SetQuery_frame(void);

    /// translation frame of subject
    /// optional
    /// typedef int THit_frame
    ///  Check whether the Hit_frame data member has been assigned a value.
    bool IsSetHit_frame(void) const;
    /// Check whether it is safe or not to call GetHit_frame method.
    bool CanGetHit_frame(void) const;
    void ResetHit_frame(void);
    THit_frame GetHit_frame(void) const;
    void SetHit_frame(THit_frame value);
    THit_frame& SetHit_frame(void);

    /// number of identities in HSP
    /// optional
    /// typedef int TIdentity
    ///  Check whether the Identity data member has been assigned a value.
    bool IsSetIdentity(void) const;
    /// Check whether it is safe or not to call GetIdentity method.
    bool CanGetIdentity(void) const;
    void ResetIdentity(void);
    TIdentity GetIdentity(void) const;
    void SetIdentity(TIdentity value);
    TIdentity& SetIdentity(void);

    /// number of positives in HSP
    /// optional
    /// typedef int TPositive
    ///  Check whether the Positive data member has been assigned a value.
    bool IsSetPositive(void) const;
    /// Check whether it is safe or not to call GetPositive method.
    bool CanGetPositive(void) const;
    void ResetPositive(void);
    TPositive GetPositive(void) const;
    void SetPositive(TPositive value);
    TPositive& SetPositive(void);

    /// number of gaps in HSP
    /// optional
    /// typedef int TGaps
    ///  Check whether the Gaps data member has been assigned a value.
    bool IsSetGaps(void) const;
    /// Check whether it is safe or not to call GetGaps method.
    bool CanGetGaps(void) const;
    void ResetGaps(void);
    TGaps GetGaps(void) const;
    void SetGaps(TGaps value);
    TGaps& SetGaps(void);

    /// length of the alignment used
    /// optional
    /// typedef int TAlign_len
    ///  Check whether the Align_len data member has been assigned a value.
    bool IsSetAlign_len(void) const;
    /// Check whether it is safe or not to call GetAlign_len method.
    bool CanGetAlign_len(void) const;
    void ResetAlign_len(void);
    TAlign_len GetAlign_len(void) const;
    void SetAlign_len(TAlign_len value);
    TAlign_len& SetAlign_len(void);

    /// score density
    /// optional
    /// typedef int TDensity
    ///  Check whether the Density data member has been assigned a value.
    bool IsSetDensity(void) const;
    /// Check whether it is safe or not to call GetDensity method.
    bool CanGetDensity(void) const;
    void ResetDensity(void);
    TDensity GetDensity(void) const;
    void SetDensity(TDensity value);
    TDensity& SetDensity(void);

    /// alignment string for the query (with gaps)
    /// mandatory
    /// typedef string TQseq
    ///  Check whether the Qseq data member has been assigned a value.
    bool IsSetQseq(void) const;
    /// Check whether it is safe or not to call GetQseq method.
    bool CanGetQseq(void) const;
    void ResetQseq(void);
    const TQseq& GetQseq(void) const;
    void SetQseq(const TQseq& value);
    TQseq& SetQseq(void);

    /// alignment string for subject (with gaps)
    /// mandatory
    /// typedef string THseq
    ///  Check whether the Hseq data member has been assigned a value.
    bool IsSetHseq(void) const;
    /// Check whether it is safe or not to call GetHseq method.
    bool CanGetHseq(void) const;
    void ResetHseq(void);
    const THseq& GetHseq(void) const;
    void SetHseq(const THseq& value);
    THseq& SetHseq(void);

    /// formating middle line
    /// optional
    /// typedef string TMidline
    ///  Check whether the Midline data member has been assigned a value.
    bool IsSetMidline(void) const;
    /// Check whether it is safe or not to call GetMidline method.
    bool CanGetMidline(void) const;
    void ResetMidline(void);
    const TMidline& GetMidline(void) const;
    void SetMidline(const TMidline& value);
    TMidline& SetMidline(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CHsp_Base(const CHsp_Base&);
    CHsp_Base& operator=(const CHsp_Base&);

    // data
    Uint4 m_set_State[2];
    int m_Num;
    double m_Bit_score;
    double m_Score;
    double m_Evalue;
    int m_Query_from;
    int m_Query_to;
    int m_Hit_from;
    int m_Hit_to;
    int m_Pattern_from;
    int m_Pattern_to;
    int m_Query_frame;
    int m_Hit_frame;
    int m_Identity;
    int m_Positive;
    int m_Gaps;
    int m_Align_len;
    int m_Density;
    string m_Qseq;
    string m_Hseq;
    string m_Midline;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CHsp_Base::IsSetNum(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CHsp_Base::CanGetNum(void) const
{
    return IsSetNum();
}

inline
void CHsp_Base::ResetNum(void)
{
    m_Num = 0;
    m_set_State[0] &= ~0x3;
}

inline
CHsp_Base::TNum CHsp_Base::GetNum(void) const
{
    if (!CanGetNum()) {
        ThrowUnassigned(0);
    }
    return m_Num;
}

inline
void CHsp_Base::SetNum(CHsp_Base::TNum value)
{
    m_Num = value;
    m_set_State[0] |= 0x3;
}

inline
CHsp_Base::TNum& CHsp_Base::SetNum(void)
{
#ifdef _DEBUG
    if (!IsSetNum()) {
        memset(&m_Num,UnassignedByte(),sizeof(m_Num));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Num;
}

inline
bool CHsp_Base::IsSetBit_score(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CHsp_Base::CanGetBit_score(void) const
{
    return IsSetBit_score();
}

inline
void CHsp_Base::ResetBit_score(void)
{
    m_Bit_score = 0;
    m_set_State[0] &= ~0xc;
}

inline
CHsp_Base::TBit_score CHsp_Base::GetBit_score(void) const
{
    if (!CanGetBit_score()) {
        ThrowUnassigned(1);
    }
    return m_Bit_score;
}

inline
void CHsp_Base::SetBit_score(CHsp_Base::TBit_score value)
{
    m_Bit_score = value;
    m_set_State[0] |= 0xc;
}

inline
CHsp_Base::TBit_score& CHsp_Base::SetBit_score(void)
{
#ifdef _DEBUG
    if (!IsSetBit_score()) {
        memset(&m_Bit_score,UnassignedByte(),sizeof(m_Bit_score));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Bit_score;
}

inline
bool CHsp_Base::IsSetScore(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CHsp_Base::CanGetScore(void) const
{
    return IsSetScore();
}

inline
void CHsp_Base::ResetScore(void)
{
    m_Score = 0;
    m_set_State[0] &= ~0x30;
}

inline
CHsp_Base::TScore CHsp_Base::GetScore(void) const
{
    if (!CanGetScore()) {
        ThrowUnassigned(2);
    }
    return m_Score;
}

inline
void CHsp_Base::SetScore(CHsp_Base::TScore value)
{
    m_Score = value;
    m_set_State[0] |= 0x30;
}

inline
CHsp_Base::TScore& CHsp_Base::SetScore(void)
{
#ifdef _DEBUG
    if (!IsSetScore()) {
        memset(&m_Score,UnassignedByte(),sizeof(m_Score));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Score;
}

inline
bool CHsp_Base::IsSetEvalue(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CHsp_Base::CanGetEvalue(void) const
{
    return IsSetEvalue();
}

inline
void CHsp_Base::ResetEvalue(void)
{
    m_Evalue = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CHsp_Base::TEvalue CHsp_Base::GetEvalue(void) const
{
    if (!CanGetEvalue()) {
        ThrowUnassigned(3);
    }
    return m_Evalue;
}

inline
void CHsp_Base::SetEvalue(CHsp_Base::TEvalue value)
{
    m_Evalue = value;
    m_set_State[0] |= 0xc0;
}

inline
CHsp_Base::TEvalue& CHsp_Base::SetEvalue(void)
{
#ifdef _DEBUG
    if (!IsSetEvalue()) {
        memset(&m_Evalue,UnassignedByte(),sizeof(m_Evalue));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Evalue;
}

inline
bool CHsp_Base::IsSetQuery_from(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CHsp_Base::CanGetQuery_from(void) const
{
    return IsSetQuery_from();
}

inline
void CHsp_Base::ResetQuery_from(void)
{
    m_Query_from = 0;
    m_set_State[0] &= ~0x300;
}

inline
CHsp_Base::TQuery_from CHsp_Base::GetQuery_from(void) const
{
    if (!CanGetQuery_from()) {
        ThrowUnassigned(4);
    }
    return m_Query_from;
}

inline
void CHsp_Base::SetQuery_from(CHsp_Base::TQuery_from value)
{
    m_Query_from = value;
    m_set_State[0] |= 0x300;
}

inline
CHsp_Base::TQuery_from& CHsp_Base::SetQuery_from(void)
{
#ifdef _DEBUG
    if (!IsSetQuery_from()) {
        memset(&m_Query_from,UnassignedByte(),sizeof(m_Query_from));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Query_from;
}

inline
bool CHsp_Base::IsSetQuery_to(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CHsp_Base::CanGetQuery_to(void) const
{
    return IsSetQuery_to();
}

inline
void CHsp_Base::ResetQuery_to(void)
{
    m_Query_to = 0;
    m_set_State[0] &= ~0xc00;
}

inline
CHsp_Base::TQuery_to CHsp_Base::GetQuery_to(void) const
{
    if (!CanGetQuery_to()) {
        ThrowUnassigned(5);
    }
    return m_Query_to;
}

inline
void CHsp_Base::SetQuery_to(CHsp_Base::TQuery_to value)
{
    m_Query_to = value;
    m_set_State[0] |= 0xc00;
}

inline
CHsp_Base::TQuery_to& CHsp_Base::SetQuery_to(void)
{
#ifdef _DEBUG
    if (!IsSetQuery_to()) {
        memset(&m_Query_to,UnassignedByte(),sizeof(m_Query_to));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Query_to;
}

inline
bool CHsp_Base::IsSetHit_from(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CHsp_Base::CanGetHit_from(void) const
{
    return IsSetHit_from();
}

inline
void CHsp_Base::ResetHit_from(void)
{
    m_Hit_from = 0;
    m_set_State[0] &= ~0x3000;
}

inline
CHsp_Base::THit_from CHsp_Base::GetHit_from(void) const
{
    if (!CanGetHit_from()) {
        ThrowUnassigned(6);
    }
    return m_Hit_from;
}

inline
void CHsp_Base::SetHit_from(CHsp_Base::THit_from value)
{
    m_Hit_from = value;
    m_set_State[0] |= 0x3000;
}

inline
CHsp_Base::THit_from& CHsp_Base::SetHit_from(void)
{
#ifdef _DEBUG
    if (!IsSetHit_from()) {
        memset(&m_Hit_from,UnassignedByte(),sizeof(m_Hit_from));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Hit_from;
}

inline
bool CHsp_Base::IsSetHit_to(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CHsp_Base::CanGetHit_to(void) const
{
    return IsSetHit_to();
}

inline
void CHsp_Base::ResetHit_to(void)
{
    m_Hit_to = 0;
    m_set_State[0] &= ~0xc000;
}

inline
CHsp_Base::THit_to CHsp_Base::GetHit_to(void) const
{
    if (!CanGetHit_to()) {
        ThrowUnassigned(7);
    }
    return m_Hit_to;
}

inline
void CHsp_Base::SetHit_to(CHsp_Base::THit_to value)
{
    m_Hit_to = value;
    m_set_State[0] |= 0xc000;
}

inline
CHsp_Base::THit_to& CHsp_Base::SetHit_to(void)
{
#ifdef _DEBUG
    if (!IsSetHit_to()) {
        memset(&m_Hit_to,UnassignedByte(),sizeof(m_Hit_to));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Hit_to;
}

inline
bool CHsp_Base::IsSetPattern_from(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CHsp_Base::CanGetPattern_from(void) const
{
    return IsSetPattern_from();
}

inline
void CHsp_Base::ResetPattern_from(void)
{
    m_Pattern_from = 0;
    m_set_State[0] &= ~0x30000;
}

inline
CHsp_Base::TPattern_from CHsp_Base::GetPattern_from(void) const
{
    if (!CanGetPattern_from()) {
        ThrowUnassigned(8);
    }
    return m_Pattern_from;
}

inline
void CHsp_Base::SetPattern_from(CHsp_Base::TPattern_from value)
{
    m_Pattern_from = value;
    m_set_State[0] |= 0x30000;
}

inline
CHsp_Base::TPattern_from& CHsp_Base::SetPattern_from(void)
{
#ifdef _DEBUG
    if (!IsSetPattern_from()) {
        memset(&m_Pattern_from,UnassignedByte(),sizeof(m_Pattern_from));
    }
#endif
    m_set_State[0] |= 0x10000;
    return m_Pattern_from;
}

inline
bool CHsp_Base::IsSetPattern_to(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CHsp_Base::CanGetPattern_to(void) const
{
    return IsSetPattern_to();
}

inline
void CHsp_Base::ResetPattern_to(void)
{
    m_Pattern_to = 0;
    m_set_State[0] &= ~0xc0000;
}

inline
CHsp_Base::TPattern_to CHsp_Base::GetPattern_to(void) const
{
    if (!CanGetPattern_to()) {
        ThrowUnassigned(9);
    }
    return m_Pattern_to;
}

inline
void CHsp_Base::SetPattern_to(CHsp_Base::TPattern_to value)
{
    m_Pattern_to = value;
    m_set_State[0] |= 0xc0000;
}

inline
CHsp_Base::TPattern_to& CHsp_Base::SetPattern_to(void)
{
#ifdef _DEBUG
    if (!IsSetPattern_to()) {
        memset(&m_Pattern_to,UnassignedByte(),sizeof(m_Pattern_to));
    }
#endif
    m_set_State[0] |= 0x40000;
    return m_Pattern_to;
}

inline
bool CHsp_Base::IsSetQuery_frame(void) const
{
    return ((m_set_State[0] & 0x300000) != 0);
}

inline
bool CHsp_Base::CanGetQuery_frame(void) const
{
    return IsSetQuery_frame();
}

inline
void CHsp_Base::ResetQuery_frame(void)
{
    m_Query_frame = 0;
    m_set_State[0] &= ~0x300000;
}

inline
CHsp_Base::TQuery_frame CHsp_Base::GetQuery_frame(void) const
{
    if (!CanGetQuery_frame()) {
        ThrowUnassigned(10);
    }
    return m_Query_frame;
}

inline
void CHsp_Base::SetQuery_frame(CHsp_Base::TQuery_frame value)
{
    m_Query_frame = value;
    m_set_State[0] |= 0x300000;
}

inline
CHsp_Base::TQuery_frame& CHsp_Base::SetQuery_frame(void)
{
#ifdef _DEBUG
    if (!IsSetQuery_frame()) {
        memset(&m_Query_frame,UnassignedByte(),sizeof(m_Query_frame));
    }
#endif
    m_set_State[0] |= 0x100000;
    return m_Query_frame;
}

inline
bool CHsp_Base::IsSetHit_frame(void) const
{
    return ((m_set_State[0] & 0xc00000) != 0);
}

inline
bool CHsp_Base::CanGetHit_frame(void) const
{
    return IsSetHit_frame();
}

inline
void CHsp_Base::ResetHit_frame(void)
{
    m_Hit_frame = 0;
    m_set_State[0] &= ~0xc00000;
}

inline
CHsp_Base::THit_frame CHsp_Base::GetHit_frame(void) const
{
    if (!CanGetHit_frame()) {
        ThrowUnassigned(11);
    }
    return m_Hit_frame;
}

inline
void CHsp_Base::SetHit_frame(CHsp_Base::THit_frame value)
{
    m_Hit_frame = value;
    m_set_State[0] |= 0xc00000;
}

inline
CHsp_Base::THit_frame& CHsp_Base::SetHit_frame(void)
{
#ifdef _DEBUG
    if (!IsSetHit_frame()) {
        memset(&m_Hit_frame,UnassignedByte(),sizeof(m_Hit_frame));
    }
#endif
    m_set_State[0] |= 0x400000;
    return m_Hit_frame;
}

inline
bool CHsp_Base::IsSetIdentity(void) const
{
    return ((m_set_State[0] & 0x3000000) != 0);
}

inline
bool CHsp_Base::CanGetIdentity(void) const
{
    return IsSetIdentity();
}

inline
void CHsp_Base::ResetIdentity(void)
{
    m_Identity = 0;
    m_set_State[0] &= ~0x3000000;
}

inline
CHsp_Base::TIdentity CHsp_Base::GetIdentity(void) const
{
    if (!CanGetIdentity()) {
        ThrowUnassigned(12);
    }
    return m_Identity;
}

inline
void CHsp_Base::SetIdentity(CHsp_Base::TIdentity value)
{
    m_Identity = value;
    m_set_State[0] |= 0x3000000;
}

inline
CHsp_Base::TIdentity& CHsp_Base::SetIdentity(void)
{
#ifdef _DEBUG
    if (!IsSetIdentity()) {
        memset(&m_Identity,UnassignedByte(),sizeof(m_Identity));
    }
#endif
    m_set_State[0] |= 0x1000000;
    return m_Identity;
}

inline
bool CHsp_Base::IsSetPositive(void) const
{
    return ((m_set_State[0] & 0xc000000) != 0);
}

inline
bool CHsp_Base::CanGetPositive(void) const
{
    return IsSetPositive();
}

inline
void CHsp_Base::ResetPositive(void)
{
    m_Positive = 0;
    m_set_State[0] &= ~0xc000000;
}

inline
CHsp_Base::TPositive CHsp_Base::GetPositive(void) const
{
    if (!CanGetPositive()) {
        ThrowUnassigned(13);
    }
    return m_Positive;
}

inline
void CHsp_Base::SetPositive(CHsp_Base::TPositive value)
{
    m_Positive = value;
    m_set_State[0] |= 0xc000000;
}

inline
CHsp_Base::TPositive& CHsp_Base::SetPositive(void)
{
#ifdef _DEBUG
    if (!IsSetPositive()) {
        memset(&m_Positive,UnassignedByte(),sizeof(m_Positive));
    }
#endif
    m_set_State[0] |= 0x4000000;
    return m_Positive;
}

inline
bool CHsp_Base::IsSetGaps(void) const
{
    return ((m_set_State[0] & 0x30000000) != 0);
}

inline
bool CHsp_Base::CanGetGaps(void) const
{
    return IsSetGaps();
}

inline
void CHsp_Base::ResetGaps(void)
{
    m_Gaps = 0;
    m_set_State[0] &= ~0x30000000;
}

inline
CHsp_Base::TGaps CHsp_Base::GetGaps(void) const
{
    if (!CanGetGaps()) {
        ThrowUnassigned(14);
    }
    return m_Gaps;
}

inline
void CHsp_Base::SetGaps(CHsp_Base::TGaps value)
{
    m_Gaps = value;
    m_set_State[0] |= 0x30000000;
}

inline
CHsp_Base::TGaps& CHsp_Base::SetGaps(void)
{
#ifdef _DEBUG
    if (!IsSetGaps()) {
        memset(&m_Gaps,UnassignedByte(),sizeof(m_Gaps));
    }
#endif
    m_set_State[0] |= 0x10000000;
    return m_Gaps;
}

inline
bool CHsp_Base::IsSetAlign_len(void) const
{
    return ((m_set_State[0] & 0xc0000000) != 0);
}

inline
bool CHsp_Base::CanGetAlign_len(void) const
{
    return IsSetAlign_len();
}

inline
void CHsp_Base::ResetAlign_len(void)
{
    m_Align_len = 0;
    m_set_State[0] &= ~0xc0000000;
}

inline
CHsp_Base::TAlign_len CHsp_Base::GetAlign_len(void) const
{
    if (!CanGetAlign_len()) {
        ThrowUnassigned(15);
    }
    return m_Align_len;
}

inline
void CHsp_Base::SetAlign_len(CHsp_Base::TAlign_len value)
{
    m_Align_len = value;
    m_set_State[0] |= 0xc0000000;
}

inline
CHsp_Base::TAlign_len& CHsp_Base::SetAlign_len(void)
{
#ifdef _DEBUG
    if (!IsSetAlign_len()) {
        memset(&m_Align_len,UnassignedByte(),sizeof(m_Align_len));
    }
#endif
    m_set_State[0] |= 0x40000000;
    return m_Align_len;
}

inline
bool CHsp_Base::IsSetDensity(void) const
{
    return ((m_set_State[1] & 0x3) != 0);
}

inline
bool CHsp_Base::CanGetDensity(void) const
{
    return IsSetDensity();
}

inline
void CHsp_Base::ResetDensity(void)
{
    m_Density = 0;
    m_set_State[1] &= ~0x3;
}

inline
CHsp_Base::TDensity CHsp_Base::GetDensity(void) const
{
    if (!CanGetDensity()) {
        ThrowUnassigned(16);
    }
    return m_Density;
}

inline
void CHsp_Base::SetDensity(CHsp_Base::TDensity value)
{
    m_Density = value;
    m_set_State[1] |= 0x3;
}

inline
CHsp_Base::TDensity& CHsp_Base::SetDensity(void)
{
#ifdef _DEBUG
    if (!IsSetDensity()) {
        memset(&m_Density,UnassignedByte(),sizeof(m_Density));
    }
#endif
    m_set_State[1] |= 0x1;
    return m_Density;
}

inline
bool CHsp_Base::IsSetQseq(void) const
{
    return ((m_set_State[1] & 0xc) != 0);
}

inline
bool CHsp_Base::CanGetQseq(void) const
{
    return IsSetQseq();
}

inline
const CHsp_Base::TQseq& CHsp_Base::GetQseq(void) const
{
    if (!CanGetQseq()) {
        ThrowUnassigned(17);
    }
    return m_Qseq;
}

inline
void CHsp_Base::SetQseq(const CHsp_Base::TQseq& value)
{
    m_Qseq = value;
    m_set_State[1] |= 0xc;
}

inline
CHsp_Base::TQseq& CHsp_Base::SetQseq(void)
{
#ifdef _DEBUG
    if (!IsSetQseq()) {
        m_Qseq = UnassignedString();
    }
#endif
    m_set_State[1] |= 0x4;
    return m_Qseq;
}

inline
bool CHsp_Base::IsSetHseq(void) const
{
    return ((m_set_State[1] & 0x30) != 0);
}

inline
bool CHsp_Base::CanGetHseq(void) const
{
    return IsSetHseq();
}

inline
const CHsp_Base::THseq& CHsp_Base::GetHseq(void) const
{
    if (!CanGetHseq()) {
        ThrowUnassigned(18);
    }
    return m_Hseq;
}

inline
void CHsp_Base::SetHseq(const CHsp_Base::THseq& value)
{
    m_Hseq = value;
    m_set_State[1] |= 0x30;
}

inline
CHsp_Base::THseq& CHsp_Base::SetHseq(void)
{
#ifdef _DEBUG
    if (!IsSetHseq()) {
        m_Hseq = UnassignedString();
    }
#endif
    m_set_State[1] |= 0x10;
    return m_Hseq;
}

inline
bool CHsp_Base::IsSetMidline(void) const
{
    return ((m_set_State[1] & 0xc0) != 0);
}

inline
bool CHsp_Base::CanGetMidline(void) const
{
    return IsSetMidline();
}

inline
const CHsp_Base::TMidline& CHsp_Base::GetMidline(void) const
{
    if (!CanGetMidline()) {
        ThrowUnassigned(19);
    }
    return m_Midline;
}

inline
void CHsp_Base::SetMidline(const CHsp_Base::TMidline& value)
{
    m_Midline = value;
    m_set_State[1] |= 0xc0;
}

inline
CHsp_Base::TMidline& CHsp_Base::SetMidline(void)
{
#ifdef _DEBUG
    if (!IsSetMidline()) {
        m_Midline = UnassignedString();
    }
#endif
    m_set_State[1] |= 0x40;
    return m_Midline;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLASTXML_HSP_BASE_HPP
