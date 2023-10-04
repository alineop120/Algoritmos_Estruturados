algoritmo "média da idade de 10 pessoas"
// Função :
// Autor :
// Data : 19/09/2023
// Seção de Declarações
var
   media_idades                : real
   cont, idade, soma_idades     : inteiro
   nome                         : caracter
inicio
// Seção de Comandos
    soma_idades <- 0
    cont <- 1
    enquanto (cont <= 10) faca

         escreval ("Entre com o", cont, "º nome:")
         leia (nome)
         escreval ("Entre com a", cont, "ª idade:")
         leia (idade)

         soma_idades <- soma_idades + idade

         cont <- cont + 1
    fimenquanto

    media_idades <- soma_idades / 10

    escreval ("A média final é: ", media_idades)
fimalgoritmo
