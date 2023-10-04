algoritmo "conversão de temperaturas"
// Função :
// Autor :
// Data : 08/09/2023
// Seção de Declarações 
var
      temperatura                    : inteiro
      opcao                          : caracter
      farenheit, celcius             : real
inicio
// Entrada de dados - Valor da temperatura e escolha do tipo
       escreval ("CONVERSÃO DE TEMPERATURAS")
       escreval ("Informe a temperatura: ")
       leia (temperatura)
       escreval ("Escolha qual conversão:")
       escreval ("1 - para celcius")
       escreval ("2 - para farenhait")
       leia (opcao)
       
// processamento e saída - cálculo da conversão escolhida
       escolha (opcao)
              caso "1"
                   celcius <- (temperatura - 32) * 5 / 9
                   escreval ("A temperatura convertida para celcius é", celcius)
              caso "2"
                   farenheit <- (temperatura * 9 / 5) + 32
                   escreval ("A temperatura convertida para farenheit é", farenheit)
       fimescolha
fimalgoritmo
