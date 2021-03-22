#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "Dominio.h"
#include "Entidade.h"


class TUCodigo{
    private:

        inline const static std::string VALOR_VALIDO   = "AAA11";
        inline const static std::string VALOR_INVALIDO = "00000";

        Codigo *codigo;

        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();


    public:

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUClasse{
    private:

        static const int VALOR_VALIDO   = 2;
        static const int VALOR_INVALIDO = 4;
        inline const static std::string CLASSE_VALIDA1 = "Casa";
        inline const static std::string CLASSE_VALIDA2 = "Apartamento";
        inline const static std::string CLASSE_VALIDA3 = "Quarto";

        Classe *classe;

        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();


    public:

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUDescricao{
    private:

        inline const static std::string VALOR_VALIDO   = "Teste descrição.";
        inline const static std::string VALOR_INVALIDO = "Teste descrição";

        Descricao *descricao;

        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();


    public:

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUNumero{
    private:

        inline const static int VALOR_VALIDO   = 5;
        inline const static int VALOR_INVALIDO = 25;

        Numero *numero;

        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();


    public:

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUEndereco{
    private:

        inline const static std::string VALOR_VALIDO   = "Teste Endereço 22.";
        inline const static std::string VALOR_INVALIDO = "Teste";

        Endereco *endereco;

        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();


    public:

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUData{
    private:

        inline const static std::string VALOR_VALIDO   = "28-02-24";
        inline const static std::string VALOR_INVALIDO = "29-02-24";

        Data *data;

        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();


    public:

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUMoeda {

private:

    constexpr static float VALOR_VALIDO   = 125.56;
    constexpr static float VALOR_INVALIDO = 9000000.00;

    Moeda *token;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNome {

private:

    inline const static string VALOR_VALIDO   = "Alan Turing.";
    inline const static string VALOR_INVALIDO = "Feijao   Tropeiro.";

    Nome *token;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUEmail {

private:

    inline const static string VALOR_VALIDO   = "nome@dominio.com";
    inline const static string VALOR_INVALIDO = "nome@dominio..com";

    Email *token;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUSenha {

private:

    inline static const string VALOR_VALIDO = "Abc123";
    inline static const string VALOR_INVALIDO = "Acc123";

    Senha *token;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUTelefone {

private:

    inline static const string VALOR_VALIDO = "(123)-456789123";
    inline static const string VALOR_INVALIDO = "(000)-000000000";

    Telefone *token;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUImovel {

private:

    inline const static string VALOR_VALIDO_CODIGO   = "AAA11";
    inline const static string VALOR_VALIDO_DESCRICAO = "Uma descricao.";
    inline const static string VALOR_VALIDO_ENDERECO = "Um endereco.";
    static const int VALOR_VALIDO_CLASSE = 02;
    inline const static string VALOR_VALIDO_DATA_1 = "12-06-21";
    inline const static string VALOR_VALIDO_DATA_2 = "22-06-21";
    static const int VALOR_VALIDO_NUMERO = 02;
    inline const static string VALOR_VALIDO_CLASSE_STRING = "Casa";
    constexpr static float VALOR_VALIDO_MOEDA   = 125.56;

    Imovel *entidade;

    int estado;

    void setUp();
    void tearDown();
    void testarCenario();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUProposta {

private:

    inline const static string VALOR_VALIDO_CODIGO   = "AAA11";
    inline const static string VALOR_VALIDO_DATA_1 = "12-06-21";
    inline const static string VALOR_VALIDO_DATA_2 = "22-06-21";
    static const int VALOR_VALIDO_NUMERO = 00;
    constexpr static float VALOR_VALIDO_MOEDA   = 125.56;

    Proposta *entidade;

    int estado;

    void setUp();
    void tearDown();
    void testarCenario();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUUsuario {

private:

    inline const static string VALOR_VALIDO_NOME   = "Alan Turing.";
    inline const static string VALOR_VALIDO_EMAIL   = "nome@dominio.com";
    inline static const string VALOR_VALIDO_SENHA = "Abc123";
    inline static const string VALOR_VALIDO_TELEFONE = "(123)-456789123";

    Usuario *entidade;

    int estado;

    void setUp();
    void tearDown();
    void testarCenario();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif // TESTE_H_INCLUDED
