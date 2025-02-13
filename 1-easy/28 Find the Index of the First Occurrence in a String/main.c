int strStr(char* haystack, char* needle) {
    int position, counter = 0;
    bool isEqual = false;
    while(haystack[position] != '\0'){
        counter = 1;
        isEqual = haystack[position] == needle[0];
        //printf("%d\n",isEqual);
        while(isEqual && needle[counter] != '\0'){
            if(haystack[position+counter] == '\0'){isEqual = false; break;}
            isEqual = needle[counter] == haystack[position+counter];
            counter = counter + 1;
        }   
        //printf("%d\n",isEqual);
        if(isEqual){
            return position;
        }   
        position = position+1;    
    }
    return -1; 
}