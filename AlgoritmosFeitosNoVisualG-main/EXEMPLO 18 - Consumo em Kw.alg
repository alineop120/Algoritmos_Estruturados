algoritmo "Consumo de Kw"
// Função :
// Autor :
// Data : 30/08/2023
// Seção de Declarações
var
      valor_a_pagar   : real
      consumo         : inteiro
inicio
// Entrada de dados
   escreval ("Informe o consumo em Kw: ")
   leia (consumo)
   // Processamento
   se (consumo <= 150) entao
        valor_a_pagar <- consumo * 4
   senao
        se ((consumo > 150) e (consumo <= 200)) entao
              valor_a_pagar <- consumo * 7
        senao
              valor_a_pagar <- consumo * 9
        fimse
   fimse
   // Saída de dados
   escreval ("O valor final a ser pago será ", valor_a_pagar)
fimalgoritmo
