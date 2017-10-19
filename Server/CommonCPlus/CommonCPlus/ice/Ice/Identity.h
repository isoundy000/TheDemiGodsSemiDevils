// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `Identity.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice_Identity_h__
#define __Ice_Identity_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Ice
{

struct Identity
{
    ::std::string name;
    ::std::string category;

    bool operator==(const Identity& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(name != __rhs.name)
        {
            return false;
        }
        if(category != __rhs.category)
        {
            return false;
        }
        return true;
    }

    bool operator<(const Identity& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(name < __rhs.name)
        {
            return true;
        }
        else if(__rhs.name < name)
        {
            return false;
        }
        if(category < __rhs.category)
        {
            return true;
        }
        else if(__rhs.category < category)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const Identity& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Identity& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Identity& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Identity& __rhs) const
    {
        return !operator<(__rhs);
    }
};

typedef ::std::map< ::Ice::Identity, ::Ice::ObjectPtr> ObjectDict;

typedef ::std::vector< ::Ice::Identity> IdentitySeq;

}

namespace Ice
{
template<>
struct StreamableTraits< ::Ice::Identity>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::Ice::Identity, S>
{
    static void write(S* __os, const ::Ice::Identity& v)
    {
        __os->write(v.name);
        __os->write(v.category);
    }
};

template<class S>
struct StreamReader< ::Ice::Identity, S>
{
    static void read(S* __is, ::Ice::Identity& v)
    {
        __is->read(v.name);
        __is->read(v.category);
    }
};

#if defined(ICE_HAS_DECLSPEC_IMPORT_EXPORT) && !defined(ICE_API_EXPORTS)
template struct ICE_API StreamWriter< ::Ice::Identity, ::IceInternal::BasicStream>;
template struct ICE_API StreamReader< ::Ice::Identity, ::IceInternal::BasicStream>;
#endif

}

#endif
