algoritmo "Estatísticas 2"
// Função :
// Autor :
// Data : 27/09/2023
// Seção de Declarações 
var
    cont, idade, menor_idade, maior_idade                             :inteiro
    nome, sexo                                                        :caracter
    altura, peso, maior_altura, menor_altura, maior_peso, menor_peso  :real
inicio
// Seção de Comandos 
   maior_peso <- 0
   menor_peso <- 350
   maior_idade <- 0
   menor_idade <- 140
   menor_altura <- 4
   maior_altura <- 0
   cont <- 1
   repita
           // entrada de dados - receber nome, idade, sexo, altura e peso de 30 pessoas
           escreval ("Informe o nome: ")
           leia (nome)
           escreval ("Informe a idade: ")
           leia (idade)
           repita
                escreval ("Informe o sexo (digite M para masculino e F para feminino): ")
                leia (sexo)
           ate (sexo = "m") ou (sexo = "f")
           escreval ("Informe a altura: ")
           leia (altura)
           escreval ("Informe o peso: ")
           leia (peso)
           
           // processamento
           // obter a maior e a menor altura
           se (maior_altura >= altura) entao
                maior_altura <- altura
           fimse
           
           se (menor_altura <= altura) entao
                menor_altura <- altura
           fimse
   
           // obter a maior e a menor idade
           se (maior_idade >= idade) entao
                maior_idade <- idade
           fimse

           se (menor_idade <= idade) entao
                menor_idade <- idade
           fimse
   
           // obter o maior e o menor peso
           se (maior_peso >= peso) entao
                maior_peso <- peso
           fimse

           se (menor_peso <= peso) entao
                menor_peso <- peso
           fimse
           
           // incremento do contador
           cont <- cont + 1
   ate cont = 30
   
   // saida de dados: informar o maior e o menor peso, altura e idade
   escreval ("A maior altura informada é ", maior_altura)
   escreval ("A menor altura informada é ", menor_altura)
   
   escreval ("A maior idade informada é ", maior_idade)
   escreval ("A menor idade informada é ", maior_idade)
   
   escreval ("O maior peso informado é ", maior_peso)
   escreval ("O menor peso informado é ", maior_peso)
fimalgoritmo
