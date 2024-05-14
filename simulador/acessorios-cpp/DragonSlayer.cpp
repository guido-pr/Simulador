#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/DragonSlayer.hpp"

DragonSlayer::DragonSlayer(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int DragonSlayer::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string DragonSlayer::gerarRuidoAtaque()
{
    return "Planck planck";
}
