#ifndef SOFTWAREDEVELOPER_H
#define SOFTWAREDEVELOPER_H

#include <string>

class SoftwareDeveloper {
public:
    std::string name;
    int coding, managing, testing;

    // Construtor padrão
    SoftwareDeveloper() : name("Sem Nome"), coding(0), managing(0), testing(0) {}

    // Construtor parametrizado
    SoftwareDeveloper(std::string name, int coding, int managing, int testing)
        : name(name), coding(coding), managing(managing), testing(testing) {}
};

#endif // SOFTWAREDEVELOPER_H