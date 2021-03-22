#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <stdexcept>

using namespace std;

class Classe{
    private:
        inline static const string DEFAULT = "Apartamento";
        std::string classe;
        void validar(int tipo);
    public:
        Classe();
        Classe(int tipo);
        void setClasse(int tipo);
        std::string getClasse() const;

};

inline Classe::Classe(){
    classe = DEFAULT;
}

inline std::string Classe::getClasse() const{
    return classe;
}

class Descricao{
    private:
        inline static const string DEFAULT = "Lorem ipsum.";
        std::string descricao;
        void validar(string descricao);
    public:
        Descricao();
        Descricao(string descricao);
        void setDescricao(string descricao);
        std::string getDescricao() const;
};

inline Descricao::Descricao(string descricao){
    validar(descricao);
}

inline void Descricao::setDescricao(std::string descricao){
    validar(descricao);
}

inline Descricao::Descricao(){
    descricao = DEFAULT;
}

inline std::string Descricao::getDescricao() const{
    return descricao;
}

class Numero{
    private:
        static const int DEFAULT = 00;
        int valor;
        void validar(int valor);
    public:
        Numero();
        Numero(int valor);
        void setNumero(int valor);
        int getNumero() const;
};

inline Numero::Numero(int valor){
    validar(valor);
}

inline Numero::Numero(){
    valor = DEFAULT;
}

inline void Numero::setNumero(int valor){
    validar(valor);
}

inline int Numero::getNumero() const{
    return valor;
}

class Codigo{
    private:
        inline static const string DEFAULT = "A0A1A";
        std::string codigo;
        void validar(string codigo);
    public:
        Codigo();
        Codigo(string codigo);
        void setCodigo(string codigo);
        std::string getCodigo() const;
};

inline Codigo::Codigo(){
    codigo = DEFAULT;
}

inline Codigo::Codigo(string codigo){
    validar(codigo);
}

inline void Codigo::setCodigo(std::string codigo){
    validar(codigo);
}

inline std::string Codigo::getCodigo() const{
    return codigo;
}

class Endereco{
    private:
        inline static const string DEFAULT = "Endereço Padrão...";
        std::string endereco;
        void validar(string endereco);
    public:
        Endereco(string endereco);
        Endereco();
        void setEndereco(std::string endereco);
        std::string getEndereco() const;
};

inline Endereco::Endereco(){
    this -> endereco = DEFAULT;
}

inline void Endereco::setEndereco(std::string endereco){
    validar(endereco);
}

inline std::string Endereco::getEndereco() const{
    return endereco;
}

inline Endereco::Endereco(string endereco){
    validar(endereco);
}

class Data{
    private:
        inline static const string DEFAULT = "12-06-21";
        std::string data;
        void validar(string data);
    public:
        Data(string data);
        Data();
        void setData(std::string data);
        std::string getData() const;
};

inline Data::Data(){
    this -> data = DEFAULT;
}

inline Data::Data(string data){
    validar(data);
}

inline void Data::setData(std::string data){
    validar(data);
}

inline std::string Data::getData() const{
    return data;
}

class Moeda {
    private:
        static constexpr float DEFAULT = 0.00;
        static constexpr float LIMITE = 1000000.00;
        float valor;
        void validar(float valor);
    public:
        Moeda();
        Moeda(float);
        void setValor(float);
        float getValor();
};

inline Moeda::Moeda(){
    valor = DEFAULT;
}

inline float Moeda::getValor(){
    return valor;
};

class Nome {
    private:
        inline static const string DEFAULT = "Alan Turing.";
        static const int MINIMO = 5;
        static const int LIMITE = 25;
        std::string nome;
        void validar(string nome);
    public:
        Nome();
        Nome(string nome);
        void setNome(string nome);
        std::string getNome();
};

inline Nome::Nome(){
    nome = DEFAULT;
}

inline std::string Nome::getNome(){
    return nome;
}

class Email {
    private:
        inline static const string DEFAULT = "nome@dominio";
        static const int MAXIMO_NOME = 10;
        static const int MINIMO_NOME = 0;
        static const int MAXIMO_DOMINIO = 20;
        static const int MINIMO_DOMINIO = 0;
        std::string email;
        void validar(string email);
    public:
        Email();
        Email(string email);
        void setEmail(string email);
        std::string getEmail();
};

inline Email::Email(){
    email = DEFAULT;
}

inline std::string Email::getEmail(){
    return email;
}

class Senha {
    private:
        inline static const string DEFAULT = "Abc123";
        static const int numero_digitos = 6;
        std::string senha;
        void validar(string senha);
    public:
        Senha();
        Senha(string senha);
        void setSenha(string senha);
        std::string getSenha();
};

inline Senha::Senha(){
    senha = DEFAULT;
}

inline std::string Senha::getSenha(){
    return senha;
}

class Telefone {
    private:
        inline static const string DEFAULT = "(123)-456789123";
        static const int numero_digitos = 12;
        static const int numero_sinais = 3;
        std::string telefone;
        void validar(string telefone);
    public:
        Telefone();
        Telefone(string telefone);
        void setTelefone(string telefone);
        std::string getTelefone();
};

inline Telefone::Telefone(){
    telefone = DEFAULT;
}

inline std::string Telefone::getTelefone(){
    return telefone;
}

#endif // DOMINIO_H_INCLUDED
