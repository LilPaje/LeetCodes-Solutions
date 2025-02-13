char * mergeAlternately(char * word1, char * word2){
    int sizeWord1 = 0;
    int sizeWord2 = 0;
    while(word1[sizeWord1] != '\0'){
        ++sizeWord1;
    }
    while(word2[sizeWord2] != '\0'){
        ++sizeWord2;
    }

    char* merged = (char*)malloc(sizeof(char) * (sizeWord1 + sizeWord2 + 1 ));

    int i,k;
    for (i = 0,k = 0; k < sizeWord1+sizeWord2; i++) {
        if (i < sizeWord1){
            merged[k] = word1[i];
            ++k;
        }
       
        if(i < sizeWord2){
            merged[k] = word2[i];
            ++k;
        }
    }   
    merged[sizeWord1+sizeWord2] = '\0'; 

    return merged;
}