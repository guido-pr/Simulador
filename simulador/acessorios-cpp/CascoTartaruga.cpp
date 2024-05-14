#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/CascoTartaruga.hpp"

CascoTartaruga::CascoTartaruga(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string CascoTartaruga::getDescricaoArma() 
{
    return this->descricaoArma;
}

int CascoTartaruga::getResistencia() 
{
    return this->resistencia;
}