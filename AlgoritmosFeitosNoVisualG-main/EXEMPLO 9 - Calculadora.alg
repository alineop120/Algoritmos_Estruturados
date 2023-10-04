algoritmo "calculadora"
// Função :
// Autor :
// Data : 23/08/2023
// Seção de Declarações 
var
      num1, num2, resultado        : real
      operador                     : caracter
inicio
// Seção de Comandos 
   escreval ("Digite um número: ")
   leia (num1)
   escreval ("Digite outro número: ")
   leia (num2)

   escreval ("Escolha um operador: ")
   escreval ("+ para SOMA")
   escreval ("- para SUBTRAÇÃO")
   escreval ("* para MULTIPLICAÇÃO")
   escreval ("/ para DIVISÃO")
   leia (operador)
   
   se (operador = "+") entao
        resultado <- num1 + num2
   senao
        se (operador = "-") entao
             resultado <- num1 - num2
        senao
             se (operador = "*") entao
                  resultado <- num1 * num2
             senao
                  resultado <- num1 / num2
             fimse
        fimse
   fimse
   
   escreval ("O resultado é ", resultado)
fimalgoritmo
