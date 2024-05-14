#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/MantoInvisivel.hpp"

MantoInvisivel::MantoInvisivel(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string MantoInvisivel::getDescricaoArma() 
{
    return this->descricaoArma;
}

int MantoInvisivel::getResistencia() 
{
    return this->resistencia;
}