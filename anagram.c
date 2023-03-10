/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int isEquals(int sHash[],int pHash[]){
    for(int i=0;i<26;i++){
        if(sHash[i]!=pHash[i]){return 0;}
    }
    return 1;
}
int* findAnagrams(char* s, char* p, int* returnSize) {
    int *ret=(int*)malloc(sizeof(int)*100000);
    *returnSize=0;
    int sLen=strlen(s);
    int pLen=strlen(p);
    if(sLen<pLen){return NULL;}
    int pHash[26]={0};
    int sHash[26]={0};
    for(int i=0;i<sLen;i++){sHash[s[i]-'a']++;}
    for(int i=0;i<pLen;i++){
        if(sHash[p[i]-'a']==0){
            *returnSize=0;
            return NULL; 
        }
        pHash[p[i]-'a']++;
    }
    memset(sHash,0,26*sizeof(int));
    for(int i=0;i<pLen;i++){sHash[s[i]-'a']++;}
    if(isEquals(sHash,pHash)){ret[(*returnSize)++]=0;}
    for(int i=1;i<sLen-pLen+1;i++){
         sHash[s[i-1]-'a']--;
         sHash[s[i+pLen-1]-'a']++;
         if(isEquals(sHash,pHash)){ret[(*returnSize)++]=i;}
    }
    return ret;
}