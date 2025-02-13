int sizeOfWord(char* s){
    int size = 0;
    while(s[size] != '\0'){
        ++size;
    }

    return size;
}

void insertionSort(char* s, int size){
    char key;
    int j;
    
    for(int i=1; i < size; i++){
        key = s[i];
        j = i-1;
        while(j >= 0 && key < s[j]){
            s[j+1] = s[j];
            j = j-1;
        }
        s[j+1] = key;
    }
}



char findTheDifference(char* s, char* t) {
    int size = sizeOfWord(s);
    //printf("%s\n\n", s);
    insertionSort(s, size);
    insertionSort(t, size+1);
    //printf("%s\n\n", s);

    for(int i=0; i<sizeOfWord+1; i++){
        if(s[i] != t[i]){
            return t[i];
        }
    }

    return '0';
}