#include "notebook.h"

///для демонстрации работы применяем методы setModel, setMemory и setCPU в конструкторахNotebook::Notebook()
{
    float numberbuffer = 0.0;
    std::string stringbuffer = "UNKNOWN";
    setModel( &numberbuffer );
    setMemory( &stringbuffer );
    setCPU( numberbuffer );
}
Notebook::Notebook( float const * const model )
{
    float numberbuffer = 0.0;
    std::string stringbuffer = "UNKNOWN";
    setModel( model );
    setMemory( &stringbuffer );
    setCPU( numberbuffer );
}
Notebook::Notebook( std::string const * const memory )
{
    float numberbuffer = 0.0;
    setModel( &numberbuffer );
    setMemory( memory );
    setCPU( numberbuffer );
}
Notebook::Notebook( int const CPU )
{
    float numberbuffer = 0.0;
    std::string stringbuffer = "UNKNOWN";
    setModel( &numberbuffer );
    setMemory( &stringbuffer );
    setCPU( CPU );
}
Notebook::Notebook( float const * const model, std::string const * const memory, int const CPU )
{
    setModel( model );
    setMemory( memory );
    setCPU( CPU );
}
Notebook::Notebook( Notebook const * const notebook )
{
    setModel( &(notebook->model) );
    setMemory( &(notebook->memory) );
    setCPU( notebook->CPU );
}


void Notebook::print() const
{
    std::cout << "\nNotebook model: " << model << "    Notebook memory: " << memory << "    Notebook CPU: " << CPU;
}


void Notebook::setModel( float const * const model )
{
    this->model = *model;
}
void Notebook::setMemory( std::string const * const memory )
{
    this->memory = *memory;
}
void Notebook::setCPU( int const CPU )
{
    this->CPU = CPU;
}
const float& Notebook::getModel() const         ///  возвращаем неизменяемое значение по ссылке
{
    return model;
}
const std::string& Notebook::getMemory() const   ///  возвращаем неизменяемое значение по ссылке
{
    return memory;
}
const int& Notebook::getCPU() const            ///  возвращаем неизменяемое значение по ссылке
{
    return CPU;
}
