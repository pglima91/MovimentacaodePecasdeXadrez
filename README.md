# xadrez.c

# Simulação de Movimentos de Peças de Xadrez em C

Este programa em linguagem C simula os movimentos de quatro peças do jogo de xadrez: *Torre, Bispo, Rainha e Cavalo*. Cada peça executa um movimento específico, e o programa exibe no console a direção percorrida a cada casa movimentada.

---

Funcionalidades

O programa foi desenvolvido com o objetivo de demonstrar o uso de diferentes estruturas de repetição em C (for, while e do-while), além de loops aninhados.

Peças Simuladas:

- Torre:
  - Movimento: 5 casas para a Direita.
  - Estrutura utilizada: for.

- Bispo:
  - Movimento: 5 casas na diagonal Cima Direita (movimento combinado de duas direções).
  - Estrutura utilizada: while.

- Rainha:
  - Movimento: 8 casas para a *Esquerda*.
  - Estrutura utilizada: do-while.

- Cavalo:
  - Movimento: Movimento em "L" — 2 casas para Baixo e 1 casa para a Esquerda.
  - Estruturas utilizadas: **for + while alinhados.


- Saída esperada no console:
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
