#include <stdio.h>
#include <stdlib.h>

int main()
{
    int RA = 1, Cont = 0, Aprv = 0;
    float N1, N2, Tt = 0, Classe = 0, MediaGeral = 0;
    do
    {
        printf("Digite o RA do aluno: CL");
        scanf("%d", &RA);
        if (RA == 0)
        {
          MediaGeral = (Classe / Cont);
          printf("===================================\n");
          printf("Media geral da turma: %.1f \n", MediaGeral);
          printf("Numero de Alunos avaliados: %d \n", Cont);
          printf("===================================\n");
        }
        else
        {
            printf("Digite a primeira nota do aluno: ");
            scanf("%f", &N1);
            printf("Digite a segunda nota do aluno: ");
            scanf("%f", &N2);

            if ((N1 > 10) || (N1 < 0))
            {
                printf("===================================\n");
                printf("Valor Invalido, utilize a nota de 0 a 10\n");
                printf("===================================\n");
                return 0;
            }
            if ((N2 > 10) || (N2 < 0))
            {
                printf("===================================\n");
                printf("Valor Invalido, utilize a nota de 0 a 10\n");
                printf("===================================\n");
                return 0;
            }

            else
            {
                printf("===================================\n");
                Tt = ((N1 + N2) / 2);
                Classe = (Tt + Classe);

                if (Tt >= 6)
                {
                    printf("Aluno Aprovado! \n");
                    printf("Media do aluno = %.1f \n", Tt);
                    printf("===================================\n");
                    Cont++;
                    Aprv++;
                }

                else
                {
                    printf("Aluno Reprovado! \n");
                    printf("Media do aluno = %.1f \n", Tt);
                    printf("===================================\n");
                    Cont++;
                }
            }

        }

    }
    while (RA != 0);
    return 0;
}
