algoritmo "dobro maior ou menor que 30"
// Função :
// Autor :
// Data : 18/08/2023
// Seção de Declarações 
var
       num, dobro              :real
inicio
// Seção de Comandos 
      escreval ("Digite um valor: ")
      leia (num)
      
      dobro <- num * 2
      
      se (dobro > 30) entao
         escreval ("O dobro do valor informado é maior que 30")
      senao
         se (dobro < 30) entao
            escreval ("O dobro do valor informado é menor que 30")
         senao
            escreval ("O dobro do valor informado é igual a 30")
         fimse
      fimse
fimalgoritmo
