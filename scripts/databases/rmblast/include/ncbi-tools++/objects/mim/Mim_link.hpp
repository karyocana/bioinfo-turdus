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

/// @file Mim_link.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'mim.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Mim_link_.hpp


#ifndef OBJECTS_MIM_MIM_LINK_HPP
#define OBJECTS_MIM_MIM_LINK_HPP


// generated includes
#include <objects/mim/Mim_link_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_MIM_EXPORT CMim_link : public CMim_link_Base
{
    typedef CMim_link_Base Tparent;
public:
    // constructor
    CMim_link(void);
    // destructor
    ~CMim_link(void);

private:
    // Prohibit copy constructor and assignment operator
    CMim_link(const CMim_link& value);
    CMim_link& operator=(const CMim_link& value);

};

/////////////////// CMim_link inline methods

// constructor
inline
CMim_link::CMim_link(void)
{
}


/////////////////// end of CMim_link inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MIM_MIM_LINK_HPP
/* Original file checksum: lines: 86, chars: 2373, CRC32: 2ae2248a */
