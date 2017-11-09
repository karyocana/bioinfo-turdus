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

/// @file Spliced_seg_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqalign.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQALIGN_SPLICED_SEG_BASE_HPP
#define OBJECTS_SEQALIGN_SPLICED_SEG_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <objects/seqloc/Na_strand.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CSeq_id;
class CSpliced_exon;
class CSpliced_seg_modifier;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQALIGN_EXPORT CSpliced_seg_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSpliced_seg_Base(void);
    // destructor
    virtual ~CSpliced_seg_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EProduct_type {
        eProduct_type_transcript = 0,
        eProduct_type_protein    = 1
    };
    
    /// Access to EProduct_type's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EProduct_type)(void);
    
    // types
    typedef CSeq_id TProduct_id;
    typedef CSeq_id TGenomic_id;
    typedef ENa_strand TProduct_strand;
    typedef ENa_strand TGenomic_strand;
    typedef EProduct_type TProduct_type;
    typedef list< CRef< CSpliced_exon > > TExons;
    typedef TSeqPos TPoly_a;
    typedef TSeqPos TProduct_length;
    typedef list< CRef< CSpliced_seg_modifier > > TModifiers;

    // getters
    // setters

    /// product is either protein or transcript (cDNA)
    /// optional
    /// typedef CSeq_id TProduct_id
    ///  Check whether the Product_id data member has been assigned a value.
    bool IsSetProduct_id(void) const;
    /// Check whether it is safe or not to call GetProduct_id method.
    bool CanGetProduct_id(void) const;
    void ResetProduct_id(void);
    const TProduct_id& GetProduct_id(void) const;
    void SetProduct_id(TProduct_id& value);
    TProduct_id& SetProduct_id(void);

    /// optional
    /// typedef CSeq_id TGenomic_id
    ///  Check whether the Genomic_id data member has been assigned a value.
    bool IsSetGenomic_id(void) const;
    /// Check whether it is safe or not to call GetGenomic_id method.
    bool CanGetGenomic_id(void) const;
    void ResetGenomic_id(void);
    const TGenomic_id& GetGenomic_id(void) const;
    void SetGenomic_id(TGenomic_id& value);
    TGenomic_id& SetGenomic_id(void);

    /// should be 'plus' or 'minus'
    /// optional
    /// typedef ENa_strand TProduct_strand
    ///  Check whether the Product_strand data member has been assigned a value.
    bool IsSetProduct_strand(void) const;
    /// Check whether it is safe or not to call GetProduct_strand method.
    bool CanGetProduct_strand(void) const;
    void ResetProduct_strand(void);
    TProduct_strand GetProduct_strand(void) const;
    void SetProduct_strand(TProduct_strand value);
    TProduct_strand& SetProduct_strand(void);

    /// optional
    /// typedef ENa_strand TGenomic_strand
    ///  Check whether the Genomic_strand data member has been assigned a value.
    bool IsSetGenomic_strand(void) const;
    /// Check whether it is safe or not to call GetGenomic_strand method.
    bool CanGetGenomic_strand(void) const;
    void ResetGenomic_strand(void);
    TGenomic_strand GetGenomic_strand(void) const;
    void SetGenomic_strand(TGenomic_strand value);
    TGenomic_strand& SetGenomic_strand(void);

    /// mandatory
    /// typedef EProduct_type TProduct_type
    ///  Check whether the Product_type data member has been assigned a value.
    bool IsSetProduct_type(void) const;
    /// Check whether it is safe or not to call GetProduct_type method.
    bool CanGetProduct_type(void) const;
    void ResetProduct_type(void);
    TProduct_type GetProduct_type(void) const;
    void SetProduct_type(TProduct_type value);
    TProduct_type& SetProduct_type(void);

    /// set of segments involved
    /// each segment corresponds to one exon
    /// exons are always in biological order
    /// mandatory
    /// typedef list< CRef< CSpliced_exon > > TExons
    ///  Check whether the Exons data member has been assigned a value.
    bool IsSetExons(void) const;
    /// Check whether it is safe or not to call GetExons method.
    bool CanGetExons(void) const;
    void ResetExons(void);
    const TExons& GetExons(void) const;
    TExons& SetExons(void);

    /// start of poly(A) tail on the transcript
    /// For sense transcripts:
    ///   aligned product positions < poly-a <= product-length
    ///   poly-a == product-length indicates inferred poly(A) tail at transcript's end
    /// For antisense transcripts:
    ///   -1 <= poly-a < aligned product positions
    ///   poly-a == -1 indicates inferred poly(A) tail at transcript's start
    /// optional
    /// typedef TSeqPos TPoly_a
    ///  Check whether the Poly_a data member has been assigned a value.
    bool IsSetPoly_a(void) const;
    /// Check whether it is safe or not to call GetPoly_a method.
    bool CanGetPoly_a(void) const;
    void ResetPoly_a(void);
    TPoly_a GetPoly_a(void) const;
    void SetPoly_a(TPoly_a value);
    TPoly_a& SetPoly_a(void);

    /// length of the product, in bases/residues
    /// from this (or from poly-a if present), a 3' unaligned length can be extracted
    /// optional
    /// typedef TSeqPos TProduct_length
    ///  Check whether the Product_length data member has been assigned a value.
    bool IsSetProduct_length(void) const;
    /// Check whether it is safe or not to call GetProduct_length method.
    bool CanGetProduct_length(void) const;
    void ResetProduct_length(void);
    TProduct_length GetProduct_length(void) const;
    void SetProduct_length(TProduct_length value);
    TProduct_length& SetProduct_length(void);

    /// alignment descriptors / modifiers
    /// this provides us a set for extension
    /// optional
    /// typedef list< CRef< CSpliced_seg_modifier > > TModifiers
    ///  Check whether the Modifiers data member has been assigned a value.
    bool IsSetModifiers(void) const;
    /// Check whether it is safe or not to call GetModifiers method.
    bool CanGetModifiers(void) const;
    void ResetModifiers(void);
    const TModifiers& GetModifiers(void) const;
    TModifiers& SetModifiers(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSpliced_seg_Base(const CSpliced_seg_Base&);
    CSpliced_seg_Base& operator=(const CSpliced_seg_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TProduct_id > m_Product_id;
    CRef< TGenomic_id > m_Genomic_id;
    ENa_strand m_Product_strand;
    ENa_strand m_Genomic_strand;
    EProduct_type m_Product_type;
    list< CRef< CSpliced_exon > > m_Exons;
    TSeqPos m_Poly_a;
    TSeqPos m_Product_length;
    list< CRef< CSpliced_seg_modifier > > m_Modifiers;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSpliced_seg_Base::IsSetProduct_id(void) const
{
    return m_Product_id.NotEmpty();
}

inline
bool CSpliced_seg_Base::CanGetProduct_id(void) const
{
    return IsSetProduct_id();
}

inline
const CSpliced_seg_Base::TProduct_id& CSpliced_seg_Base::GetProduct_id(void) const
{
    if (!CanGetProduct_id()) {
        ThrowUnassigned(0);
    }
    return (*m_Product_id);
}

inline
bool CSpliced_seg_Base::IsSetGenomic_id(void) const
{
    return m_Genomic_id.NotEmpty();
}

inline
bool CSpliced_seg_Base::CanGetGenomic_id(void) const
{
    return IsSetGenomic_id();
}

inline
const CSpliced_seg_Base::TGenomic_id& CSpliced_seg_Base::GetGenomic_id(void) const
{
    if (!CanGetGenomic_id()) {
        ThrowUnassigned(1);
    }
    return (*m_Genomic_id);
}

inline
bool CSpliced_seg_Base::IsSetProduct_strand(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CSpliced_seg_Base::CanGetProduct_strand(void) const
{
    return IsSetProduct_strand();
}

inline
void CSpliced_seg_Base::ResetProduct_strand(void)
{
    m_Product_strand = (ncbi::objects::ENa_strand)(0);
    m_set_State[0] &= ~0x30;
}

inline
CSpliced_seg_Base::TProduct_strand CSpliced_seg_Base::GetProduct_strand(void) const
{
    if (!CanGetProduct_strand()) {
        ThrowUnassigned(2);
    }
    return m_Product_strand;
}

inline
void CSpliced_seg_Base::SetProduct_strand(CSpliced_seg_Base::TProduct_strand value)
{
    m_Product_strand = value;
    m_set_State[0] |= 0x30;
}

inline
CSpliced_seg_Base::TProduct_strand& CSpliced_seg_Base::SetProduct_strand(void)
{
#ifdef _DEBUG
    if (!IsSetProduct_strand()) {
        memset(&m_Product_strand,UnassignedByte(),sizeof(m_Product_strand));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Product_strand;
}

inline
bool CSpliced_seg_Base::IsSetGenomic_strand(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CSpliced_seg_Base::CanGetGenomic_strand(void) const
{
    return IsSetGenomic_strand();
}

inline
void CSpliced_seg_Base::ResetGenomic_strand(void)
{
    m_Genomic_strand = (ncbi::objects::ENa_strand)(0);
    m_set_State[0] &= ~0xc0;
}

inline
CSpliced_seg_Base::TGenomic_strand CSpliced_seg_Base::GetGenomic_strand(void) const
{
    if (!CanGetGenomic_strand()) {
        ThrowUnassigned(3);
    }
    return m_Genomic_strand;
}

inline
void CSpliced_seg_Base::SetGenomic_strand(CSpliced_seg_Base::TGenomic_strand value)
{
    m_Genomic_strand = value;
    m_set_State[0] |= 0xc0;
}

inline
CSpliced_seg_Base::TGenomic_strand& CSpliced_seg_Base::SetGenomic_strand(void)
{
#ifdef _DEBUG
    if (!IsSetGenomic_strand()) {
        memset(&m_Genomic_strand,UnassignedByte(),sizeof(m_Genomic_strand));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Genomic_strand;
}

inline
bool CSpliced_seg_Base::IsSetProduct_type(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CSpliced_seg_Base::CanGetProduct_type(void) const
{
    return IsSetProduct_type();
}

inline
void CSpliced_seg_Base::ResetProduct_type(void)
{
    m_Product_type = (EProduct_type)(0);
    m_set_State[0] &= ~0x300;
}

inline
CSpliced_seg_Base::TProduct_type CSpliced_seg_Base::GetProduct_type(void) const
{
    if (!CanGetProduct_type()) {
        ThrowUnassigned(4);
    }
    return m_Product_type;
}

inline
void CSpliced_seg_Base::SetProduct_type(CSpliced_seg_Base::TProduct_type value)
{
    m_Product_type = value;
    m_set_State[0] |= 0x300;
}

inline
CSpliced_seg_Base::TProduct_type& CSpliced_seg_Base::SetProduct_type(void)
{
#ifdef _DEBUG
    if (!IsSetProduct_type()) {
        memset(&m_Product_type,UnassignedByte(),sizeof(m_Product_type));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Product_type;
}

inline
bool CSpliced_seg_Base::IsSetExons(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CSpliced_seg_Base::CanGetExons(void) const
{
    return true;
}

inline
const CSpliced_seg_Base::TExons& CSpliced_seg_Base::GetExons(void) const
{
    return m_Exons;
}

inline
CSpliced_seg_Base::TExons& CSpliced_seg_Base::SetExons(void)
{
    m_set_State[0] |= 0x400;
    return m_Exons;
}

inline
bool CSpliced_seg_Base::IsSetPoly_a(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CSpliced_seg_Base::CanGetPoly_a(void) const
{
    return IsSetPoly_a();
}

inline
void CSpliced_seg_Base::ResetPoly_a(void)
{
    m_Poly_a = 0;
    m_set_State[0] &= ~0x3000;
}

inline
CSpliced_seg_Base::TPoly_a CSpliced_seg_Base::GetPoly_a(void) const
{
    if (!CanGetPoly_a()) {
        ThrowUnassigned(6);
    }
    return m_Poly_a;
}

inline
void CSpliced_seg_Base::SetPoly_a(CSpliced_seg_Base::TPoly_a value)
{
    m_Poly_a = value;
    m_set_State[0] |= 0x3000;
}

inline
CSpliced_seg_Base::TPoly_a& CSpliced_seg_Base::SetPoly_a(void)
{
#ifdef _DEBUG
    if (!IsSetPoly_a()) {
        memset(&m_Poly_a,UnassignedByte(),sizeof(m_Poly_a));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Poly_a;
}

inline
bool CSpliced_seg_Base::IsSetProduct_length(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CSpliced_seg_Base::CanGetProduct_length(void) const
{
    return IsSetProduct_length();
}

inline
void CSpliced_seg_Base::ResetProduct_length(void)
{
    m_Product_length = 0;
    m_set_State[0] &= ~0xc000;
}

inline
CSpliced_seg_Base::TProduct_length CSpliced_seg_Base::GetProduct_length(void) const
{
    if (!CanGetProduct_length()) {
        ThrowUnassigned(7);
    }
    return m_Product_length;
}

inline
void CSpliced_seg_Base::SetProduct_length(CSpliced_seg_Base::TProduct_length value)
{
    m_Product_length = value;
    m_set_State[0] |= 0xc000;
}

inline
CSpliced_seg_Base::TProduct_length& CSpliced_seg_Base::SetProduct_length(void)
{
#ifdef _DEBUG
    if (!IsSetProduct_length()) {
        memset(&m_Product_length,UnassignedByte(),sizeof(m_Product_length));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Product_length;
}

inline
bool CSpliced_seg_Base::IsSetModifiers(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CSpliced_seg_Base::CanGetModifiers(void) const
{
    return true;
}

inline
const CSpliced_seg_Base::TModifiers& CSpliced_seg_Base::GetModifiers(void) const
{
    return m_Modifiers;
}

inline
CSpliced_seg_Base::TModifiers& CSpliced_seg_Base::SetModifiers(void)
{
    m_set_State[0] |= 0x10000;
    return m_Modifiers;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQALIGN_SPLICED_SEG_BASE_HPP
