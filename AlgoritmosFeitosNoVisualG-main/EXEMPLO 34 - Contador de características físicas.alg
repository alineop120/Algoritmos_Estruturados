algoritmo "contador de características físicas"
// Função :
// Autor :
// Data : 20/09/2023
// Seção de Declarações 
var
      cont, cont_olho_verde, cont_olho_castanho, cont_olho_azul, cont_olho_preto           : inteiro
      cont_pardo, cont_preto, cont_branco                                                  : inteiro
      olhos, pele                                                                          : caracter
inicio
// Seção de Comandos

   cont_olho_verde <- 0
   cont_olho_castanho <- 0
   cont_olho_azul <- 0
   cont_olho_preto <- 0
   cont_preto <- 0
   cont_pardo <- 0
   cont_branco <- 0
   cont <- 1
   enquanto (cont <= 20) faca
        escreval ("Informe a cor dos olhos (V para verde, C para castanho, A para azul e P para preto)")
        leia (olhos)
        escreval ("Informe a cor da pele (1 para preta, 2 para branca e 3 para parda)")
        leia (pele)
        
       escolha (olhos)
           caso "V"
                cont_olho_verde <- cont_olho_verde + 1
           caso "C"
                cont_olho_castanho <- cont_olho_castanho + 1
           caso "A"
                cont_olho_azul <- cont_olho_azul + 1
           caso "P"
                cont_olho_preto <- cont_olho_preto + 1
      fimescolha
      
      escolha (pele)
           caso "1"
                cont_preto <- cont_preto + 1
           caso "2"
                cont_branco <- cont_branco + 1
           caso "3"
                cont_pardo <- cont_pardo + 1
      fimescolha
      
   fimenquanto
   
   escreval ("A quantidade de pessoas com os olhos azuis é ", cont_olho_azul)
   escreval ("A quantidade de pessoas com os olhos pretos é ", cont_olho_preto)
   escreval ("A quantidade de pessoas com os olhos castanhos é ", cont_olho_castanho)
   escreval ("A quantidade de pessoas com os olhos verdes é ", cont_olho_verde)
   escreval ("A quantidade de pessoas com a pele branca é ", cont_branco)
   escreval ("A quantidade de pessoas com a pele preta é ", cont_preto)
   escreval ("A quantidade de pessoas com a pele parda é ", cont_pardo)
fimalgoritmo
