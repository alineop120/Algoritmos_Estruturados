algoritmo "triângulo"
// Função :
// Autor :
// Data : 30/08/2023
// Seção de Declarações 
var
      l1, l2, l3        : real
inicio
// Seção de Comandos 
   escreval ("Informe o 1º lado: ")
   leia (l1)
   escreval ("Informe o 2º lado: ")
   leia (l2)
   escreval ("Informe o 3º lado: ")
   leia (l3)
   se ( (l1 + l2 >= l3) e (l1 + l3 >= l2) e (l2 + l3 >= l1) ) entao
       escreval ("Os valores informados formam um triângulo")
       se ( (l1 = l2) e (l1 = l3) ) entao
             escreval ("Triângulo Equilátero")
       senao
             se ((l1 = l2) ou (l1 = l3) ou (l2 = l3)) entao
                 escreval ("Triângulo isósceles")
             senao
                 escreval ("Triângulo escaleno")
             fimse
       fimse
   senao
       escreval ("Os valores informados não formam um triângulo")
   fimse
fimalgoritmo
