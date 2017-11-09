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

/// @file Domain_parent_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'cdd.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_CDD_DOMAIN_PARENT_BASE_HPP
#define OBJECTS_CDD_DOMAIN_PARENT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CCdd_id;
class CSeq_annot;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// the Domain-parent records an evolutionary relationship which may not be
/// as simple as a classical parent-child relationship in a typical hierarchy,
/// i.e. where a CD is merely a specific subgroup ("child") of a more general
/// diverse alignment model ("parent"). A CD alignment model may be the result
/// of an ancient fusion event, combining two or more domains into a bigger unit
/// which has subsequently undergone a divergent evolutionary process similar to
/// what may have happened to a single "domain". A CD alignment model may 
/// also reflect the result of a deletion event, where a specific subgroup
/// lacks part of a (set of) domain(s), but where the part present is found to
/// be highly similar to a putative "parent", with some added evidence for
/// an actual deletion, like from the distribution of truncated copies in phylogenetic
/// lineages. Deletion events which affect different parts of a set of
/// duplicated domain architectures may be indistinguishable from actual
/// fission events, which means that we may want to represent the latter as
/// deletions after duplication and do not need a special case for fissions.
class NCBI_CDD_EXPORT CDomain_parent_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CDomain_parent_Base(void);
    // destructor
    virtual ~CDomain_parent_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EParent_type {
        eParent_type_classical   =   0,  ///< the classification of parent child relations
        eParent_type_fusion      =   1,
        eParent_type_deletion    =   2,
        eParent_type_permutation =   3,
        eParent_type_other       = 255
    };
    
    /// Access to EParent_type's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EParent_type)(void);
    
    // types
    typedef int TParent_type;
    typedef CCdd_id TParentid;
    typedef CSeq_annot TSeqannot;

    // getters
    // setters

    /// mandatory
    /// typedef int TParent_type
    ///  Check whether the Parent_type data member has been assigned a value.
    bool IsSetParent_type(void) const;
    /// Check whether it is safe or not to call GetParent_type method.
    bool CanGetParent_type(void) const;
    void ResetParent_type(void);
    TParent_type GetParent_type(void) const;
    void SetParent_type(TParent_type value);
    TParent_type& SetParent_type(void);

    /// identify the section parent by accession
    /// mandatory
    /// typedef CCdd_id TParentid
    ///  Check whether the Parentid data member has been assigned a value.
    bool IsSetParentid(void) const;
    /// Check whether it is safe or not to call GetParentid method.
    bool CanGetParentid(void) const;
    void ResetParentid(void);
    const TParentid& GetParentid(void) const;
    void SetParentid(TParentid& value);
    TParentid& SetParentid(void);

    /// contains the sequence alignment linking
    /// CD alignment models, should align the 
    /// masters/representatives of each CD
    /// optional
    /// typedef CSeq_annot TSeqannot
    ///  Check whether the Seqannot data member has been assigned a value.
    bool IsSetSeqannot(void) const;
    /// Check whether it is safe or not to call GetSeqannot method.
    bool CanGetSeqannot(void) const;
    void ResetSeqannot(void);
    const TSeqannot& GetSeqannot(void) const;
    void SetSeqannot(TSeqannot& value);
    TSeqannot& SetSeqannot(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CDomain_parent_Base(const CDomain_parent_Base&);
    CDomain_parent_Base& operator=(const CDomain_parent_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Parent_type;
    CRef< TParentid > m_Parentid;
    CRef< TSeqannot > m_Seqannot;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CDomain_parent_Base::IsSetParent_type(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CDomain_parent_Base::CanGetParent_type(void) const
{
    return IsSetParent_type();
}

inline
void CDomain_parent_Base::ResetParent_type(void)
{
    m_Parent_type = (EParent_type)(0);
    m_set_State[0] &= ~0x3;
}

inline
CDomain_parent_Base::TParent_type CDomain_parent_Base::GetParent_type(void) const
{
    if (!CanGetParent_type()) {
        ThrowUnassigned(0);
    }
    return m_Parent_type;
}

inline
void CDomain_parent_Base::SetParent_type(CDomain_parent_Base::TParent_type value)
{
    m_Parent_type = value;
    m_set_State[0] |= 0x3;
}

inline
CDomain_parent_Base::TParent_type& CDomain_parent_Base::SetParent_type(void)
{
#ifdef _DEBUG
    if (!IsSetParent_type()) {
        memset(&m_Parent_type,UnassignedByte(),sizeof(m_Parent_type));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Parent_type;
}

inline
bool CDomain_parent_Base::IsSetParentid(void) const
{
    return m_Parentid.NotEmpty();
}

inline
bool CDomain_parent_Base::CanGetParentid(void) const
{
    return true;
}

inline
const CDomain_parent_Base::TParentid& CDomain_parent_Base::GetParentid(void) const
{
    if ( !m_Parentid ) {
        const_cast<CDomain_parent_Base*>(this)->ResetParentid();
    }
    return (*m_Parentid);
}

inline
CDomain_parent_Base::TParentid& CDomain_parent_Base::SetParentid(void)
{
    if ( !m_Parentid ) {
        ResetParentid();
    }
    return (*m_Parentid);
}

inline
bool CDomain_parent_Base::IsSetSeqannot(void) const
{
    return m_Seqannot.NotEmpty();
}

inline
bool CDomain_parent_Base::CanGetSeqannot(void) const
{
    return IsSetSeqannot();
}

inline
const CDomain_parent_Base::TSeqannot& CDomain_parent_Base::GetSeqannot(void) const
{
    if (!CanGetSeqannot()) {
        ThrowUnassigned(2);
    }
    return (*m_Seqannot);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_CDD_DOMAIN_PARENT_BASE_HPP
