#include <gubg/Version.hpp>

namespace gubg {

    std::string Version::to_str(const std::string &prefix) const
    {
        return prefix + std::to_string(major) + "." + std::to_string(minor) + "." + std::to_string(patch);
    }

} // namespace gubg
