algoritmo "somatório de 30 números"
// Função :
// Autor :
// Data : 19/09/2023
// Seção de Declarações 
var
   num, soma_total      : real
   contador             : inteiro
inicio
// Seção de Comandos 
   soma_total <- 0
   contador <- 1
   enquanto (contador <= 30) faca
   
         escreval ("Digite um número: ")
         leia (num)
         soma_total <- num + soma_total
         
         contador <- contador + 1
   fimenquanto

   escreval ("A soma total é ", soma_total)
fimalgoritmo
