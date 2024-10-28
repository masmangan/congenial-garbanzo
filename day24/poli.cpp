#include <iostream>
#include <vector>
#include <string>

class Animal
{
protected:
    std ::string name;

public:
    Animal(const std ::string &name) : name(name)
    {
        std::cout << "Criando um novo animal..." << std::endl;
    }
    virtual std ::string talk() const = 0; // Método virtual puro
    std ::string getName() const { return name; }
    virtual ~Animal() 
    {
        std::cout << "O animal (base) voltou para o Céu..." << std::endl;
    } 
};

class Cat : public Animal
{
public:
    Cat(const std ::string &name) : Animal(name) 
    {
        std::cout << "Criando um novo gato..." << std::endl;
    }
    std ::string talk() const override { return "miau"; }
    ~Cat() 
    {
        std::cout << "O gato voltou para o Céu..." << std::endl;
    }     
};

class Dog : public Animal
{
public:
    Dog(const std ::string &name) : Animal(name) 
    {
        std::cout << "Criando um novo cão..." << std::endl;
    }
    std ::string talk() const override { return "au -au"; }

    ~Dog() 
    {
        std::cout << "O cão voltou para o Céu..." << std::endl;
    } 
};

int main()
{
    std ::vector<Animal *> animals;
    animals.push_back(new Cat("Tom"));
    animals.push_back(new Dog("Spark"));
    for (Animal *animal : animals)
    {
        std ::cout << animal->getName()
                   << " says "
                   << animal->talk()
                   << std ::endl;
    }
    for (Animal *animal : animals)
    {
        delete animal; // Liberar memória
    }
    return 0;
}
