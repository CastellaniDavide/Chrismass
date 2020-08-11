/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>


// constraints
#define MAXN 10000

// input data
int N, B, i;
int V[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);



    assert(2 == scanf("%d%d", &N, &B));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &V[i]));

    int somma = 0;
    int a;

    std::sort (V,V+N);
    /*for(i=0; i<N; i++){
        somma += V[i];
    }
    if(somma>B){
        for(i = 0; i < N; i++) {
            if(somma-V[i]>=B)
                somma -= V[i];
        }
    }*/
    for(i=0; i<N; i++){
        if(somma+V[i] <= B)
            somma += V[i];
        else {
            break;
            a = i;
        }
    }
    if(somma < B)
        somma += V[a];



    printf("%d\n", somma); // change 42 with actual answer
    return 0;
}
