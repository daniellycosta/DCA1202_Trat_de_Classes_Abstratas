# DCA1202_Trat_de_Classes_Abstratas
Segundo projeto da 2ª unidade da disciplina de Programação Avançada

2. Projeto 2 - Tratamento de classes abstratas
Seu projeto deverá ser capaz de tratar classes abstratas para manipulação de figuras geométricas simples, realizando operações de desenho em uma matriz de pontos.

2.1. Etapa 1 - Criação da classe concreta Screen
A classe Screen deverá prover suporte para desenhar pontos em uma tela virtual. Essa tela deverá ser implementada em uma matriz alocada dinamicamente conforme tamanho a ser determinado pelo usuário.

A classe Screen deverá ter o protótipo mostrado na Listagem Classe Screen e deverá ter seus métodos implementados conforme sugerem os comentários que os precedem.

Listagem 1. Classe Screen
class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  // construtor da classe
  Screen(int nlin, int ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  void setPixel(int x, int y);

  // limpa a tela
  void clear();

  // muda o caractere de desenho
  void setBrush(char brush);

  // envia a tela para um stream de saida
  friend ostream& operator<<(ostream &os, Screen &t);
};
2.2. Etapa 2 - Criação da classe abstrata FiguraGeometrica
Crie uma classe abstrata FiguraGeometrica para representar objetos primitivos genéricos, e preveja para esta classe pelo menos duas características:

Uma função virtual pura draw(Screen &t) que instrua o objeto a se desenhar em um objeto do tipo Screen. Essa função deverá ser implementada nas subclasses da classe FiguraGeometrica.

2.3. Etapa 3 - Criação da classe concreta Reta
Crie uma classe Reta derivada de FiguraGeometrica. Uma reta deverá ser especificada conforme a posição de dois pontos fornecidos.

O método draw(Screen &t) deverá ser implementado.

2.4. Etapa 4 - Criação da classe concreta Retangulo
Crie uma classe Retangulo derivada de FiguraGeometrica. Um retângulo deverá ser especificado conforme a posição do canto superior esquerdo, bem como largura e altura em pixels.

O método draw(Screen &t) deverá ser implementado.

2.5. Etapa 5 - Criação da classe concreta Circulo
Crie uma classe Circulo derivada de FiguraGeometrica. Um círculo deverá ser especificado conforme a posição do centro, seu raio e se este deverá ser preenchido ou apenas o contorno será desenhado.

O método draw(Screen &t) deverá ser implementado.

2.6. Etapa 6 - Armazenamento de figuras
Prepare um recurso para ler figuras gravadas em um arquivo e desenhá-las conforme as instruções presentes. O arquivo poderá conter os seguintes códigos, que deverão ser interpretados pela sua aplicação e utilizar a classe abstrata FiguraGeometrica para tratar e gerar o desenho conforme os códigos utilizados na tabela Códigos das figuras geométricas.

Tabela 1. Códigos das figuras geométricas
Código	                                                                 Função
dim largura altura                                              define as dimensões do desenho.
Ex: dim 60 20

brush x                                                        muda o caractere de desenho para x. Se não possuir argumento, o caractere espaço será utilizado.
Ex: brush @
Ex: brush

line x0 y0 x1 y1                                               define uma linha do ponto (x0,y0)(x0,y0) para (x1,y1)(x1,y1).
Ex: line 5 5 10 8

rectangle x0 y0 largura altura                                define um retângulo com ponto superior esquerdo em (x0,y0)(x0,y0) e dimensões largura x altura.
Ex: rectangle 5 6 10 20

circle x0 y0 raio fillmode                                    define um círculo com centro no ponto (x0,y0)(x0,y0), raio especificado e sua forma de preenchimento. Se fillmode maior que zero, o círculo será totalmente preenchido. Caso contrário, apenas o contorno será desenhado
Ex: circle 10 10 5 1 (circulo preenchido)
Ex: circle 10 10 5 0 (apenas contorno do círculo)

2.7. Etapa 7 - Teste das funcionalidades implementadas
Crie uma figura e um programa-exemplo para testar as implementações que você realizou.

Toda a figura poderá ser armazenada em um array de ponteiros para FiguraGeometrica.

Faça utilização exaustiva das classes da biblioteca padrão de gabaritos. As classes vector, string e stringstream, bem como seus respetivos iterators poderão ser amplamente utilizados para realizar a implementação das funcionalidades.

Crie uma figura e represente-a em um arquivo utilizando os códigos fornecidos. Use uma combinação adequada de classes para converter sua figura em uma matriz de pontos em código ASCII. A matriz deverá ser salva em outro arquivo usando um dos métodos da classe Screen.
