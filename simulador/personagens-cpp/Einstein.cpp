#include "../personagens-hpp/Einstein.hpp"

Einstein::Einstein(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Einstein::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Einstein::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Einstein::pegarDescricao() 
{
    return "Penso 99 vezes, eis que paro de pensar, a verdade me eh revelada";
}