/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>
#include <algorithm>
#include <math.h>
// constraints
#define MAXN 10000

// input data
int N, B, i;
int V[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);                  //cORREGGERE










  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d%d", &N, &B));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &V[i]));
    std::sort (V,V+N);

    //int prezzo_provato=B-1;
    int resto;
    /*while(resto!=0){                      //Prova n°1
        prezzo_provato++;

        for(i=N;i>0;i--){           //Prova con massimo decrescente
            resto=prezzo_provato;
            for(j=i;j>0;j--){       //Singola prova
                resto=B%V[j];
            }
            if(resto==0)            //Esci da tutto
                break;
        }
    }*/

    for(long double j=0; j<pow(2,N);j++){}
    char caso[N];
    for(i=0;i<N;i++)
        ca

    // insert your code here

    printf("%d\n", prezzo_provato); // change 42 with actual answer
    return 0;
}
