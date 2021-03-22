#include "Dominio.h"
#include <string.h>
#include <iostream>
#include <cstring>


Classe::Classe(int tipo){
    validar(tipo);
    if(tipo == 1) {
        classe = "Apartamento";
    }
    if(tipo == 2) {
        classe = "Casa";
    }
    if(tipo == 3) {
        classe = "Quarto";
    }
}

void Classe::setClasse(int tipo){
    validar(tipo);
    if(tipo == 1) {
        classe = "Apartamento";
    }
    if(tipo == 2) {
        classe = "Casa";
    }
    if(tipo == 3) {
        classe = "Quarto";
    }
}

void Classe::validar(int tipo){
    if(tipo < 1 || tipo > 3){
        this -> classe = "INVALIDO";
        throw invalid_argument("Argumento invalido.");
    }
}

void Descricao::validar(string descricao){
  int tamanho;
      tamanho = descricao.size();
      if (tamanho < 5 || tamanho > 30){
          throw invalid_argument("Argumento invalido.");
      } else if (descricao[tamanho - 1] == '.'){
           this -> descricao = descricao;
      } else {
          throw invalid_argument("Argumento invalido.");
      }
}

void Numero::validar(int valor){
    if (valor < 0 || valor > 20){
            throw invalid_argument("Argumento invalido.");
        }
        this -> valor = valor;
}

void Codigo::validar(string codigo){
    if(codigo.size() != 5){
            throw invalid_argument("Argumento invalido.");
        }else if (codigo == "00000"){
            throw invalid_argument("Argumento invalido.");
        } else {
            for(char x : codigo){
                if(isdigit(x) || isupper(x)){
                    this -> codigo = codigo;
                }else{
                    throw invalid_argument("Argumento invalido.");;
                }
            }
        }
}

void Endereco::validar(string endereco){
    int tamanho;
        tamanho = endereco.size();
        if(tamanho < 5 || tamanho > 20){
            throw invalid_argument("Argumento invalido.");
        }else{
            this -> endereco = endereco;
        }
}

void Data::validar(string data){
        int tamanho;
        std::string ano01, ano02;
        std::string mes01, mes02;
        std::string dia01, dia02;
        int ano, mes, dia;
        int bissexto; // 1- é bissexto; 0- não é bissexto;
        tamanho = data.size();
        if(tamanho != 8){
            throw invalid_argument("Argumento invalido.");
        }else if((data[2] == '-') && (data[5] == '-')){
            if(isdigit(data[0]) && isdigit(data[1]) && isdigit(data[3]) && isdigit(data[4]) && isdigit(data[6]) && isdigit(data[7])){
                ano01 = data[6];
                ano02 = data[7];
                ano01 += ano02;
                mes01 = data[3];
                mes02 = data[4];
                mes01 += mes02;
                dia01 = data[0];
                dia02 = data[1];
                dia01 += dia02;
                ano = 2000 + std::stoi(ano01);
                mes = std::stoi(mes01);
                dia = std::stoi(dia01);

            }else{
                throw invalid_argument("Argumento invalido.");
            }
            if(ano % 400 == 0){
                bissexto = 1;
            }else if((ano % 4 == 0) && (ano % 100 != 0)){
                bissexto = 1;
            } else {
                bissexto = 0;
            }
            if(ano < 2021 || ano > 2099){
                throw invalid_argument("Argumento invalido.");
            } else if (mes < 1 || mes > 12){
                throw invalid_argument("Argumento invalido.");
            } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                if(dia < 1 || dia > 31){
                    throw invalid_argument("Argumento invalido.");
                }else{
                    this -> data = data;
                }
            } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
                if(dia < 1 || dia > 30){
                    throw invalid_argument("Argumento invalido.");
                }else{
                    this -> data = data;
                }
            } else if ( mes == 2){
                if(bissexto == 1){
                    if(dia < 1 || dia > 29){
                        throw invalid_argument("Argumento invalido.");
                    }else{
                        this -> data = data;
                    }
                }else if(bissexto == 0){
                    if(dia <1 || dia > 28){
                        throw invalid_argument("Argumento invalido.");
                    }else{
                        this -> data = data;
                    }
                }
            } else {
                throw invalid_argument("Argumento invalido.");
            }
        }else{
            throw invalid_argument("Argumento invalido.");
        }
    }

Moeda::Moeda(float valor){
    validar(valor);
    this->valor = valor;
}

void Moeda::validar(float valor){
    if (valor > LIMITE || valor < DEFAULT)
        throw invalid_argument("Argumento invalido.");

    char valor_string[30];
    int aux = 0;
    const float limite_decimal = 2;

    sprintf(valor_string, "%.4f", valor);

    for (int n = strlen(valor_string); n >= 0; n--){
        if (isdigit(valor_string[n]) && valor_string[n] != '0')
            aux++;
        if (valor_string[n] == '.')
            break;
    }

    if (aux > limite_decimal)
        throw invalid_argument("Argumento invalido.");
}

