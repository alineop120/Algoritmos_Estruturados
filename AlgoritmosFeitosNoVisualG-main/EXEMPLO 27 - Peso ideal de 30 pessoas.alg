algoritmo "peso ideal de 30 pessoas"
// Função :
// Autor :
// Data : 23/08/2023
// Seção de Declarações 
var
    altura, peso_ideal        : real
    sexo                      : caracter
inicio
   // entrada de dados
   cont <- 1
   enquanto (cont <= 30) faca
   
         escreval ("Informe a sua altura: ")
         leia (altura)
         escreval ("Informe seu sexo (M para masculino ou F para feminino)")
         leia (sexo)

         // processamento de dados
         se (sexo = "M") entao
              peso_ideal <- 72.1 * altura - 58
         senao
              peso_ideal <- 62.1 * altura - 44.7
         fimse

         // saída de dados
         escreval ("Seu peso ideal é ", peso_ideal)
      
         cont <- cont + 1
   fimenquanto
   
fimalgoritmo
