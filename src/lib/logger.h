enum class LogLevel
{
    Debug,
    Info,
    Warning,
    Error,
    Fatal
};

std::ostream& operator<<(std::ostream& os, LogLevel level);