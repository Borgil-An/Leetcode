int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findContentChildren(int *g, int gSize, int *s, int sSize) {
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);

    int contentChildren = 0;
    int i = 0;
    int j = 0;

    while (i < sSize && j < gSize) {
        if (s[i] >= g[j]) {
            contentChildren++;
            i++;
            j++;
        } else {
            i++;
        }
    }

    return contentChildren;
}

// Primeira implementação do usuário do comando qsort, praticamente chupado do google 
