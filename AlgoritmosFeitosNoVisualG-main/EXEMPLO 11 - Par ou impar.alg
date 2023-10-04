algoritmo "par ou impar"
// Função :
// Autor :
// Data : 23/08/2023
// Seção de Declarações 
var
       num, resto              : inteiro
inicio
// Seção de Comandos 

   // entrada de dados - digitar um número
   escreval ("Informe um valor: ")
   leia (num)
   
   //processamento - obtenção do resto
   resto <- num % 2
   
   //processamento e saída - em função do resto, dizer se é par ou impar
   se (resto = 0) entao
        escreval ("O número informado é par")
   senao
        escreval ("O número informado é impar")
   fimse
fimalgoritmo
