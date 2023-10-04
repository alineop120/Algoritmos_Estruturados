algoritmo "Abono salarial"
// Função :
// Autor :
// Data : 30/08/2023
// Seção de Declarações 
var
      salario_fixo, salario_final   : real
      idade                         : inteiro
      sexo                          : caracter
inicio
// Entrada de dados
   escreval ("Informe a idade: ")
   leia (idade)
   escreval ("Informe o sexo (m - para masculino e f- para feminino)")
   leia (sexo)
   escreval ("Informe o salario: ")
   leia (salario_fixo)
   // Processamento
   se ((sexo = "m") e (idade >= 30)) entao
        salario_final <- salario_fixo + 100
   senao
        se ((sexo = "m") e (idade < 30)) entao
              salario_final <- salario_fixo + 50
        senao
             se ((sexo = "f") e (idade >= 25)) entao
                  salario_final <- salario_fixo + 100
             senao
                  salario_final <- salario_fixo + 50
             fimse
        fimse
   fimse
   // Saída de dados
   escreval ("O salario final é ", salario_final)
fimalgoritmo
