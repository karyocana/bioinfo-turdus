#ifndef OBJISTRXML__HPP
#define OBJISTRXML__HPP

/*  $Id: objistrxml.hpp 459636 2015-02-20 14:45:49Z gouriano $
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
* Author: Eugene Vasilchenko
*
* File Description:
*   Decode input data in XML format
*/

#include <corelib/ncbistd.hpp>
#include <serial/objistr.hpp>
#include <corelib/tempstr.hpp>


/** @addtogroup ObjStreamSupport
 *
 * @{
 */


BEGIN_NCBI_SCOPE

class CItemsInfo;

/////////////////////////////////////////////////////////////////////////////
///
/// CObjectIStreamXml --
///
/// Decode input data in XML format
class NCBI_XSERIAL_EXPORT CObjectIStreamXml : public CObjectIStream
{
public:
    CObjectIStreamXml(void);
    ~CObjectIStreamXml(void);

    /// Constructor.
    ///
    /// @param in
    ///   input stream    
    /// @param deleteIn
    ///   When eTakeOwnership, the input stream will be deleted automatically
    ///   when the reader is deleted
    CObjectIStreamXml(CNcbiIstream& in, EOwnership deleteIn);

    /// Check if there is still some meaningful data that can be read;
    /// this function will skip white spaces and comments
    ///
    /// @return
    ///   TRUE if there is no more data
    virtual bool EndOfData(void);

    /// Get current stream position as string.
    /// Useful for diagnostic and information messages.
    ///
    /// @return
    ///   string
    virtual string GetPosition(void) const;

    /// Get XML character encoding
    ///
    /// @return
    ///   Encoding
    EEncoding GetEncoding(void) const;

    /// Set default encoding of 'string' objects
    /// If XML data encoding is different, string will be converted to
    /// this encoding
    ///
    /// @param enc
    ///   Encoding
    void SetDefaultStringEncoding(EEncoding enc);

    /// Get default encoding of 'string' objects
    ///
    /// @return
    ///   Encoding
    EEncoding GetDefaultStringEncoding(void) const;

    /// Set up scope prefixes handling.
    /// Historically, using scope prefixes is the default for C++ data objects
    /// generated by ASN.1 specification.
    /// For objects generated by DTD, the default is NOT using prefixes.
    ///    
    /// @param set
    ///   When TRUE, the stream omits 'scope prefixes'.
    void SetEnforcedStdXml(bool set = true);

    /// Get scope prefixes handling parameter.
    ///
    /// @return
    ///   TRUE (omit scope prefixes) or FALSE
    bool GetEnforcedStdXml(void) {
        return m_StdXml ? false :
            (GetFlags()&fFlagEnforcedStdXml) != 0;
    }

    virtual string ReadFileHeader(void);
    virtual string PeekNextTypeName(void);
    void FindFileHeader(bool find_XMLDecl = true);

protected:
    EPointerType ReadPointerType(void);
    TObjectIndex ReadObjectPointer(void);
    string ReadOtherPointer(void);

    virtual bool ReadBool(void);
    virtual char ReadChar(void);
    virtual Int4 ReadInt4(void);
    virtual Uint4 ReadUint4(void);
    virtual Int8 ReadInt8(void);
    virtual Uint8 ReadUint8(void);
    virtual double ReadDouble(void);
    virtual void ReadNull(void);
    virtual void ReadString(string& s,EStringType type = eStringTypeVisible);
    virtual char* ReadCString(void);
    TEnumValueType ReadEnum(const CEnumeratedTypeValues& values);

    bool ReadAnyContent(const string& ns_prefix, string& value);
    virtual void ReadAnyContentObject(CAnyContentObject& obj);
    bool SkipAnyContent(void);
    virtual void SkipAnyContentObject(void);

    virtual void ReadBitString(CBitString& obj);
    virtual void SkipBitString(void);

    virtual void StartDelayBuffer(void);
    virtual CRef<CByteSource> EndDelayBuffer(void);

    virtual void SkipBool(void);
    virtual void SkipChar(void);
    virtual void SkipSNumber(void);
    virtual void SkipUNumber(void);
    virtual void SkipFNumber(void);
    virtual void SkipString(EStringType type = eStringTypeVisible);
    virtual void SkipNull(void);
    virtual void SkipByteBlock(void);

    CTempString SkipTagName(CTempString tag, const char* s, size_t length);
    CTempString SkipTagName(CTempString tag, const char* s);
    CTempString SkipTagName(CTempString tag, const string& s);
    CTempString SkipStackTagName(CTempString tag, size_t level);
    CTempString SkipStackTagName(CTempString tag, size_t level, char c);

    bool HasAttlist(void);
    bool NextIsTag(void);
    bool NextTagIsClosing(void);
    bool ThisTagIsSelfClosed(void);
    void OpenTag(const string& e);
    void CloseTag(const string& e);
    void OpenStackTag(size_t level);
    void CloseStackTag(size_t level);
    void OpenTag(TTypeInfo type);
    void CloseTag(TTypeInfo type);
    void OpenTagIfNamed(TTypeInfo type);
    void CloseTagIfNamed(TTypeInfo type);
    bool WillHaveName(TTypeInfo elementType);