void Moeda::setValor(float valor){
    (validar(valor));
    this->valor = valor;
}

Nome::Nome(string){
    validar(nome);
    this->nome = nome;
}

void Nome::validar(string nome){
    int tamanho;
    tamanho = nome.size();
    if (tamanho > LIMITE || tamanho < MINIMO)
        throw invalid_argument("Argumento invalido.");

    for (int i = 0; i <= tamanho - 1; i++){
        if (!isalpha(nome[i]) && !ispunct(nome[i]) && !isspace(nome[i]))
            throw invalid_argument("Argumanto invalido.");
        else if (ispunct(nome[i])){
            if (!isalpha(nome[i-1]))
                throw invalid_argument("Argumento invalido.");
        }
        else if (isspace(nome[i])){
            if (isspace(nome[i-1]) || !isupper(nome[i+1]))
                throw invalid_argument("Argumento invalido.");
        }
    }
}

void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}

Email::Email(string){
    validar(email);
    this->email = email;
}

void Email::validar(string email){
    int tamanho;
    int localizador = 0;
    char nome[30];
    char dominio[50];
    tamanho = email.size();

    for (int i = 0; i <= tamanho; i++){
        if (email[i] == '@')
            localizador++;
    }

    if (localizador != 1)
        throw invalid_argument("Argumento invalido.");

    int contador = 0;
    while ( email[contador] != '@'){
        nome[contador] = email[contador];
        contador++;
    }
    contador++;
    int contador_2 = 0;
    while ( email[contador] != '\0'){
        dominio[contador_2] = email[contador];
        contador++;
        contador_2++;
    }

    if (strlen(nome) > MAXIMO_NOME || strlen(nome) < MINIMO_NOME)
        throw invalid_argument("Argumento invalido.");
    else if (strlen(dominio) > MAXIMO_DOMINIO || strlen(dominio) < MINIMO_DOMINIO)
        throw invalid_argument("Argumento invalido.");

    for (int i = 0; i <= tamanho - 1; i++){
        if (!isalpha(email[i]) && !ispunct(email[i]) && !ispunct(email[i]))
            throw invalid_argument("Argumanto invalido.");
        else if (ispunct(email[i])){
            if (ispunct(email[i-1]))
                throw invalid_argument("Argumento invalido.");
        }
    }
}

void Email::setEmail(string email){
    validar(email);
    this->email = email;
}


Senha::Senha(string senha){
    validar(senha);
    this->senha = senha;
}

void Senha::validar(string senha){
    int tamanho;
    tamanho = senha.size();

    if (tamanho > numero_digitos || tamanho < numero_digitos)
        throw invalid_argument("Argumento invalido.");

    int num_maiusculas = 0;
    int num_minusculas = 0;
    int num_digitos = 0;
    for (int i = 0; i < tamanho; i++){
        if (!isalpha(senha[i]) && !isdigit(senha[i]))
            throw invalid_argument("Argumento invalido.");
        for (int j = 0; j <= i; j++){
            if (senha[i] == senha[j] && i != j)
                throw invalid_argument("Argumento invalido.");
        }
        if (isupper(senha[i]))
            num_maiusculas++;
        else if (islower(senha[i]))
            num_minusculas++;
        else if (isdigit(senha[i]))
            num_digitos++;
    }
    if (num_maiusculas == 0 || num_minusculas == 0 || num_digitos == 0)
        throw invalid_argument("Argumento invalido.");
}

void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
}

Telefone::Telefone(string telefone){
    validar(telefone);
    this->telefone = telefone;
}

void Telefone::validar(string telefone){
    int tamanho;
    int num_zeros = 0;
    tamanho = telefone.size();

    if (tamanho != (numero_digitos + numero_sinais))
        throw invalid_argument("Argumento invalido.");

    if (telefone[0] != '(' || telefone[4] != ')')
        throw invalid_argument("Argumento invalido.");

    if (telefone[5] != '-')
        throw invalid_argument("Argumento invalido.");

    for (int i = 1; i < 4; i++){
        if (!isdigit(telefone[i]))
            throw invalid_argument("Argumento invalido.");
        else if (telefone[i] == '0')
            num_zeros++;
    }

    for (int i = 6; i < (numero_digitos + numero_sinais); i++){
        if (!isdigit(telefone[i]))
            throw invalid_argument("Argumento invalido.");
        else if (telefone[i] == '0')
            num_zeros++;
    }

    if (num_zeros == numero_digitos)
        throw invalid_argument("Argumento invalido.");
}

void Telefone::setTelefone(string telefone){
    validar(telefone);
    this->telefone = telefone;
}

