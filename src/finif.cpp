// MIT License
//
// Copyright (c) 2021 Ferhat Geçdoğan All Rights Reserved.
// Distributed under the terms of the MIT License.
//

#include "../include/finif.hpp"
#include "../include/finif_helpers.hpp"
#include <fstream>
#include <memory>

finif::finif(const std::string filename) {
    std::ifstream data(filename);

    for(std::string temp; std::getline(data, temp); this->file_data.append(temp + "\n"))
        ; data.close();

    init.parse(this->file_data);
}

std::string finif::get(std::string const argument) noexcept {
    auto data = split(argument, ':');
    return (data.size() > 1) ? this->init.get(data[0], data[1]) : "\"\"";
}

int main(int argc, char** argv) noexcept {
    if(argc < 2) {
        std::cout << "finif - cli .ini parser\n";
        return 1;
    }

    std::unique_ptr<finif> init(new finif(std::string(argv[1])));

    for(auto i = 2; i < argc; i++) {
        std::cout << "\x1b[0;97m" << init->get(std::string(argv[i])) << "\x1b[0m\n";
    }
}