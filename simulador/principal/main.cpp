#include <iostream>
#include <string>

//Acessórios ataque
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Marreta.hpp"
#include "../acessorios-hpp/DragonSlayer.hpp"
#include "../acessorios-hpp/Frigideira.hpp"
#include "../acessorios-hpp/Katana.hpp"
#include "../acessorios-hpp/Pena.hpp"

//Acessórios defesa
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/MantoInvisivel.hpp"
#include "../acessorios-hpp/CascoTartaruga.hpp"
#include "../acessorios-hpp/Elmo.hpp"
#include "../acessorios-hpp/Peitoral.hpp"
#include "../acessorios-hpp/FeiticoProtetor.hpp"

//Personagens
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chapolim.hpp"
#include "../personagens-hpp/ChicoBento.hpp"
#include "../personagens-hpp/Einstein.hpp"
#include "../personagens-hpp/IsaacNewton.hpp"
#include "../personagens-hpp/Minion.hpp"

//Simulador
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    //Armas de ataque
    ArmaAtaque* arma1 = new Rosa("Super Rosa Amarela",0,60);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,70);
    ArmaAtaque* arma3 = new Marreta("Marreta bionica",0,90);
    ArmaAtaque* arma4 = new DragonSlayer("Dragon Slayer",0,100);
    ArmaAtaque* arma5 = new Frigideira("Frigideira de chumbo",0,200);
    ArmaAtaque* arma6 = new Katana("Katana samurai",0,150);
    ArmaAtaque* arma7 = new Pena("Pena de ganso",0,40);
    

    //Armas de defesa
    ArmaDefesa* escudo1 = new Escudo("Latao", 6);
    ArmaDefesa* escudo2 = new MantoInvisivel("Manto Invisivel", 7);
    ArmaDefesa* escudo3 = new CascoTartaruga("Casco da tartaruga", 8);
    ArmaDefesa* escudo4 = new Elmo("Elmo de ouro", 5);
    ArmaDefesa* escudo5 = new Peitoral("Peitoral de couro", 9);
    ArmaDefesa* escudo6 = new FeiticoProtetor("Abencoado pelos anjos", 11);


    //Personagens
    Personagem* p1 = new Chaves(1, "Chaves", 100, arma2, escudo4);
    Personagem* p3 = new Chapolim(1, "Chapolim", 100, arma3, escudo2);
    Personagem* p2 = new ChicoBento(2, "Chico Bento", 40, arma5, escudo5);
    Personagem* p4 = new Einstein(2, "Einstein", 100, arma6, escudo3);
    Personagem* p5 = new IsaacNewton(2, "Isaac Newton", 100, arma7, escudo6);
    Personagem* p6 = new Minion(2, "Minion", 100, arma4, escudo4);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}