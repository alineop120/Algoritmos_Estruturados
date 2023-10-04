algoritmo "quantidade de homens e mulheres"
// Função :
// Autor :
// Data : 20/09/2023
// Seção de Declarações 
var
      cont, cont_homem, cont_mulher  :inteiro
      sexo              :caracter
inicio
// Seção de Comandos 
   cont <- 1
   cont_homem <- 0
   cont_mulher <- 0
   enquanto (cont <= 10) faca

         escreval ("Informe o sexo: ")
         leia (sexo)

         se (sexo = "m") entao
              cont_homem <- cont_homem + 1
         senao
              cont_mulher <- cont_mulher + 1
         fimse
         
         cont <- cont + 1
         
   fimenquanto
   
   escreval ("A quantidade de homens é ", cont_homem)
   escreval ("A quantidade de mulheres é ", cont_mulher)
fimalgoritmo
