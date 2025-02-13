bool isAnagram(char* s, char* t) {
    int counter[256] = {0};
    int sizeS = strlen(s);
    int sizeT = strlen(t);

    if (sizeT!=sizeS) return false;

    int i = 0;
    while(s[i] != '\0'){
        counter[s[i]]++;
        counter[t[i]]--;
        i++;
    }

    for(i = 0; i<256; i++){
        if(counter[i] != 0) return false;
    }
    return true;
}