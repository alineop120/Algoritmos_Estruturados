algoritmo "aprovado ou reprovado"
// Função :
// Autor :
// Data : 23/08/2023
// Seção de Declarações 
var
      n1, n2, n3, media        : real
      faltas                   : inteiro
inicio
   escreval ("Nota 1: ")
   leia (n1)
   escreval ("Nota 2: ")
   leia (n2)
   escreval ("Nota 3: ")
   leia (n3)
   escreval ("Total de faltas: ")
   leia (faltas)
   
   se (faltas > 10) entao
        escreval ("O aluno está reprovado por faltas")
   senao
        media <- (n1 + n2 * 2 + n3 * 2) / 5
        se (media >= 6) entao
             escreval ("O aluno está aprovado")
        senão
             escreval ("O aluno está reprovado por média inferior a 6")
        fimse
   fimse
fimalgoritmo
