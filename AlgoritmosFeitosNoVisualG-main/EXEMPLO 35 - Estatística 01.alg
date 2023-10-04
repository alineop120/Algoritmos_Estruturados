algoritmo "Estatística 01 - laços simples"
// Função :
// Autor :
// Data : 26/09/2023
// Seção de Declarações 
var
   nome, genero                                                   : caracter
   idade, contador, cont_maior_idade, cont_menor_idade            : inteiro
   cont_homens, cont_mulheres                                     : inteiro
   percentual_mulheres, percentual_homens                         : real
inicio
// Seção de Comandos 
   contador <- 0
   cont_maior_idade <- 0
   cont_menor_idade <- 0
   cont_homens <- 0
   cont_mulheres <- 0

// Entrada de Dados
   repita
       escreval("Informe o nome: ")
       leia(nome)
       
       repita
             escreval("Informe o genero (M ou F): ")
             leia(genero)
       ate (genero = "M") ou (genero = "F")
             
       escreval("Informe a idade: ")
       leia(idade)
       
// Processamento de Dados - Contar mmulheres e homens
       se (genero = "M") entao
          cont_homens <- cont_homens + 1
       senao
          se (genero = "F") entao
             cont_mulheres <- cont_mulheres + 1
          fimse
       fimse
       
// Processamento de Dados - Contar maiores e menores de idade
       se (idade >= 18) entao
          cont_maior_idade <- cont_maior_idade + 1
       senao
          cont_menor_idade <- cont_menor_idade + 1
       fimse
       contador <- contador + 1
   ate (contador = 5)

// Processamento de Dados - Percentual
   percentual_mulheres <- (cont_mulheres * 100 / 10) / 5
   percentual_homens <- (cont_homens * 100 / 10) / 5

// Saída de Dados
   escreval("Maiores de idade: ", cont_maior_idade)
   escreval("Menores de idade: ", cont_menor_idade)
   escreval("Percentual de mulheres: ", percentual_mulheres)
   escreval("Percentual de homens: ", percentual_homens)

fimalgoritmo
