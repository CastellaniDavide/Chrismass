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
    freopen("output.txt", "w", stdout);


    int somma = 0;


    assert(2 == scanf("%d%d", &N, &B));
    for(i=0; i<N; i++){
        assert(1 == scanf("%d", &V[i]));
        somma+=V[i];
    }

    if(somma <= B){
         printf("%d\n", somma); // change 42 with actual answer
        exit(0);
    }

    //std::sort (V,V+N);

    for(i=0; i<pow(2,N); i++){
        int s=0;
        int m=1;
        for (int k=0;k<N;k++){
            if (i&m)
                s+=V[k];
            if(s>somma)
                break;

            m<<=1;
        }

        if (s>= B && s <somma)
            somma=s;
    }



    printf("%d\n", somma); // change 42 with actual answer
    return 0;
}
