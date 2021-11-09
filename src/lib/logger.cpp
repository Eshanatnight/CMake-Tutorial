#include "logger.h"

std::ostream& operator<<(std::ostream& os, const LogLevel& level)
{
{
    switch (level)
    {
    case LogLevel::Debug:
        os << "[DEBUG]";
        break;
    case LogLevel::Info:
        os << "[INFO]";
        break;
    case LogLevel::Warning:
        os << "[WARNING]";
        break;
    case LogLevel::Error:
        os << "[ERROR]";
        break;
    case LogLevel::Fatal:
        os << "[FATAL]";
        break;
    }
    return os;
}