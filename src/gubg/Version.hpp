#ifndef HEADER_gubg_Version_hpp_ALREAD_INCLUDED
#define HEADER_gubg_Version_hpp_ALREAD_INCLUDED

#include <string>

namespace gubg {

    struct Version
    {
        unsigned int major = 0;
        unsigned int minor = 0;
        unsigned int patch = 0;

        std::string to_str(const std::string &prefix) const;
        std::string to_str() const { return to_str(""); }
    };

} // namespace gubg

#endif
