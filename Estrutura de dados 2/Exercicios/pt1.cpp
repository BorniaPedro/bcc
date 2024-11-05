// Altere ␣bubble_sort() para ordenar vetores de números reais.

void bubble_sort(int v[], int n) {
    for(int i = 1; i <= n-1; i++) {
        for(int j=0; j<n-i; j++) {
            if( v[j]>v[j+1] ) {
                int x = v[j];
                v[j] = v[j+1];
                v[j+1] = x;
            }
        }
    }
}