#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/FeiticoProtetor.hpp"

FeiticoProtetor::FeiticoProtetor(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string FeiticoProtetor::getDescricaoArma() 
{
    return this->descricaoArma;
}

int FeiticoProtetor::getResistencia() 
{
    return this->resistencia;
}