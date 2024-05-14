#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Pena.hpp"

Pena::Pena(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Pena::gerarForcaAtaque()
{
    return maxForca;
}

string Pena::gerarRuidoAtaque()
{
    return "Plan plan";
}
