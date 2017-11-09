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

/// @file Model_space_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB2_MODEL_SPACE_BASE_HPP
#define OBJECTS_MMDB2_MODEL_SPACE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CReference_frame;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// The model space defines measurement units and any external reference frame.
/// Coordinates refer to a right-handed orthogonal system defined on axes 
/// tagged x, y and z in the coordinate and feature definitions of a biostruc.
/// Coordinates from PDB-derived structures are reported without change, in
/// angstrom units.  The units of temperature and occupancy factors are not
/// defined explicitly in PDB, but are inferred from their value range.
class NCBI_MMDB2_EXPORT CModel_space_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CModel_space_Base(void);
    // destructor
    virtual ~CModel_space_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum ECoordinate_units {
        eCoordinate_units_angstroms  =   1,
        eCoordinate_units_nanometers =   2,
        eCoordinate_units_other      =   3,
        eCoordinate_units_unknown    = 255
    };
    
    /// Access to ECoordinate_units's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ECoordinate_units)(void);
    
    enum EThermal_factor_units {
        eThermal_factor_units_b       =   1,
        eThermal_factor_units_u       =   2,
        eThermal_factor_units_other   =   3,
        eThermal_factor_units_unknown = 255
    };
    
    /// Access to EThermal_factor_units's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EThermal_factor_units)(void);
    
    enum EOccupancy_factor_units {
        eOccupancy_factor_units_fractional =   1,
        eOccupancy_factor_units_electrons  =   2,
        eOccupancy_factor_units_other      =   3,
        eOccupancy_factor_units_unknown    = 255
    };
    
    /// Access to EOccupancy_factor_units's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EOccupancy_factor_units)(void);
    
    enum EDensity_units {
        eDensity_units_electrons_per_unit_volume =   1,
        eDensity_units_arbitrary_scale           =   2,
        eDensity_units_other                     =   3,
        eDensity_units_unknown                   = 255
    };
    
    /// Access to EDensity_units's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EDensity_units)(void);
    
    // types
    typedef ECoordinate_units TCoordinate_units;
    typedef EThermal_factor_units TThermal_factor_units;
    typedef EOccupancy_factor_units TOccupancy_factor_units;
    typedef EDensity_units TDensity_units;
    typedef CReference_frame TReference_frame;

    // getters
    // setters

    /// mandatory
    /// typedef ECoordinate_units TCoordinate_units
    ///  Check whether the Coordinate_units data member has been assigned a value.
    bool IsSetCoordinate_units(void) const;
    /// Check whether it is safe or not to call GetCoordinate_units method.
    bool CanGetCoordinate_units(void) const;
    void ResetCoordinate_units(void);
    TCoordinate_units GetCoordinate_units(void) const;
    void SetCoordinate_units(TCoordinate_units value);
    TCoordinate_units& SetCoordinate_units(void);

    /// optional
    /// typedef EThermal_factor_units TThermal_factor_units
    ///  Check whether the Thermal_factor_units data member has been assigned a value.
    bool IsSetThermal_factor_units(void) const;
    /// Check whether it is safe or not to call GetThermal_factor_units method.
    bool CanGetThermal_factor_units(void) const;
    void ResetThermal_factor_units(void);
    TThermal_factor_units GetThermal_factor_units(void) const;
    void SetThermal_factor_units(TThermal_factor_units value);
    TThermal_factor_units& SetThermal_factor_units(void);

    /// optional
    /// typedef EOccupancy_factor_units TOccupancy_factor_units
    ///  Check whether the Occupancy_factor_units data member has been assigned a value.
    bool IsSetOccupancy_factor_units(void) const;
    /// Check whether it is safe or not to call GetOccupancy_factor_units method.
    bool CanGetOccupancy_factor_units(void) const;
    void ResetOccupancy_factor_units(void);
    TOccupancy_factor_units GetOccupancy_factor_units(void) const;
    void SetOccupancy_factor_units(TOccupancy_factor_units value);
    TOccupancy_factor_units& SetOccupancy_factor_units(void);

    /// optional
    /// typedef EDensity_units TDensity_units
    ///  Check whether the Density_units data member has been assigned a value.
    bool IsSetDensity_units(void) const;
    /// Check whether it is safe or not to call GetDensity_units method.
    bool CanGetDensity_units(void) const;
    void ResetDensity_units(void);
    TDensity_units GetDensity_units(void) const;
    void SetDensity_units(TDensity_units value);
    TDensity_units& SetDensity_units(void);

    /// optional
    /// typedef CReference_frame TReference_frame
    ///  Check whether the Reference_frame data member has been assigned a value.
    bool IsSetReference_frame(void) const;
    /// Check whether it is safe or not to call GetReference_frame method.
    bool CanGetReference_frame(void) const;
    void ResetReference_frame(void);
    const TReference_frame& GetReference_frame(void) const;
    void SetReference_frame(TReference_frame& value);
    TReference_frame& SetReference_frame(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CModel_space_Base(const CModel_space_Base&);
    CModel_space_Base& operator=(const CModel_space_Base&);

    // data
    Uint4 m_set_State[1];
    ECoordinate_units m_Coordinate_units;
    EThermal_factor_units m_Thermal_factor_units;
    EOccupancy_factor_units m_Occupancy_factor_units;
    EDensity_units m_Density_units;
    CRef< TReference_frame > m_Reference_frame;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CModel_space_Base::IsSetCoordinate_units(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CModel_space_Base::CanGetCoordinate_units(void) const
{
    return IsSetCoordinate_units();
}

inline
void CModel_space_Base::ResetCoordinate_units(void)
{
    m_Coordinate_units = (ECoordinate_units)(0);
    m_set_State[0] &= ~0x3;
}

inline
CModel_space_Base::TCoordinate_units CModel_space_Base::GetCoordinate_units(void) const
{
    if (!CanGetCoordinate_units()) {
        ThrowUnassigned(0);
    }
    return m_Coordinate_units;
}

inline
void CModel_space_Base::SetCoordinate_units(CModel_space_Base::TCoordinate_units value)
{
    m_Coordinate_units = value;
    m_set_State[0] |= 0x3;
}

inline
CModel_space_Base::TCoordinate_units& CModel_space_Base::SetCoordinate_units(void)
{
#ifdef _DEBUG
    if (!IsSetCoordinate_units()) {
        memset(&m_Coordinate_units,UnassignedByte(),sizeof(m_Coordinate_units));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Coordinate_units;
}

inline
bool CModel_space_Base::IsSetThermal_factor_units(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CModel_space_Base::CanGetThermal_factor_units(void) const
{
    return IsSetThermal_factor_units();
}

inline
void CModel_space_Base::ResetThermal_factor_units(void)
{
    m_Thermal_factor_units = (EThermal_factor_units)(0);
    m_set_State[0] &= ~0xc;
}

inline
CModel_space_Base::TThermal_factor_units CModel_space_Base::GetThermal_factor_units(void) const
{
    if (!CanGetThermal_factor_units()) {
        ThrowUnassigned(1);
    }
    return m_Thermal_factor_units;
}

inline
void CModel_space_Base::SetThermal_factor_units(CModel_space_Base::TThermal_factor_units value)
{
    m_Thermal_factor_units = value;
    m_set_State[0] |= 0xc;
}

inline
CModel_space_Base::TThermal_factor_units& CModel_space_Base::SetThermal_factor_units(void)
{
#ifdef _DEBUG
    if (!IsSetThermal_factor_units()) {
        memset(&m_Thermal_factor_units,UnassignedByte(),sizeof(m_Thermal_factor_units));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Thermal_factor_units;
}

inline
bool CModel_space_Base::IsSetOccupancy_factor_units(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CModel_space_Base::CanGetOccupancy_factor_units(void) const
{
    return IsSetOccupancy_factor_units();
}

inline
void CModel_space_Base::ResetOccupancy_factor_units(void)
{
    m_Occupancy_factor_units = (EOccupancy_factor_units)(0);
    m_set_State[0] &= ~0x30;
}

inline
CModel_space_Base::TOccupancy_factor_units CModel_space_Base::GetOccupancy_factor_units(void) const
{
    if (!CanGetOccupancy_factor_units()) {
        ThrowUnassigned(2);
    }
    return m_Occupancy_factor_units;
}

inline
void CModel_space_Base::SetOccupancy_factor_units(CModel_space_Base::TOccupancy_factor_units value)
{
    m_Occupancy_factor_units = value;
    m_set_State[0] |= 0x30;
}

inline
CModel_space_Base::TOccupancy_factor_units& CModel_space_Base::SetOccupancy_factor_units(void)
{
#ifdef _DEBUG
    if (!IsSetOccupancy_factor_units()) {
        memset(&m_Occupancy_factor_units,UnassignedByte(),sizeof(m_Occupancy_factor_units));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Occupancy_factor_units;
}

inline
bool CModel_space_Base::IsSetDensity_units(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CModel_space_Base::CanGetDensity_units(void) const
{
    return IsSetDensity_units();
}

inline
void CModel_space_Base::ResetDensity_units(void)
{
    m_Density_units = (EDensity_units)(0);
    m_set_State[0] &= ~0xc0;
}

inline
CModel_space_Base::TDensity_units CModel_space_Base::GetDensity_units(void) const
{
    if (!CanGetDensity_units()) {
        ThrowUnassigned(3);
    }
    return m_Density_units;
}

inline
void CModel_space_Base::SetDensity_units(CModel_space_Base::TDensity_units value)
{
    m_Density_units = value;
    m_set_State[0] |= 0xc0;
}

inline
CModel_space_Base::TDensity_units& CModel_space_Base::SetDensity_units(void)
{
#ifdef _DEBUG
    if (!IsSetDensity_units()) {
        memset(&m_Density_units,UnassignedByte(),sizeof(m_Density_units));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Density_units;
}

inline
bool CModel_space_Base::IsSetReference_frame(void) const
{
    return m_Reference_frame.NotEmpty();
}

inline
bool CModel_space_Base::CanGetReference_frame(void) const
{
    return IsSetReference_frame();
}

inline
const CModel_space_Base::TReference_frame& CModel_space_Base::GetReference_frame(void) const
{
    if (!CanGetReference_frame()) {
        ThrowUnassigned(4);
    }
    return (*m_Reference_frame);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB2_MODEL_SPACE_BASE_HPP
