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

/// @file Chem_graph_alignment.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Chem_graph_alignment_.hpp


#ifndef OBJECTS_MMDB3_CHEM_GRAPH_ALIGNMENT_HPP
#define OBJECTS_MMDB3_CHEM_GRAPH_ALIGNMENT_HPP


// generated includes
#include <objects/mmdb3/Chem_graph_alignment_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_MMDB3_EXPORT CChem_graph_alignment : public CChem_graph_alignment_Base
{
    typedef CChem_graph_alignment_Base Tparent;
public:
    // constructor
    CChem_graph_alignment(void);
    // destructor
    ~CChem_graph_alignment(void);

private:
    // Prohibit copy constructor and assignment operator
    CChem_graph_alignment(const CChem_graph_alignment& value);
    CChem_graph_alignment& operator=(const CChem_graph_alignment& value);

};

/////////////////// CChem_graph_alignment inline methods

// constructor
inline
CChem_graph_alignment::CChem_graph_alignment(void)
{
}


/////////////////// end of CChem_graph_alignment inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_CHEM_GRAPH_ALIGNMENT_HPP
/* Original file checksum: lines: 86, chars: 2613, CRC32: 487485c1 */
