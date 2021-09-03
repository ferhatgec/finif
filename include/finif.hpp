// MIT License
//
// Copyright (c) 2021 Ferhat Geçdoğan All Rights Reserved.
// Distributed under the terms of the MIT License.
//

#ifndef FINIF_FINIF_HPP
#define FINIF_FINIF_HPP

#include <iostream>
#include <string>
#include "../libs/inif/include/inif.hpp"

class finif {
    std::string file_data;
    inif init;
public:
    finif (std::string const filename);
    ~finif()= default;

    std::string get(std::string argument) noexcept;
    std::string extract(std::string data) noexcept;
};

#endif // FINIF_FINIF_HPP