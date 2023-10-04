algoritmo "equação do 2º Grau"
// Função :
// Autor :
// Data : 25/08/2023
// Seção de Declarações 
var
      a, b, c, delta, x1, x2           :real
inicio

   escreval ("Algoritmo da Equação do 2º")
   escreval ("Digite o valor de A:")
   leia (a)
   escreval ("Digite o valor de B:")
   leia (b)
   escreval ("Digite o valor de C:")
   leia (c)
   
   se (a <> 0) entao
        escreval ("Os valores informados formam uma equação do 2º")

        delta <- b^2 - 4*a*c
        se (delta > 0) entao
             x1 <- ( -(b^2) + RaizQ(delta) ) / 2* a
             x2 <- ( -(b^2) - RaizQ(delta) ) / 2* a
             escreval ("A equação possui duas raízes ", x1, " e ", x2)
        senao
             se (delta = 0) entao
                 x1 <- ( -(b^2) ) / 2* a
                 escreval ("A equação possui uma raíz ", x1)
             senao
                 escreval ("Não existem raízes reais possíveis")
             fimse
        fimse
   senao
        escreval ("Os valores informados nao formam uma equação do 2º")
   fimse
fimalgoritmo
