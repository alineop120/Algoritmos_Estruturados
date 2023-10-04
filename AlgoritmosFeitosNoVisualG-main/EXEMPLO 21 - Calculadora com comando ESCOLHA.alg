algoritmo "calculadora com comando ESCOLHA"
// Função :
// Autor :
// Data : 06/09/2023
// Seção de Declarações 
var
      resultado, num1, num2        : real
      operador                     : caracter
inicio
// Entrada de dados - solicitação dos dois números e do operador
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
      
// processamento - escolha e execução da operação em função do operador
      escolha (operador)
           caso "+"
                resultado <- num1 + num2
           caso "-"
                resultado <- num1 - num2
           caso "*"
                resultado <- num1 * num2
           caso "/"
                resultado <- num1 / num2
      fimescolha
      
      escreval ("O resultado é ", resultado)
fimalgoritmo