    TMemberIndex HasAnyContent(const CClassTypeInfoBase* classType, TMemberIndex pos = kInvalidMember);
    bool HasMoreElements(TTypeInfo elementType);
    TMemberIndex FindDeep(TTypeInfo type, const CTempString& name) const;
#ifdef VIRTUAL_MID_LEVEL_IO
    virtual void ReadNamedType(TTypeInfo namedTypeInfo,
                               TTypeInfo typeInfo,
                               TObjectPtr object);

    virtual void ReadContainer(const CContainerTypeInfo* containerType,
                               TObjectPtr containerPtr);
    virtual void SkipContainer(const CContainerTypeInfo* containerType);
#endif
    void ReadContainerContents(const CContainerTypeInfo* containerType,
                               TObjectPtr containerPtr);
    void SkipContainerContents(const CContainerTypeInfo* containerType);

    // low level I/O
    virtual void BeginNamedType(TTypeInfo namedTypeInfo);
    virtual void EndNamedType(void);

    virtual void BeginContainer(const CContainerTypeInfo* containerType);
    virtual void EndContainer(void);
    virtual bool BeginContainerElement(TTypeInfo elementType);
    virtual void EndContainerElement(void);
    void BeginArrayElement(TTypeInfo elementType);
    void EndArrayElement(void);

    void CheckStdXml(const CClassTypeInfoBase* classType);
    TTypeInfo GetRealTypeInfo(TTypeInfo typeInfo);
    ETypeFamily GetRealTypeFamily(TTypeInfo typeInfo);
    TTypeInfo GetContainerElementTypeInfo(TTypeInfo typeInfo);
    ETypeFamily GetContainerElementTypeFamily(TTypeInfo typeInfo);

    virtual void BeginClass(const CClassTypeInfo* classInfo);
    virtual void EndClass(void);
    virtual TMemberIndex BeginClassMember(const CClassTypeInfo* classType);
    virtual TMemberIndex BeginClassMember(const CClassTypeInfo* classType,
                                          TMemberIndex pos);
    void EndClassMember(void);
    virtual void UndoClassMember(void);

    virtual void BeginChoice(const CChoiceTypeInfo* choiceType);
    virtual void EndChoice(void);
    virtual TMemberIndex BeginChoiceVariant(const CChoiceTypeInfo* choiceType);
    virtual void EndChoiceVariant(void);

    void BeginBytes(ByteBlock& );
    int GetHexChar(void);
    int GetBase64Char(void);
    size_t ReadBytes(ByteBlock& block, char* dst, size_t length);

    void BeginChars(CharBlock& );
    size_t ReadChars(CharBlock& block, char* dst, size_t length);

    virtual void ResetState(void);

private:
    bool OutsideTag(void) const;
    bool InsideTag(void) const;
    bool InsideOpeningTag(void) const;
    bool InsideClosingTag(void) const;
    bool SelfClosedTag(void) const;

    void Found_lt(void);
    void Back_lt(void);
    void Found_lt_slash(void);
    void Found_gt(void);
    void Found_slash_gt(void);

    void EndSelfClosedTag(void);

    void EndTag(void);
    void EndOpeningTag(void);
    bool EndOpeningTagSelfClosed(void); // true if '/>' found, false if '>'
    void EndClosingTag(void);
    char BeginOpeningTag(void);
    char BeginClosingTag(void);
    void BeginData(void);
    bool UseSpecialCaseRead(void);

    int ReadEscapedChar(char endingChar, bool* encoded=0);
    int ReadEncodedChar(char endingChar, EStringType type = eStringTypeVisible, bool* encoded=0);
    TUnicodeSymbol ReadUtf8Char(char ch);
    bool ReadCDSection(string& s);
    void ReadTagData(string& s, EStringType type = eStringTypeVisible);

    CTempString ReadName(char c);
    CTempString RejectedName(void);
    CTempString ReadAttributeName(void);
    void ReadAttributeValue(string& value, bool skipClosing=false);
    char ReadUndefinedAttributes(void);

    void SkipAttributeValue(char c);
    void SkipQDecl(void);

    char SkipWS(void);
    char SkipWSAndComments(void);

    void UnexpectedMember(const CTempString& id, const CItemsInfo& items);
    bool x_IsStdXml(void) {return m_StdXml || (GetFlags()&fFlagEnforcedStdXml);}
    void x_EndTypeNamespace(void);

    template<typename Type>
    Type x_UseMemberDefault(void);
    int x_VerifyChar(int);
    int x_ReadEncodedChar(char endingChar, EStringType type, bool* encoded);

    enum ETagState {
        eTagOutside,
        eTagInsideOpening,
        eTagInsideClosing,
        eTagSelfClosed
    };
    ETagState m_TagState;
    string m_LastTag;
    string m_RejectedTag;
    bool m_Attlist;
    bool m_StdXml;
    bool m_Doctype_found;
    bool m_IsNil;
    string m_LastPrimitive;
    EEncoding m_Encoding;
    EEncoding m_StringEncoding;
    string m_CurrNsPrefix;
    map<string,string> m_NsPrefixToName;
    map<string,string> m_NsNameToPrefix;
    CStringUTF8 m_Utf8Buf;
    CStringUTF8::const_iterator m_Utf8Pos;
    bool m_SkipNextTag;
};


/* @} */


#include <serial/impl/objistrxml.inl>

END_NCBI_SCOPE

#endif  /* OBJISTRXML__HPP */
