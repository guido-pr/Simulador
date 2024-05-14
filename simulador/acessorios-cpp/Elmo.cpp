#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Elmo.hpp"

Elmo::Elmo(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Elmo::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Elmo::getResistencia() 
{
    return this->resistencia;
}