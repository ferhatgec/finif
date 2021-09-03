// MIT License
//
// Copyright (c) 2021 Ferhat Geçdoğan All Rights Reserved.
// Distributed under the terms of the MIT License.
//


#ifndef FINIF_FINIF_HELPERS_HPP
#define FINIF_FINIF_HELPERS_HPP

#include "finif.hpp"
#include <sstream>
#include <vector>

namespace {
    std::vector<std::string> split(const std::string data, char delim) noexcept {
        std::istringstream stream(data);
        std::vector<std::string> val;

        for(std::string temp; std::getline(stream, temp, delim);
            val.push_back(temp))
            ;

        return val;
    }
}

#endif // FINIF_FINIF_HELPERS_HPP
