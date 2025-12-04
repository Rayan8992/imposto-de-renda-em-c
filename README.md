# imposto-de-renda-em-c

Cálculo do imposto de renda (tabela válida a partir de maio/2025).

## Build e execução local

gcc -std=c11 -I src src/tax.c src/main.c -lm -o ir
./ir 3000.00

ou

echo "3000" | ./ir

## Rodar testes

gcc -std=c11 -I src src/tax.c tests/test_tax.c -lm -o run-tests
./run-tests
