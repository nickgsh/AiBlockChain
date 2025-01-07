#pragma once

#include <mw/exceptions/AIBCException.h>
#include <mw/util/StringUtil.h>

#define ThrowFile(msg) throw FileException(msg, __FUNCTION__)
#define ThrowFile_F(msg, ...) throw FileException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class FileException : public AIBCException
{
public:
    FileException(const std::string& message, const std::string& function)
        : AIBCException("FileException", message, function)
    {

    }
};