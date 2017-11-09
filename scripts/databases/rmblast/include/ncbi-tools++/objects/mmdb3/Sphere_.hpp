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

/// @file Sphere_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB3_SPHERE_BASE_HPP
#define OBJECTS_MMDB3_SPHERE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CModel_space_point;
class CRealValue;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Geometrical primitives are used in the definition of region motifs, and 
/// also non-atomic coordinates.  Spheres, cones, cylinders and bricks are 
/// defined by a few points in the model space.
class NCBI_MMDB3_EXPORT CSphere_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSphere_Base(void);
    // destructor
    virtual ~CSphere_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CModel_space_point TCenter;
    typedef CRealValue TRadius;

    // getters
    // setters

    /// mandatory
    /// typedef CModel_space_point TCenter
    ///  Check whether the Center data member has been assigned a value.
    bool IsSetCenter(void) const;
    /// Check whether it is safe or not to call GetCenter method.
    bool CanGetCenter(void) const;
    void ResetCenter(void);
    const TCenter& GetCenter(void) const;
    void SetCenter(TCenter& value);
    TCenter& SetCenter(void);

    /// mandatory
    /// typedef CRealValue TRadius
    ///  Check whether the Radius data member has been assigned a value.
    bool IsSetRadius(void) const;
    /// Check whether it is safe or not to call GetRadius method.
    bool CanGetRadius(void) const;
    void ResetRadius(void);
    const TRadius& GetRadius(void) const;
    void SetRadius(TRadius& value);
    TRadius& SetRadius(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSphere_Base(const CSphere_Base&);
    CSphere_Base& operator=(const CSphere_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TCenter > m_Center;
    CRef< TRadius > m_Radius;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSphere_Base::IsSetCenter(void) const
{
    return m_Center.NotEmpty();
}

inline
bool CSphere_Base::CanGetCenter(void) const
{
    return true;
}

inline
const CSphere_Base::TCenter& CSphere_Base::GetCenter(void) const
{
    if ( !m_Center ) {
        const_cast<CSphere_Base*>(this)->ResetCenter();
    }
    return (*m_Center);
}

inline
CSphere_Base::TCenter& CSphere_Base::SetCenter(void)
{
    if ( !m_Center ) {
        ResetCenter();
    }
    return (*m_Center);
}

inline
bool CSphere_Base::IsSetRadius(void) const
{
    return m_Radius.NotEmpty();
}

inline
bool CSphere_Base::CanGetRadius(void) const
{
    return true;
}

inline
const CSphere_Base::TRadius& CSphere_Base::GetRadius(void) const
{
    if ( !m_Radius ) {
        const_cast<CSphere_Base*>(this)->ResetRadius();
    }
    return (*m_Radius);
}

inline
CSphere_Base::TRadius& CSphere_Base::SetRadius(void)
{
    if ( !m_Radius ) {
        ResetRadius();
    }
    return (*m_Radius);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_SPHERE_BASE_HPP
